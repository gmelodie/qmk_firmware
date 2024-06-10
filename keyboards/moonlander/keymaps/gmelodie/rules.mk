# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = yes
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
WEBUSB_ENABLE = yes
ORYX_ENABLE = yes
TAP_DANCE_ENABLE = yes
SRC = matrix.c
SRC += features/achordion.c
UNICODE_ENABLE = yes
