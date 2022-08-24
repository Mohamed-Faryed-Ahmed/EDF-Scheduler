#ifndef BUTTON_H
#define BUTTON_H

#include "../../mcal/dio/dio.h"
 
void BUTTON_init(Port_Num port,Pin_Num pin,DIO_Status up_or_down);
 
uint8_t BUTTON_read(Port_Num port,Pin_Num pin);
#endif
