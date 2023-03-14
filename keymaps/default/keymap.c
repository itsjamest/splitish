// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MINS, RGB_TOG, KC_PAUS, KC_SLCT, KC_PSCR,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,
        KC_5,    KC_6,
        KC_7,    KC_8,    XXXXXXX,
        KC_9,    KC_0,    XXXXXXX, XXXXXXX, XXXXXXX
    )
};
void housekeeping_task_user(void) {
    rgblight_setrgb_at(255, 0, 0, 0);
}