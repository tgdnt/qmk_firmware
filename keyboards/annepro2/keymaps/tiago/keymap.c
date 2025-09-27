#include QMK_KEYBOARD_H

enum anne_pro_layers {
  BASE,
  MOTION,
  FUNCTION,
};


// clang-format off
// Key symbols are based on QMK. Use them to remap your keyboard

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  * ,-----------------------------------------------------------------------------------------.
  * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  [  |  ]  |     ~     |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  '  |  ,  |  .  |  p  |  y  |  f  |  g  |  c  |  r  |  l  |  /  |  =  |  Bksp  |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl     |  a  |  o  |  e  |  u  |  i  |  d  |  h  |  t  |  n  |  s  |  -  |    Enter   |
  * |-----------------------------------------------------------------------------------------+
  * | Shift      |  ;  |  q  |  j  |  k  |  x  |  b  |  m  |  w  |  v  |  z  |    Shift       |
  * |-----------------------------------------------------------------------------------------+
  * | AltGr  |  GUI   | Alt   |               space             | Left  | Down |  Up  | Right |
  * \-----------------------------------------------------------------------------------------/
  * HOLD in _DVORAK_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * | FN  |     |     |     |     |     |     |     |     |     |     |     |     |           |
  * |-----------------------------------------------------------------------------------------+
  * | VIM    |     |     |     |     |     |     |     |     |     |     |     |     |        |
  * |-----------------------------------------------------------------------------------------+
  * |         |     |     |     |     |     |     |     |     |     |     |     |             |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |       |       |       |       |
  * \-----------------------------------------------------------------------------------------/
  */
  [BASE] = LAYOUT_60_ansi( /* Base */
    LT(FUNCTION, KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC,   KC_GRAVE,
    LT(MOTION, KC_TAB), KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL,  KC_BSPC,
    KC_LCTL, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS,         KC_ENT,
    KC_LSFT,KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT,
    KC_RALT,KC_LGUI, KC_LALT,                KC_SPC,               KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
  ),
  /* Layer _VIM_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * |     |     |     |     | End |     |     |     |     |    | Home |     |     |     \     |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |     |     |     |     |    | PGUP |     |     |     | Home| End | DELETE |
  * |-----------------------------------------------------------------------------------------+
  * |         |     |    | PGDN |     |     | <-  | \/  |  ^  | ->  |      |      |           |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |  GUI  |                                 |       |       |       |       |
  * \-----------------------------------------------------------------------------------------/
  */
  [MOTION] = LAYOUT_60_ansi( /* Base */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS,   KC_BSLS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_DELETE,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS,         KC_TRNS,
    KC_TRNS, KC_TRNS, KC_DELETE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,             KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS
  ),
  /* Layer _FN_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |           |
  * |-----------------------------------------------------------------------------------------+
  * |   USB  | BT1 | BT2 | BT3 | BT4 |     |     |         |     |    |    | V-  | V+  | Mute |
  * |-----------------------------------------------------------------------------------------+
  * | BT_UN   |    |    |         |    |    |     |     |     |     |     |     | LED_Off     |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |      |      |       |            |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |  RGB  |  RGB- | RGB+  |       |
  * \-----------------------------------------------------------------------------------------/
  */
  [FUNCTION] = LAYOUT_60_ansi( /* Base */
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,
    KC_TRNS, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,             KC_AP_RGB_MOD,  KC_AP_RGB_VAD, KC_AP_RGB_VAI, KC_TRNS
  ),
};
// clang-format on
