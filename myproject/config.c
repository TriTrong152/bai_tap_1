#include "config.h"

SystemConfig g_config = {
    .moisture_min = 50,
    .moisture_max = 80,
    .max_watering_time = 3,
    .check_interval = 5,
    .mode = MODE_AUTO
};



// hàm init
void init_SystemMode(SystemConfigg *state) {
    int input;
    printf("Set mode (0 = AUTO, 1 = MANUAL): ");
    scanf("%d", &input);

    if (input == 0) {
        state->mode = MODE_AUTO;
    } else if (input == 1) {
        state->mode = MODE_MANUAL;
    } else {
        printf("Gia tri khong hop le, mac dinh AUTO\n");
        state->mode = MODE_AUTO;
    }
}
