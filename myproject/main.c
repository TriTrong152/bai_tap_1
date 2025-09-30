#include <stdio.h>
#include <unistd.h>
#include "sensor.h"
#include "config.h"
#include "watering_logic.h"
#include "actuators.h"
#include "button.h"

SensorData g_sensorData;
//SystemConfigg state;


int main() 
{
    sensors_init();
    
    init_SystemMode(&state);
    button_init();

    while(1) 
    {
     watering_logic();
     run_the_pump(&logic);

    }
    return 0;
}
