#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// --------- ENUM ---------
typedef enum {
    MODE_AUTO,
    MODE_MANUAL
} SystemMode;

typedef enum {
    BUTTON_ON,
    BUTTON_OFF
} ButtonState;

// struct chứa mode
typedef struct {
    SystemMode mode;
} SystemConfigg;

typedef enum{
    WATERING_OFF,
    WATERING_ON 
} watering_state_t;

typedef struct watering_logic
{
    uint8_t high_humidity;
    uint8_t low_humidity;
    uint8_t watering;
    uint8_t stop_watering;
   
} watering_logic_t;

typedef enum {
    PUMP_OFF,
    PUMP_ON
} PumpState;

typedef enum {
    LED_NORMAL,
    LED_WATERING,
    LED_LOW_MOISTURE_ALERT,
    LED_ERROR
} LedState;

// --------- STRUCT ---------
typedef struct {
    int moisture;    // % độ ẩm đất
    int temperature; // °C
} SensorData;

typedef struct {
    int moisture_min;      // ngưỡng thấp
    int moisture_max;      // ngưỡng cao
    int max_watering_time; // giây
    int check_interval;    // giây
    SystemMode mode;       // chế độ hệ thống
} SystemConfig;

// --------- Biến toàn cục ---------
extern SensorData g_sensorData;
extern SystemConfig g_config;
extern PumpState g_pumpState;
extern LedState g_ledState;
extern void init_SystemMode(SystemConfigg *state);

#endif
