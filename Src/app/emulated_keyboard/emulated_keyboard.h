#ifndef _EMULATED_KEYBOARD_
#define _EMULATED_KEYBOARD_

#include <stdint.h>

enum KEYCODES {
  ENTER = 0x28,
  ARROW_UP = 0x60,
  ARROW_DOWN = 0x5A,
  ARROW_LEFT = 0x5C,
  ARROW_RIGHT = 0x5E
};

void emulated_keyboard_init();
void emulated_keyboard_write_char(uint8_t byte);

#endif
