// Copyright 2021 Jean Pierre Cimalando
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
//

#pragma once
#include "ysfx.h"
#include "ysfx_midi.hpp"
#include "ysfx_parse.hpp"
#include "ysfx_api_eel.hpp"
#include "ysfx_api_reaper.hpp"
#include "ysfx_api_file.hpp"
#include "ysfx_api_gfx.hpp"
#include "ysfx_utils.hpp"
#include "WDL/eel2/ns-eel.h"
#include "WDL/eel2/ns-eel-int.h"
#include <unordered_map>
#include <atomic>

YSFX_DEFINE_AUTO_PTR(NSEEL_VMCTX_u, void, NSEEL_VM_free); // NOTE: `NSEEL_VMCTX` is `void *`
YSFX_DEFINE_AUTO_PTR(NSEEL_CODEHANDLE_u, void, NSEEL_code_free); // NOTE: `NSEEL_CODEHANDLE` is `void *`

struct ysfx_source_unit_t {
    ysfx_toplevel_t toplevel;
    ysfx_header_t header;
};
using ysfx_source_unit_u = std::unique_ptr< ysfx_source_unit_t>;

enum ysfx_file_type_t {
    ysfx_file_type_none,
    ysfx_file_type_txt,
    ysfx_file_type_raw,
    ysfx_file_type_audio,
};

struct ysfx_s {
    ysfx_config_u config;
    eel_string_context_state_u string_ctx;
    ysfx::mutex string_mutex;
    ysfx::mutex atomic_mutex;
    NSEEL_VMCTX_u vm;

    // some default values, these are not standard, just arbitrary
    uint32_t block_size = 128;
    ysfx_real sample_rate = 44100;
    uint32_t valid_input_channels = 2;

    bool is_freshly_compiled = false;
    bool must_compute_init = false;
    bool must_compute_slider = false;

    std::unordered_map<ysfx_real *, uint32_t> slider_of_var;

    // source
    struct {
        std::string main_file_path;
        ysfx_source_unit_u main;
        std::vector<ysfx_source_unit_u> imports;
        std::unordered_map<std::string, uint32_t> slider_alias;
    } source;

    // compilation
    struct {
        bool compiled = false;
        std::vector<NSEEL_CODEHANDLE_u> init;
        NSEEL_CODEHANDLE_u slider;
        NSEEL_CODEHANDLE_u block;
        NSEEL_CODEHANDLE_u sample;
        NSEEL_CODEHANDLE_u gfx;
        NSEEL_CODEHANDLE_u serialize;
    } code;

    // VM variables
    struct {
        EEL_F *spl[ysfx_max_channels] = {};
        EEL_F *slider[ysfx_max_sliders] = {};
        EEL_F *srate = nullptr;
        EEL_F *num_ch = nullptr;
        EEL_F *samplesblock = nullptr;
        EEL_F *trigger = nullptr;
        EEL_F *tempo = nullptr;
        EEL_F *play_state = nullptr;
        EEL_F *play_position = nullptr;
        EEL_F *beat_position = nullptr;
        EEL_F *ts_num = nullptr;
        EEL_F *ts_denom = nullptr;
        EEL_F *ext_noinit = nullptr;
        EEL_F *ext_nodenorm = nullptr;
        EEL_F *ext_midi_bus = nullptr;
        EEL_F *midi_bus = nullptr;
        EEL_F ret_temp = 0;
    } var;

    // MIDI
    struct {
        ysfx_midi_buffer_u in;
        ysfx_midi_buffer_u out;
    } midi;

    // Slider
    struct {
        uint64_t automate_mask = 0;
        uint64_t change_mask = 0;
        uint64_t visible_mask = 0;
        uint64_t old_visible_mask = 0;
    } slider;

    // Triggers
    uint32_t triggers = 0;

    // Files
    struct {
        std::vector<ysfx_file_u> list;
        ysfx::mutex list_mutex;
    } file;

#if !defined(YSFX_NO_GFX)
    // Graphics
    ysfx_gfx_state_u gfx_state;
    std::atomic<bool> gfx_must_init{false};
#endif
};

void ysfx_unload_source(ysfx_t *fx);
void ysfx_unload_code(ysfx_t *fx);
void ysfx_first_init(ysfx_t *fx);
void ysfx_fill_file_enums(ysfx_t *fx);
void ysfx_fix_invalid_enums(ysfx_t *fx);
ysfx_section_t *ysfx_search_section(ysfx_t *fx, uint32_t type);
std::string ysfx_resolve_import_path(ysfx_t *fx, const std::string &name, const std::string &origin);
uint32_t ysfx_current_midi_bus(ysfx_t *fx);
void ysfx_clear_files(ysfx_t *fx);
ysfx_file_t *ysfx_get_file(ysfx_t *fx, uint32_t handle, std::unique_lock<ysfx::mutex> &lock, std::unique_lock<ysfx::mutex> *list_lock = nullptr);
int32_t ysfx_insert_file(ysfx_t *fx, ysfx_file_t *file);
void ysfx_serialize(ysfx_t *fx);
uint32_t ysfx_get_slider_of_var(ysfx_t *fx, EEL_F *var);
ysfx_file_type_t ysfx_detect_file_type(ysfx_t *fx, const char *path, void **fmtobj);
