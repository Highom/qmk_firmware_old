/*
Copyright 2018 Massdrop Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "alt.h"
#include "led_matrix.h"



//Teal <-> Salmon
led_setup_t leds_teal_salmon[] = {
    { .hs = 0,  .he = 33,  .rs = 24,  .re = 24,  .gs = 215, .ge = 215, .bs = 204, .be = 204, .ef = EF_NONE },
    { .hs = 33, .he = 66,  .rs = 24,  .re = 255, .gs = 215, .ge = 114, .bs = 204, .be = 118, .ef = EF_NONE },
    { .hs = 66, .he = 100, .rs = 255, .re = 255, .gs = 114, .ge = 114, .bs = 118, .be = 118, .ef = EF_NONE },
    { .end = 1 },
};

//Yellow
led_setup_t leds_yellow[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Off
led_setup_t leds_off[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Red
led_setup_t leds_red[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Green
led_setup_t leds_green[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Blue
led_setup_t leds_blue[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE },
    { .end = 1 },
};

//White
led_setup_t leds_white[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE },
    { .end = 1 },
};

//White with moving red stripe
led_setup_t leds_white_with_red_stripe[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE },
    { .hs = 0, .he = 15, .rs = 0, .re = 0, .gs = 0, .ge = 255, .bs = 0, .be = 255, .ef = EF_SCR_R | EF_SUBTRACT },
    { .hs = 15, .he = 30, .rs = 0, .re = 0, .gs = 255, .ge = 0, .bs = 255, .be = 0, .ef = EF_SCR_R | EF_SUBTRACT },
    { .end = 1 },
};

//Black with moving red stripe
led_setup_t leds_black_with_red_stripe[] = {
    { .hs = 0, .he = 15, .rs = 0, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R },
    { .hs = 15, .he = 30, .rs = 255, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R },
    { .end = 1 },
};

//Rainbow no scrolling
led_setup_t leds_rainbow_ns[] = {
    { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER },
    { .hs = 16.67,  .he = 33.33,  .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER },
    { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER },
    { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER },
    { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER },
    { .end = 1 },
};

//Rainbow scrolling
led_setup_t leds_rainbow_s[] = {
    { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 16.67,  .he = 33.33,  .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .end = 1 },
};

//pink and cyan scrolling
led_setup_t leds_pleasuretek_s[] = {
    { .hs = 0,      .he = 8.33,  .rs = 255, .re = 255, .gs = 255,   .ge = 255, .bs = 255,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 8.33,   .he = 16.6,  .rs = 255, .re = 255,   .gs = 255,   .ge = 20,   .bs = 255,   .be = 147,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 16.6,   .he = 24.9,  .rs = 255,   .re = 255,   .gs = 20,   .ge = 20, .bs = 147,   .be = 147,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 24.9,   .he = 33.2,  .rs = 255,   .re = 255,   .gs = 20, .ge = 255,   .bs = 147,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 33.2,   .he = 41.5,  .rs = 255,   .re = 255,   .gs = 255,   .ge = 255, .bs = 255,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 41.5,   .he = 49.8,  .rs = 255,   .re = 255,   .gs = 255, .ge = 255,   .bs = 255, .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 49.8,   .he = 58.1,  .rs = 255,   .re = 255,   .gs = 255,   .ge = 255,   .bs = 255,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 58.1,   .he = 66.4,  .rs = 255,   .re = 255,   .gs = 255,   .ge = 255,   .bs = 255,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 66.4,   .he = 74.7,  .rs = 255,   .re = 255,   .gs = 255,   .ge = 255,   .bs = 255,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 74.7,   .he = 83,    .rs = 255,   .re = 0, .gs = 255,   .ge = 255,   .bs = 255,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 83,     .he = 91.3,  .rs = 0,   .re = 0,   .gs = 255,   .ge = 255,   .bs = 255,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 91.3,   .he = 100,   .rs = 0,   .re = 255, .gs = 255,   .ge = 255,   .bs = 255,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .end = 1 },
};

//white with black stripe scrolling
led_setup_t leds_blackandwhite[] = {
    { .hs = 0,      .he = 16.67,  .rs = 0, .re = 0, .gs = 0,   .ge = 0, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 16.67,  .he = 33.33,  .rs = 0, .re = 255,   .gs = 0, .ge = 255, .bs = 0,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 33.33,  .he = 50,     .rs = 255,   .re = 255,   .gs = 255, .ge = 255, .bs = 255,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 50,     .he = 66.67,  .rs = 255,   .re = 255,   .gs = 255, .ge = 255,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 66.67,  .he = 83.33,  .rs = 255,   .re = 255, .gs = 255,   .ge = 255,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 0, .gs = 255,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .end = 1 },
};

//Teal <-> Salmon scroll
led_setup_t leds_teal_salmon_s[] = {
    { .hs = 0,  .he = 25,  .rs = 24,  .re = 24,  .gs = 215, .ge = 215, .bs = 204, .be = 204, .ef = EF_NONE | EF_SCR_R },
    { .hs = 25, .he = 50,  .rs = 24,  .re = 255, .gs = 215, .ge = 114, .bs = 204, .be = 118, .ef = EF_NONE | EF_SCR_R },
    { .hs = 50, .he = 75,  .rs = 255, .re = 255, .gs = 114, .ge = 114, .bs = 118, .be = 118, .ef = EF_NONE | EF_SCR_R },
    { .hs = 75, .he = 100, .rs = 255,  .re = 24, .gs = 114, .ge = 215, .bs = 118, .be = 204, .ef = EF_NONE | EF_SCR_R },
    { .end = 1 },
};

//Teal <-> Salmon scroll
led_setup_t leds_cyan_pinkaf_s[] = {
    { .hs = 0,  .he = 25,  .rs = 0,  .re = 0,  .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 25, .he = 50,  .rs = 0,  .re = 255, .gs = 255, .ge = 20, .bs = 255, .be = 147, .ef = EF_NONE | EF_SCR_R },
    { .hs = 50, .he = 75,  .rs = 255, .re = 255, .gs = 20, .ge = 20, .bs = 147, .be = 147, .ef = EF_NONE | EF_SCR_R },
    { .hs = 75, .he = 100, .rs = 255,  .re = 0, .gs = 20, .ge = 255, .bs = 147, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .end = 1 },
};

led_setup_t leds_cyan_pinkaf_si[] = {
    { .hs = 0, .he = 25,  .rs = 255, .re = 255, .gs = 20, .ge = 20, .bs = 147, .be = 147, .ef = EF_NONE | EF_SCR_R },
    { .hs = 25, .he = 50, .rs = 255,  .re = 0, .gs = 20, .ge = 255, .bs = 147, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 50,  .he = 75,  .rs = 0,  .re = 0,  .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 75, .he = 100,  .rs = 0,  .re = 255, .gs = 255, .ge = 20, .bs = 255, .be = 147, .ef = EF_NONE | EF_SCR_R },
    { .end = 1 },
};

led_setup_t leds_funkbutt[] = {   //I was raised in the hood
    { .hs = 0,  .he = 25,  .rs = 0,  .re = 0,  .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE | EF_SCR_R },
    { .hs = 25, .he = 50,  .rs = 0,  .re = 255, .gs = 255, .ge = 0, .bs = 0, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 50, .he = 75,  .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 75, .he = 100, .rs = 255,  .re = 0, .gs = 0, .ge = 255, .bs = 255, .be = 0, .ef = EF_NONE | EF_SCR_R },
    { .end = 1 },
};

void *led_setups[] = {
    leds_off,              //0
    leds_teal_salmon,      //1
    leds_teal_salmon_s,    //2
    leds_cyan_pinkaf_si,   //3
    leds_blackandwhite,    //4
    leds_rainbow_s,        //5
    leds_rainbow_ns,       //6
    leds_cyan_pinkaf_s,    //7
    leds_pleasuretek_s,    //8
    leds_yellow,           //9
    leds_red,              //10
    leds_green,            //11
    leds_blue,                   //12
    leds_white,                  //13
    leds_white_with_red_stripe,  //14
    leds_black_with_red_stripe,  //15            
    leds_funkbutt                //16
};

const uint8_t led_setups_count = sizeof(led_setups) / sizeof(led_setups[0]);
