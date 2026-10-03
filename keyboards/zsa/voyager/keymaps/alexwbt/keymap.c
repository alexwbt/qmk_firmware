#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
  #define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_MINUS,       KC_EQUAL,       KC_BSPC,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RSFT, KC_ENTER),
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_CTRL,
                                                    KC_SPACE,       MO(1),                                          MO(2),          KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_UNDS,                                        KC_DELETE,      KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT,                                 KC_RIGHT_GUI,   KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_NUM,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [2] = LAYOUT_voyager(
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_GRAVE,       KC_LPRN,        KC_RPRN,        KC_DQUO,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_LCBR,        KC_RCBR,        KC_QUOTE,       KC_TRANSPARENT, KC_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT,                                 KC_RIGHT_GUI,   KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    QK_LLCK,        KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_BTN3,     KC_MS_WH_RIGHT, KC_TRANSPARENT,                                 RGB_VAI,        RGB_VAD,        KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_MS_WH_UP,                                    KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_INSERT,      KC_CAPS,
    KC_TRANSPARENT, KC_MS_BTN8,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,                                  KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_RIGHT_ALT,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_BTN7,     KC_MS_BTN6,     KC_MS_BTN5,     KC_MS_BTN4,     KC_LEFT_GUI,                                    KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, TO(4),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_CAPS,        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_K,           KC_TRANSPARENT,
    TG(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_M,           TO(0),
                                                    KC_TRANSPARENT, KC_LEFT_CTRL,                                   KC_ENTER,       KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
// clang-format on

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb(hsv);
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){f * rgb.r, f * rgb.g, f * rgb.b};
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
  [0]
  = {{75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255}, {75, 28, 255},
     {75, 28, 255}, {75, 28, 255}},
  [1]
  = {{0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 206, 221}, {0, 206, 221}, {0, 206, 221},
     {0, 206, 221}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210}, {0, 242, 210},
     {0, 242, 210}, {0, 242, 210}},
  [2] = {{169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176},
         {169, 249, 176}, {169, 249, 176}, {169, 249, 176}, {169, 249, 176}},
  [3] = {{36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255},
         {36, 255, 255}, {36, 255, 255}, {36, 255, 255}, {36, 255, 255}},
  [4] = {{139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206}},
  [5] = {{139, 216, 206}, {169, 246, 220}, {169, 246, 220}, {169, 246, 220},
         {169, 246, 220}, {169, 246, 220}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {169, 246, 220}, {169, 246, 220},
         {169, 246, 220}, {169, 246, 220}, {169, 246, 220}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {169, 246, 220},
         {169, 246, 220}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206},
         {139, 216, 206}, {139, 216, 206}, {139, 216, 206}, {139, 216, 206}},
};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb_matrix_set_color(i, 0, 0, 0);
    } else {
      RGB rgb = hsv_to_rgb_with_value(hsv);
      rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
    return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
    case 0: set_layer_color(0); break;
    case 1: set_layer_color(1); break;
    case 2: set_layer_color(2); break;
    case 3: set_layer_color(3); break;
    case 4: set_layer_color(4); break;
    case 5: set_layer_color(5); break;
    default:
      if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
        rgb_matrix_set_color_all(0, 0, 0);
      }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work
    // inconsistently across operating systems, this makes sure that modifiers
    // are always applied to the key that was pressed.
    if (
      IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))
      || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))
    ) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, 1, 2, 3);
  if (is_layer_locked(3)) state |= ((layer_state_t)1 << 3);
  return state;
}

bool layer_lock_set_user(layer_state_t locked_layers) {
  if (!(locked_layers & ((layer_state_t)1 << 3))) layer_off(3);
  return true;
}
