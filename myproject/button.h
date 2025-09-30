#ifndef BUTTON_H
#define BUTTON_H


#include "config.h"

extern ButtonState button;

extern void button_init(void);
extern void Set_Logic_button(ButtonState *button_state);
#endif