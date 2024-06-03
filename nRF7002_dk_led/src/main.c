#include<zephyr/kernel.h>
#include<zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, LOG_LEVEL_DBG);


int main()
{
    while(1)
    {
        k_msleep(2000);
        LOG_INF("Hello world !");
        printk("hello world ");
    }
    return 0 ;
}