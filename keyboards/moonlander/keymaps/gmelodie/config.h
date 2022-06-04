/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef DEBOUNCE
#define DEBOUNCE 5

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"XJNWy/w4qZ3"
#define RGB_MATRIX_STARTUP_SPD 60
#define TAPPING_TERM 135
#define TAPPING_TERM_PER_KEY

/* Things for "home row" modifiers */
#define IGNORE_MOD_TAP_INTERRUPT
#define BILATERAL_COMBINATIONS 300
/* #define TAPPING_FORCE_HOLD // maybe TAPPING_FORCE_HOLD_PER_KEY */
#define HOLD_ON_OTHER_KEY_PRESS
/* #define PERMISSIVE_HOLD */
