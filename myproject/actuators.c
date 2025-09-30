#include "actuators.h"
#include <stdio.h>
#include "watering_logic.h"


void pump_mode(watering_state_t mode)
{
    if(mode == WATERING_ON)
    {
        printf("Bơm bật\n");
    }
    else if(mode == WATERING_OFF)
    {
        printf("Bơm tắt\n");
    }
    else
    {

    }
}
void run_the_pump(watering_logic_t *logic)
{
    if(logic->low_humidity == 1)
    {
        pump_mode(WATERING_ON);
    }
    else if(logic->high_humidity == 1)
    {
        pump_mode(WATERING_OFF);
    }
}