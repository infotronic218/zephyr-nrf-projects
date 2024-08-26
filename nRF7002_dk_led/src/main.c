#include<zephyr/kernel.h>
#include<zephyr/logging/log.h>
#include<zephyr/drivers/gpio.h>
#include<zephyr/device.h>
#include<zephyr/drivers/flash.h>
LOG_MODULE_REGISTER(main, LOG_LEVEL_DBG);


static struct gpio_dt_spec led_dev = GPIO_DT_SPEC_GET(DT_NODELABEL(led1), gpios);


int main()
{
    if(!device_is_ready(led_dev.port)){
        LOG_ERR("Device is not  ready");
        return -1 ;
    }

    gpio_pin_configure_dt(&led_dev, GPIO_OUTPUT_ACTIVE);

    while(1)
    {
        k_msleep(2000);
        LOG_INF("Hello world !");
        gpio_pin_set_dt(&led_dev, 0);
        k_msleep(1000);
        gpio_pin_set_dt(&led_dev, 1);
    }
    return 0 ;
}