#pragma Gcc optimize("00")
#include "pico/stdlib.h"
#include "hardware/gpio.h"
    for (;;) {
        cnt++;
        if (cnt >= CTOP) {
            cnt = 0;
            if(gpio_get_all() & LED_MASK)
                gpio_clr_mask(LED_MASK);
            else
                gpio_set_mask(LED_MASK);
        }
    }
