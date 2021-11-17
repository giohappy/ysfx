/* Generated by re2c 2.2 on Wed Nov 17 23:15:01 2021 */
#line 1 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
/* -*- mode: c++; -*- */
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

#include "ysfx_parse.hpp"
#include "ysfx_utils.hpp"
#include <string>
#include <cstddef>
#include <cstdlib>

bool ysfx_parse_slider(const char *line, ysfx_slider_t &slider)
{
    slider = ysfx_slider_t{};

    #line 33 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"


    const char *YYCURSOR;
    const char *YYMARKER;

    
#line 39 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
const char* yyt1; const char* yyt10; const char* yyt11; const char* yyt2; const char* yyt3; const char* yyt4; const char* yyt5; const char* yyt6; const char* yyt7; const char* yyt8; const char* yyt9; 
#line 38 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"


    //NOTE(jpc): parser intensionally very permissive

    #line 45 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"


    YYCURSOR = line;

    //--------------------------------------------------------------------------
    // Parse ID and Var

    {
        const char *id1, *id2, *var1, *var2;

        
#line 58 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
{
	char yych;
	unsigned int yyaccept = 0;
	yych = *YYCURSOR;
	switch (yych) {
	case 's':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 69 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
	{
            return false;
        }
#line 74 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
yy4:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'l':	goto yy5;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy3;
	} else {
		yyt3 = yyt4 = NULL;
		goto yy14;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy8;
	default:	goto yy6;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy9;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy10;
	default:	goto yy6;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		yyt1 = YYCURSOR;
		goto yy11;
	default:	goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy11;
	case ':':
		yyt2 = YYCURSOR;
		goto yy13;
	default:	goto yy6;
	}
yy13:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:
	case '=':
		yyt3 = yyt4 = NULL;
		goto yy14;
	default:
		yyt3 = YYCURSOR;
		goto yy15;
	}
yy14:
	id1 = yyt1;
	id2 = yyt2;
	var1 = yyt3;
	var2 = yyt4;
#line 60 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
	{
            slider.id = (uint32_t)(atoi(std::string(id1, id2).c_str()) - 1);
            if (var1)
                slider.var = std::string(var1, var2);
            else
                slider.var = std::string(line, id2);
            goto end_id;
        }
#line 174 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy6;
	case '=':
		yyt4 = YYCURSOR;
		goto yy17;
	default:	goto yy15;
	}
yy17:
	++YYCURSOR;
	goto yy14;
}
#line 72 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"


        end_id: ;
    }

    if (*YYCURSOR != '/')
    {
        //--------------------------------------------------------------------------
        // Parse Range segment

        const char *def1, *def2, *min1, *min2, *max1, *max2, *inc1, *inc2, *nam1, *nam2;

        
#line 202 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
{
	char yych;
	unsigned int yyaccept = 0;
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy22;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt3 = YYCURSOR;
		goto yy23;
	case ',':
		yyt3 = yyt4 = YYCURSOR;
		goto yy24;
	case '<':
		yyt3 = yyt4 = YYCURSOR;
		goto yy26;
	default:	goto yy20;
	}
yy20:
	++YYCURSOR;
yy21:
#line 109 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
	{
            return false;
        }
#line 296 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
yy22:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
	case '+':
	case ',':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '<':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy28;
	default:	goto yy21;
	}
yy23:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
	case '+':
	case ',':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '<':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy31;
	default:	goto yy21;
	}
yy24:
	++YYCURSOR;
	yyt1 = yyt2 = yyt5 = yyt6 = yyt7 = yyt8 = yyt9 = yyt10 = NULL;
yy25:
	def1 = yyt3;
	def2 = yyt4;
	min1 = yyt1;
	min2 = yyt5;
	max1 = yyt6;
	max2 = yyt7;
	inc1 = yyt8;
	inc2 = yyt9;
	nam1 = yyt10;
	nam2 = yyt2;
#line 90 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
	{
            slider.def = ysfx::dot_atof(std::string(def1, def2).c_str());
            if (min1)
                slider.min = ysfx::dot_atof(std::string(min1, min2).c_str());
            if (max1)
                slider.max = ysfx::dot_atof(std::string(max1, max2).c_str());
            if (inc1)
                slider.inc = ysfx::dot_atof(std::string(inc1, inc2).c_str());
            if (nam1) {
                slider.is_enum = true;
                slider.enum_names = ysfx::split_strings_noempty(
                    std::string(nam1, nam2).c_str(),
                   [](char c) -> bool { return c == ','; });
                for (std::string &name : slider.enum_names)
                    name = ysfx::trim(name.c_str(), &ysfx::ascii_isspace);
            }
            goto end_range;
        }
#line 488 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
yy26:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	goto yy33;
yy27:
	yych = *++YYCURSOR;
yy28:
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy27;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt3 = YYCURSOR;
		goto yy30;
	case ',':
		yyt3 = yyt4 = YYCURSOR;
		goto yy24;
	case '<':
		yyt3 = yyt4 = YYCURSOR;
		goto yy32;
	default:	goto yy29;
	}
yy29:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy21;
	} else {
		goto yy25;
	}
yy30:
	yych = *++YYCURSOR;
yy31:
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
		yyt4 = YYCURSOR;
		goto yy34;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy30;
	case ',':
		yyt4 = YYCURSOR;
		goto yy24;
	case '<':
		yyt4 = YYCURSOR;
		goto yy32;
	default:	goto yy29;
	}
yy32:
	yych = *++YYCURSOR;
yy33:
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy32;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt1 = YYCURSOR;
		goto yy38;
	case ',':
		yyt1 = yyt5 = YYCURSOR;
		goto yy40;
	case '>':
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		yyt1 = yyt5 = YYCURSOR;
		goto yy42;
	case '{':
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		yyt1 = yyt5 = YYCURSOR;
		goto yy43;
	default:
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		yyt1 = yyt5 = YYCURSOR;
		goto yy36;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy34;
	case ',':	goto yy24;
	case '<':	goto yy32;
	default:	goto yy29;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case '>':	goto yy29;
	case '{':	goto yy43;
	default:	goto yy36;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
		yyt5 = YYCURSOR;
		goto yy45;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	case ',':
		yyt5 = YYCURSOR;
		goto yy40;
	case '>':
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		yyt5 = YYCURSOR;
		goto yy42;
	case '{':
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		yyt5 = YYCURSOR;
		goto yy43;
	default:
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		yyt5 = YYCURSOR;
		goto yy36;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy40;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt6 = YYCURSOR;
		goto yy47;
	case ',':
		yyt6 = yyt7 = YYCURSOR;
		goto yy49;
	case '>':
		yyt8 = yyt9 = NULL;
		yyt6 = yyt7 = YYCURSOR;
		goto yy42;
	case '{':
		yyt8 = yyt9 = NULL;
		yyt6 = yyt7 = YYCURSOR;
		goto yy43;
	default:
		yyt8 = yyt9 = NULL;
		yyt6 = yyt7 = YYCURSOR;
		goto yy36;
	}
yy42:
	yych = *++YYCURSOR;
	yyt2 = yyt10 = NULL;
	goto yy52;
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy36;
	case '>':
		yyt2 = yyt10 = YYCURSOR;
		goto yy56;
	case '{':	goto yy43;
	case '}':
		yyt2 = yyt10 = YYCURSOR;
		goto yy58;
	default:
		yyt10 = YYCURSOR;
		goto yy54;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy45;
	case ',':	goto yy40;
	case '>':
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		goto yy42;
	case '{':
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		goto yy43;
	default:
		yyt6 = yyt7 = yyt8 = yyt9 = NULL;
		goto yy36;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
		yyt7 = YYCURSOR;
		goto yy60;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	case ',':
		yyt7 = YYCURSOR;
		goto yy49;
	case '>':
		yyt8 = yyt9 = NULL;
		yyt7 = YYCURSOR;
		goto yy42;
	case '{':
		yyt8 = yyt9 = NULL;
		yyt7 = YYCURSOR;
		goto yy43;
	default:
		yyt8 = yyt9 = NULL;
		yyt7 = YYCURSOR;
		goto yy36;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy49;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt8 = YYCURSOR;
		goto yy62;
	case '>':
		yyt8 = yyt9 = YYCURSOR;
		goto yy42;
	case '{':
		yyt8 = yyt9 = YYCURSOR;
		goto yy43;
	default:
		yyt8 = yyt9 = YYCURSOR;
		goto yy36;
	}
yy51:
	yych = *++YYCURSOR;
yy52:
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy51;
	case ',':	goto yy53;
	default:	goto yy25;
	}
yy53:
	++YYCURSOR;
	goto yy25;
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy36;
	case '>':
		yyt2 = YYCURSOR;
		goto yy56;
	case '{':	goto yy43;
	case '}':
		yyt2 = YYCURSOR;
		goto yy58;
	default:	goto yy54;
	}
yy56:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy25;
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy56;
	case ',':	goto yy66;
	case '>':
		yyt2 = YYCURSOR;
		goto yy56;
	case '}':
		yyt11 = YYCURSOR;
		goto yy67;
	default:	goto yy64;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy58;
	case '>':	goto yy51;
	case '{':	goto yy43;
	default:	goto yy36;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy60;
	case ',':	goto yy49;
	case '>':
		yyt8 = yyt9 = NULL;
		goto yy42;
	case '{':
		yyt8 = yyt9 = NULL;
		goto yy43;
	default:
		yyt8 = yyt9 = NULL;
		goto yy36;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
		yyt9 = YYCURSOR;
		goto yy69;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy62;
	case '>':
		yyt9 = YYCURSOR;
		goto yy42;
	case '{':
		yyt9 = YYCURSOR;
		goto yy43;
	default:
		yyt9 = YYCURSOR;
		goto yy36;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy29;
	case '>':
		yyt2 = YYCURSOR;
		goto yy56;
	case '}':
		yyt11 = YYCURSOR;
		goto yy67;
	default:	goto yy64;
	}
yy66:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy25;
	case '>':
		yyt2 = YYCURSOR;
		goto yy56;
	case '}':
		yyt11 = YYCURSOR;
		goto yy67;
	default:	goto yy64;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy67;
	case '>':
		yyt2 = yyt11;
		goto yy51;
	default:	goto yy29;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy69;
	case '>':	goto yy42;
	case '{':	goto yy43;
	default:	goto yy36;
	}
}
#line 112 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"

    }
    else
    {
        //--------------------------------------------------------------------------
        // Parse Path segment

        const char *path1, *path2, *def1, *def2;

        
#line 1416 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '/':
		yyt1 = YYCURSOR;
		goto yy75;
	default:	goto yy73;
	}
yy73:
	++YYCURSOR;
yy74:
#line 131 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
	{
            return false;
        }
#line 1433 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
yy75:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x00) goto yy74;
	goto yy77;
yy76:
	yych = *++YYCURSOR;
yy77:
	switch (yych) {
	case 0x00:	goto yy78;
	case ':':
		yyt2 = YYCURSOR;
		goto yy79;
	default:	goto yy76;
	}
yy78:
	YYCURSOR = YYMARKER;
	goto yy74;
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy79;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		yyt3 = YYCURSOR;
		goto yy81;
	case ':':
		yyt3 = yyt4 = YYCURSOR;
		goto yy83;
	default:	goto yy78;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':
		yyt4 = YYCURSOR;
		goto yy85;
	case '+':
	case '-':
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy81;
	case ':':
		yyt4 = YYCURSOR;
		goto yy83;
	default:	goto yy78;
	}
yy83:
	++YYCURSOR;
	path1 = yyt1;
	path2 = yyt2;
	def1 = yyt3;
	def2 = yyt4;
#line 123 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"
	{
            slider.path = std::string(path1, path2);
            slider.def = ysfx::dot_atof(std::string(def1, def2).c_str());
            slider.inc = 1;
            slider.is_enum = true;
            goto end_range;
        }
#line 1627 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp"
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\v':
	case '\f':
	case '\r':
	case ' ':	goto yy85;
	case ':':	goto yy83;
	default:	goto yy78;
	}
}
#line 134 "/home/jpc/documents/projects/ysfx/sources/ysfx_parse_slider.cpp.re"

    }

end_range: ;

    //--------------------------------------------------------------------------
    // Parse Description

    slider.desc = ysfx::trim(YYCURSOR, &ysfx::ascii_isspace);
    if (slider.desc.empty())
        return false;

    return true;
}