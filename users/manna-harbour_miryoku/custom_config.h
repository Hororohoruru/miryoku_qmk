// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO
#define PERMISSIVE_HOLD

#if defined (KEYBOARD_crkbd)
#define MIRYOKU_MAPPING( \
          K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
          K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
          K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
          N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
    ) \
    LAYOUT_split_3x6_3( \
    XXX,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  XXX, \
    XXX,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  XXX, \
    XXX,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  XXX, \
                      K32,  K33,  K34,         K35,  K36,  K37 \
    )
#endif

#if defined (KEYBOARD_naked48)
#define MIRYOKU_MAPPING(\
        K00,   K01,   K02,   K03,   K04,                 K05,   K06,   K07,   K08,   K09,\
        K10,   K11,   K12,   K13,   K14,                 K15,   K16,   K17,   K18,   K19,\
        K20,   K21,   K22,   K23,   K24,                 K25,   K26,   K27,   K28,   K29,\
        N30,   N31,   K32,   K33,   K34,                 K35,   K36,   K37,   N38,   N39\
        )\
        LAYOUT_ortho_4x12(\
                XXX,   K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, XXX, \
                XXX,   K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, XXX, \
                XXX,   K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, XXX, \
                XXX,   XXX,   XXX,   K32,   K33,   K34,   K35,   K36,   K37,   XXX,   XXX, XXX \
        )
#endif

/**
#define MIRYOKU_LAYER_BASE \
    KC_Q,               KC_W,               KC_E,           KC_R,           KC_T,       KC_Y,   KC_U,           KC_I,           KC_O,           KC_P,              \
    LGUI_T(KC_A),       LALT_T(KC_S),       LCTL_T(KC_D),   LSFT_T(KC_F),   KC_G,       KC_H,   LSFT_T(KC_J),   LCTL_T(KC_K),   LALT_T(KC_L),   LGUI_T(ES_ACUT),   \
    LT(U_BUTTON,KC_Z),  ALGR_T(KC_X),       KC_C,           KC_V,           KC_B,       KC_N,   KC_M,           KC_COMM,        KC_DOT,         ES_QUOT,           \
    U_NP, U_NP,         LT(U_MEDIA,KC_ESC), LT(U_NAV,KC_SPC),   LT(U_MOUSE,KC_TAB),     LT(U_SYM,KC_ENT),   LT(U_NUM,KC_BSPC),  LT(U_FUN,KC_DEL),   U_NP, U_NP     \

#define MIRYOKU_LAYER_EXTRA \
    KC_Q,              KC_D,               KC_R,              KC_W,         KC_B,            KC_J,             KC_F,              KC_U,              KC_P,           ES_ACUT,           \
    LGUI_T(KC_A),      LALT_T(KC_S),       LCTL_T(KC_H),      LSFT_T(KC_T), KC_G,            KC_Y,             LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),   LGUI_T(KC_I),      \
    LT(U_BUTTON,KC_Z), ALGR_T(KC_X),       KC_M,              KC_C,         KC_V,            KC_K,             KC_L,              KC_COMM,           ALGR_T(KC_DOT), LT(U_BUTTON,ES_QUOT),\
    U_NP,U_NP,         LT(U_MEDIA,KC_ESC), LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),            LT(U_SYM,KC_ENT), LT(U_NUM,KC_BSPC),  LT(U_FUN,KC_DEL),                  U_NP, U_NP \

#define MIRYOKU_LAYER_TAP \
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              	KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
    KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              	KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
    KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              	KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
    U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,			KC_ENT,            LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP \

#define MIRYOKU_LAYER_MOUSE \
    TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NU,              \
    U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           U_NU,              \
    U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP              \

#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           KC_CAPS,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP 	      \

#define MIRYOKU_LAYER_NUM \
    KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
    KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
    KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              \
    U_NP,              U_NP,              ES_LABK,           KC_0,              ES_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP \

#define MIRYOKU_LAYER_SYM \
    ALGR(ES_ACUT),     ES_SLSH,           ES_ASTR,           ES_LPRN,           ALGR(ES_CCED),           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
    ES_LBRC,           ES_DLR,            ES_EURO,           ES_NOT,            ES_RBRC,                 U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
    ES_TILD,           ES_PIPE,           ES_AT,             ES_HASH,           ES_BSLS,                 U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              \
    U_NP,              U_NP,              ES_LPRN,           ES_RPRN,           ES_UNDS,                 U_NA,              U_NA,              U_NA,              U_NP,              U_NP \

#define MIRYOKU_LAYER_FUN \
    KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
    KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
    KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              \
    U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP \
*/

// Lumberjack
#if defined (KEYBOARD_peej_lumberjack)

#define MIRYOKU_LAYERMAPPING_TAP(\
        K00,   K01,   K02,   K03,   K04,                 K05,   K06,   K07,   K08,   K09,\
        K10,   K11,   K12,   K13,   K14,                 K15,   K16,   K17,   K18,   K19,\
        K20,   K21,   K22,   K23,   K24,                 K25,   K26,   K27,   K28,   K29,\
        N30,   N31,   K32,   K33,   K34,                 K35,   K36,   K37,   N38,   N39\
        )\
	LAYOUT_ortho_5x12( \
    	KC_ESC,   KC_1,    KC_2,     KC_3,   KC_4,   KC_5,        KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   XXX, \
        KC_TAB,   K00,     K01,      K02,    K03,    K04,         K05,    K06,    K07,    K08,    K09,    XXX, \
    	KC_CAPS,  K10,     K11,      K12,    K13,    K14,         K15,    K16,    K17,    K18,    K19,    XXX, \
    	KC_LSFT,  K20,     K21,	     K22,    K23,    K24,         K25,    K26,    K27,    K28,    K29,    XXX, \
    	KC_LCTL,  KC_LGUI, K32,  KC_LALT,    K33,    K34,         K35,    K36,    K37,    XXX,    XXX,    XXX \
	)

#endif
