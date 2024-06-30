#pragma once

#define VIAL_KEYBOARD_UID {0x59, 0x41, 0x4B, 0x41, 0x4D, 0x4F, 0x5A, 0x31}
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 } 

#define WS2812_DI_PIN GP1


#ifdef OLED_ENABLE

#define OLED_DISPLAY_128X64
#define OLED_FONT_H "./lib/glcdfont.c"
#define OLED_TIMEOUT 30000

#define OLED_PRE_CHARGE_PERIOD 0x22
#define OLED_VCOM_DETECT 0x35

#endif // OLED_ENABLE

/* Indicator LEDs */
#define LED_CAPS_LOCK_PIN GP25
#define LED_PIN_ON_STATE 1