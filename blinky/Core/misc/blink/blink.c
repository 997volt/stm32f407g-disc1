#include "blink.h"
#include "stm32f4xx_hal.h"

void blink(uint32_t delay)
{
    HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
    HAL_Delay(delay);
}