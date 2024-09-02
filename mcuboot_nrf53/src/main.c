#include<zephyr/kernel.h>
#include<zephyr/logging/log.h>


int main()
{
    while(1)
    {
        k_msleep(1000);
        printk("Hello boss you are the big one \n\r");
    }
    return 0 ;
}