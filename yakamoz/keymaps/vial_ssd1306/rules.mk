VIA_ENABLE = yes
VIAL_ENABLE = yes

CONSOLE_ENABLE = no
LTO_ENABLE = yes
QMK_SETTINGS = yes
COMBO_ENABLE = yes

RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor

OLED_DRIVER = ssd1306
OLED_DRIVER_ENABLE= yes
OLED_TRANSPORT = i2c

OPT_DEFS += -DHAL_USE_I2C=TRUE