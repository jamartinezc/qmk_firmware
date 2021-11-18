#include QMK_KEYBOARD_H

// Tap Dance Declarations
enum {
  TD_LSFT_CAPS,
};
// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  // Tap once for shift, twice for Caps Lock
  [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_6x6(
    KC_F1,            KC_F2, KC_F3,   KC_F4,  KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   TT(1),
    LT(1,KC_ESC),     KC_1,  KC_2,    KC_3,   KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_BSPC,
    KC_TAB,           KC_Q,  KC_W,    KC_E,   KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,
    TD(TD_LSFT_CAPS), KC_A,  KC_S,    KC_D,   KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  RSFT_T(KC_RBRC),
    KC_LCTL,          KC_Z,  KC_X,    KC_C,   KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_NUBS,
                             KC_QUOT, KC_BSLS,                                         KC_MINS, KC_EQL,
                                              KC_GRV,  KC_SPC,       KC_ENT,  KC_RALT,
                                              KC_LGUI, KC_HOME,      KC_UP,   KC_RGHT,
                                              KC_DEL,  KC_END,       KC_LEFT, KC_DOWN
),
[1] = LAYOUT_6x6(
    RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD,  RGB_SAI,      RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, KC_F12,  KC_TRNS,
    RGB_TOG,  RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_K,      RGB_M_G, RGB_M_T, KC_PSLS, KC_PAST, KC_PMNS, KC_DEL,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,        KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,        KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,        KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_PEQL,
                       KC_NO,   KC_NO,                                             KC_P0,   KC_PDOT,
                                         KC_NO,    KC_NO,        KC_NO,   KC_NO,
                                         KC_NO,    KC_NO,        KC_NO,   KC_NO,
                                         EEP_RST,  KC_NO,        KC_NO,   KC_NO
)};

