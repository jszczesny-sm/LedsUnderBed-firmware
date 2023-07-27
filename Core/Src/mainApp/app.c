#include "mainApp/app.h"
#include "main.h"

ret_status loop(void)
{
    ret_status retCode = STATUS_ERROR;

    while(1){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_Delay(5000);
    }

    retCode = STATUS_OK;

    EXIT_PATH:
    return retCode;
}