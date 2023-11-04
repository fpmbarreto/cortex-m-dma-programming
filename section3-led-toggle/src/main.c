#include "stm32f4xx_nucleo.h"

void delay(void);

void main (void)
{
    BSP_LED_Init(LED2);
    while(1)
    {
        BSP_LED_On(LED2);
        delay();
        BSP_LED_Off(LED2);
        delay();
    }
    
}

void delay(void)
{
    uint32_t i = 0;
    for(i = 0; i < 500000; i++);
}