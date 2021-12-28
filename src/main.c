#include "nrf.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"

int main(void)
{
    nrf_gpio_cfg_output(0);

    while (1)
    {
    nrf_gpio_pin_set(0);
    nrf_delay_ms(500);
    nrf_gpio_pin_clear(0);
    nrf_delay_ms(50);
    }
      
}