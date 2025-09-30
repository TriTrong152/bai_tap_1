#ifndef WATERING_LOGIC_H
#define WATERING_LOGIC_H
#include <stdint.h>
#include "config.h"
extern watering_logic_t logic;
extern SystemConfigg state;



// logic tưới nước tự động
extern void watering_logic(void);

extern void compare_humidity(SensorData *data,SystemConfigg state,watering_logic_t *logic);










#endif
