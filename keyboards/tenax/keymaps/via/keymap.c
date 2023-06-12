#include QMK_KEYBOARD_H

#define _BASE 0
#define _NUMBER 1
#define _SYMBOLS 2

enum {
    M_LOGIN = SAFE_RANGE,
    M_VIM_SAVE,
    M_VIM_QUIT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤TAB│
      *           └───┤Ctl├───┐   ┌───┤BSP├───┘
      *               └───┤Ent│   │SPC├───┘
      *                   └───┘   └───┘
      */
    [_BASE] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    MT(MOD_LALT, KC_QUOTE),
        MT(MOD_LCTL, KC_Z), KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    LT(2, KC_M),    KC_COMM, KC_DOT,  MT(MOD_RSFT, KC_SLSH),
                            KC_TAB, KC_LSFT, MT(MOD_LGUI, KC_ENT),           LT(1, KC_SPC), KC_BSPC, KC_ESC
    ),
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ 7 │ 8 │ 9 │ 0 │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ 4 │ 5 │ 6 │ G │       │<- │dw │up │-> │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ 1 │ 2 │ 3 │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */
          /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ & │ * │ ( │ ) │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ $ │ % │ ˆ │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ ! │ @ │ # │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */

    [_NUMBER] = LAYOUT_split_3x5_3(
        M_LOGIN,    KC_7,    KC_8,    KC_9,    KC_0,                               KC_HOME,    KC_PAGE_DOWN,    KC_PAGE_UP,    KC_END,    KC_EQUAL,
        M_VIM_SAVE,    KC_4,    KC_5,    KC_6,    KC_NO,                           KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,    M_VIM_QUIT,
        KC_LSFT,    KC_1,    KC_2,    KC_3,    KC_NO,                              KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO,
                            KC_TAB, KC_LSFT, MT(MOD_LGUI, KC_ENT),           KC_SPC, KC_BSPC, KC_ESC
    ),
    /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ # │ ; │ ( │ ) │ " │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ | │ > │ [ │ ] │ : │       │ H │ J │ ` │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ % │ - │ = │ _ │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */
    [_SYMBOLS] = LAYOUT_split_3x5_3(
        KC_HASH,    KC_SEMICOLON,    KC_LEFT_PAREN,    KC_RIGHT_PAREN,    KC_DOUBLE_QUOTE,                 KC_MPLY,    KC_MEDIA_STOP,    KC_VOLU,    KC_VOLD,   KC_NO ,
        KC_PIPE,    KC_RIGHT_ANGLE_BRACKET,    KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,    KC_COLON,                KC_NO,    KC_NO,    KC_GRAVE,    KC_BACKSLASH,    KC_NO,
        KC_LSFT,    KC_PERCENT,    KC_MINUS,    KC_UNDERSCORE,    KC_EQUAL,                                KC_WBAK,    KC_WREF,    KC_WFWD, KC_NO,  KC_NO,
                                    KC_TAB, KC_LSFT, MT(MOD_LGUI, KC_ENT),                                         KC_SPC, KC_BSPC, KC_ESC
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed) {
        switch (keycode)
        {
        case M_LOGIN:
            SEND_STRING("rek.xcf0nhk_PRZ3crd");
            break;
        case M_VIM_SAVE:
            register_code(KC_RCTL);
            tap_code(KC_C);
            unregister_code(KC_RCTL);
            register_code(KC_LSFT);
            tap_code(KC_SEMICOLON);
            unregister_code(KC_LSFT);
            tap_code(KC_W);
            tap_code(KC_ENT);
            break;
        case M_VIM_QUIT:
            register_code(KC_RCTL);
            tap_code(KC_C);
            unregister_code(KC_RCTL);
            register_code(KC_LSFT);
            tap_code(KC_SEMICOLON);
            unregister_code(KC_LSFT);
            tap_code(KC_Q);
            tap_code(KC_ENT);
            break;
        default:
            break;
        }
    }
    return true;
};
