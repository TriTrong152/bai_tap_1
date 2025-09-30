#include "button.h"
#include <stdio.h>
#include "config.h"

ButtonState button;
void button_init()
{
    printf(" khởi tạo nút nhấn \n");
}
void Set_Logic_button(ButtonState *button_state)
{
    printf(" Nhấn nút để thay đổi chế độ (1 = OFF, 0 = ON): ");
    scanf("%d", (int*)button_state);
}