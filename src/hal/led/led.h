#ifndef LED_H
#define LED_H

#include "../../mcal/dio/dio.h"

void led_Init(Port_Num port, Pin_Num pin);

void led_On(Port_Num port, Pin_Num pin);
void led_Off(Port_Num port, Pin_Num pin);

#endif
