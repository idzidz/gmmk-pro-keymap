/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

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

#include QMK_KEYBOARD_H
#include "config.h"
#include "rgb_matrix_map.h"
#include "colour.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // ORIGINAL
    // [0] = LAYOUT(
    //     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
    //     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
    //     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
    //     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
    //     KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
    //     KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    // ),

    // IVAN
    [0] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_END,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGUP,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,            _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

};

// static uint8_t state = ENCODER_DEFAULT;

// const encoder_callback encoder_mapping[][2] = {
//     [ENCODER_VOLUME] = {&volume_up, &volume_down},
// #ifdef RGB_MATRIX_ENABLE
//     [ENCODER_RGB_HUE] = {&rgb_matrix_increase_hue_noeeprom, &rgb_matrix_decrease_hue_noeeprom},
//     [ENCODER_RGB_SAT] = {&rgb_matrix_increase_sat_noeeprom, &rgb_matrix_decrease_sat_noeeprom},
//     [ENCODER_RGB_VAL] = {&rgb_matrix_increase_val_noeeprom, &rgb_matrix_decrease_val_noeeprom},
//     [ENCODER_RGB_EFFECT] = {&rgb_matrix_step_noeeprom, &rgb_matrix_step_reverse_noeeprom},
//     [ENCODER_RGB_EFFECT_SPEED] = {&rgb_matrix_increase_speed_noeeprom, &rgb_matrix_decrease_speed_noeeprom},
// #endif // RGB_MATRIX_ENABLE
// };


bool encoder_update_user(uint8_t index, bool clockwise) {

    // If holding down LEFT SHIFT, do NEXT/PREVIOUS media (Spotify)
    if (keyboard_report->mods & MOD_BIT(KC_LSFT)){
        if (clockwise){
            tap_code(KC_MEDIA_NEXT_TRACK);
        }else{
            tap_code(KC_MEDIA_PREV_TRACK);
        }

    // If holding down LEFT CTRL, do VOLUP/VOLDOWN (Original functionality)
    }else if (keyboard_report->mods & MOD_BIT(KC_LCTL)){
        if (clockwise){
            tap_code(KC_VOLU);
        }else{
            tap_code(KC_VOLD);
        }

    // Future block - RGB intensity here with ALT modify
    }else if (keyboard_report->mods & MOD_BIT(KC_LALT)){
        if (clockwise){
            //rgb_matrix_decrease_val;
        }else{
            //rgb_matrix_decrease_val;
        }

    // No keys being held down, do REDO/UNDO 
    }else{
        if (clockwise) {
            tap_code16(C(KC_Y));
        }else {
            tap_code16(C(KC_Z));
        }
    }
    return true;
}



#ifdef RGB_MATRIX_ENABLE
    void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max){
        // for(int i = 0; i<sizeof(LED_LIST_FUNCROW); i++){
        //     rgb_matrix_set_color(LED_LIST_FUNCROW[i], RGB_AZURE);
        // }
        // for(int i = 0; i<sizeof(LED_LIST_NUMROW); i++){
        //     rgb_matrix_set_color(LED_LIST_NUMROW[i], RGB_AZURE);
        // }
        // for(int i = 0; i<sizeof(LED_LIST_ARROWS); i++){
        //     rgb_matrix_set_color(LED_LIST_ARROWS[i], RGB_AZURE);
        // }
        for(int i = 0; i<sizeof(LED_SIDE_LEFT); i++){
            rgb_matrix_set_color(LED_SIDE_LEFT[i], RGB_MAGENTA);
        }
        for(int i = 0; i<sizeof(LED_SIDE_RIGHT); i++){
            rgb_matrix_set_color(LED_SIDE_RIGHT[i], RGB_MAGENTA);
        }
        // for(int i = 0; i<sizeof(LED_LIST_FUNCCOLUMN); i++){
        //     rgb_matrix_set_color(LED_LIST_FUNCCOLUMN[i], RGB_AZURE);
        // }
        // for(int i = 0; i<sizeof(LED_LIST_ALPHABET); i++){
        //     rgb_matrix_set_color(LED_LIST_ALPHABET[i], RGB_AZURE);
        // }
        // for(int i = 0; i<sizeof(LED_LIST_BOTTOMROW); i++){
        //     rgb_matrix_set_color(LED_LIST_BOTTOMROW[i], RGB_AZURE);
        // }
        // for(int i = 0; i<sizeof(LED_STRAYS); i++){
        //     rgb_matrix_set_color(LED_STRAYS[i], RGB_AZURE);
        // }

        if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)){
            rgb_matrix_set_color(LED_CAPS, RGB_MAGENTA);
        }
        // }else{
        //     rgb_matrix_set_color(LED_CAPS, RGB_AZURE);
        // }

        //arrayIteration(LED_LIST_FUNCROW);
        // rgb_matrix_set_color(LED_LIST_ARROWS, RGB_AZURE);
        // rgb_matrix_set_color(LED_LIST_NUMROW, RGB_ROSE);

        // // Right and Left sides have 8 LEDs each, can do colour changes here.
        // rgb_matrix_set_color(LED_SIDE_LEFT, RGB_GREEN);
        // rgb_matrix_set_color(LED_SIDE_RIGHT, RGB_GREEN);

    }
#endif