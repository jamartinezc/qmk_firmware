/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

#include "config_common.h"

#define PRODUCT_ID      0x3636
#define DEVICE_VER      0x0001
#define PRODUCT         Dactyl-Manuform (6x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D1
//#define RGBLED_NUM 76
#define RGBLIGHT_SPLIT
//#define RGBLED_SPLIT {38,38}
//#define RGBLIGHT_LED_MAP {37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 6, 4, 3, 2, 1, 0, 38 , 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75}

//#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
//#define RGBLIGHT_DRIVER WS2812
//#define RGBLIGHT_ANIMATIONS

#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE // Sets the default mode, if none has been set
#define DRIVER_LED_TOTAL 76
#define RGB_MATRIX_SPLIT {38,38}     // (Optional) For split keyboards, the number of LEDs connected on each half. X = left, Y = Right.
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS // enable framebuffer effects
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 600

#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT

#define TAPPING_TERM 200
