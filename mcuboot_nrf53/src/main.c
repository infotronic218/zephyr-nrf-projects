#include<zephyr/kernel.h>
#include<zephyr/logging/log.h>

int main()
{
    while(1)
    {
        k_msleep(5000);
        k_msleep(1000);
        
    }
}