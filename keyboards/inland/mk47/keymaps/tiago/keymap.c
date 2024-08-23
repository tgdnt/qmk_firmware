/* Copyright (C) 2023 jonylee@hfd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum planck_layers {
  _DVORAK,
  _SYM,
  _PAD,
  _NUM,
  _FN
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Dvorak
    * ,-----------------------------------------------------------------------------------.
    * | Esc  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Tab  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |Enter |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |   /  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Sym  |      |      | GUI  |  Alt |    Space    | Comp | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
    [_DVORAK] = LAYOUT_planck_mit(
        LT(_FN, KC_ESC), KC_QUOT, KC_COMM, KC_DOT,  KC_P,     KC_Y, KC_F, KC_G,              KC_C,    KC_R,    KC_L,    KC_BSPC,
        CTL_T(KC_TAB),   KC_A,    KC_O,    KC_E,    KC_U,     KC_I, KC_D, KC_H,              KC_T,    KC_N,    KC_S,    KC_ENT,
        KC_LSFT,         KC_SCLN, KC_Q,    KC_J,    KC_K,     KC_X, KC_B, KC_M,              KC_W,    KC_V,    KC_Z,    KC_SLSH,
        MO(_PAD),        XXXXXXX, KC_LGUI, KC_LALT, MO(_SYM),   KC_SPC,   LT(_NUM, KC_RALT), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    /* Lower
    * ,-----------------------------------------------------------------------------------.
    * |      |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |  ~   |   -  |   [  |   ]  |   _  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |  `   |   \  |   {  |   }  |   |  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_SYM] = LAYOUT_planck_mit(
        XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, KC_TILD, KC_MINS, KC_LBRC, KC_RBRC, KC_UNDS,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,  KC_BSLS, KC_LCBR, KC_RCBR, KC_PIPE,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    /* Numbers layer
    * ,-----------------------------------------------------------------------------------.
    * |      |  F1  |  F2  |  F3  |  F4  |      |      |   7  |   8  |   9  |   *  | Del  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  F5  |  F6  |  F7  |  F8  |      |      |   4  |   5  |   6  |   -  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  F9  |  F10 |  F11 |  F12 |      |      |   1  |   2  |   3  |   +  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      | RGB- | RGB+ |    RGB MOD  |   0  |   0  |   .  |   =  |      |
    * `-----------------------------------------------------------------------------------'
    */

    [_PAD] = LAYOUT_planck_mit(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,  XXXXXXX, KC_7,    KC_8, KC_9,   KC_ASTR, KC_BSPC,
        XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,  XXXXXXX, KC_4,    KC_5, KC_6,   KC_MINS, XXXXXXX,
        XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,  XXXXXXX, KC_1,    KC_2, KC_3,   KC_PLUS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,       KC_0,    KC_0, KC_DOT, KC_EQL,  XXXXXXX
    ),

    [_NUM] = LAYOUT_planck_mit(
        XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT, 
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_FN] = LAYOUT_planck_mit(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_VAD,     RGB_MOD,      RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
};

// clang-format on

// functions RGB_VAI increase backlight, RGB_VAD decrease backlight, RGB_MOD change backlight
