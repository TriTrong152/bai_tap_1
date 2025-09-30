#include "sensor.h"
#include <stdlib.h>
#include <stdio.h>

void sensors_init(void) 
{
    printf("[SENSORS] Init OK\n");
}

void sensors_read(SensorData *data) {
    // giả lập dữ liệu (random 20–80%)
    data->moisture = rand() % 101;
    data->temperature = 20 + rand() % 15;
    printf("[SENSORS] Moisture=%d%% Temp=%dC\n", data->moisture, data->temperature);
}
