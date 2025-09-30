#include "watering_logic.h"
#include "config.h"
#include "sensor.h"
#include <unistd.h>
#include <stdio.h>
#include "button.h"
#include "actuators.h"
//Đọc dữ liệu từ cảm biến 
watering_logic_t logic;
// Khai báo là auto hay người dùng
 SystemConfigg state;



void watering_logic()
{
       // Đọc dữ liệu cảm biến
       sensors_read(&g_sensorData);
       // Logic 
       compare_humidity(&g_sensorData,state,&logic);
       //Chu kì đọc
       sleep(g_config.check_interval);
}
//Logic dựa trên cảm biến 
void compare_humidity(SensorData *data, SystemConfigg state,watering_logic_t *logic)
{
    
    if(state.mode == MODE_AUTO)
    {
        if(data->moisture < g_config.moisture_min)
        {
         logic->low_humidity=1;
        }
        else if(data->moisture > g_config.moisture_max)
        {
         logic->high_humidity=1;
        }
        else
        {
         logic->low_humidity = 0;
         logic->high_humidity = 1;
        }

     }
     else if(state.mode == MODE_MANUAL)
     {
        Set_Logic_button(&button);
        if(button == BUTTON_ON)
        {
            pump_mode(WATERING_ON);
            sleep(g_config.max_watering_time);
            pump_mode(WATERING_OFF);

        }
        else if(button == BUTTON_OFF)
        {
            pump_mode(WATERING_OFF);
        }
     }
     //printf("state %d Low: %d, High: %d\n",state,data->moisture,g_config.moisture_min);
}

