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
#define TAPPING_TERM 125
/* #define TAPPING_TERM_PER_KEY */
/* #define PERMISSIVE_HOLD_PER_KEY */
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
