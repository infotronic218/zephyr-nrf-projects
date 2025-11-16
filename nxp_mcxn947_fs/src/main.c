#include<zephyr/kernel.h>
#include<zephyr/logging/log.h>
#include<zephyr/drivers/gpio.h>

static struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_NODELABEL(red_led), gpios);
LOG_MODULE_REGISTER(main, LOG_LEVEL_DBG);

int main()

{
    gpio_pin_configure_dt(&led, GPIO_OUTPUT);
    while(1)
    {

        k_msleep(1000);
        gpio_pin_toggle_dt(&led);
        //LOG_INF("Hello world");
    }
}