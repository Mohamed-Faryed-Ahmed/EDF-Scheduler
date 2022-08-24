#include "led.h"


void led_Init(Port_Num port, Pin_Num pin)
{
	DIO_pinSetting(port ,pin,UP,OUTPUT);
}

void led_On(Port_Num port, Pin_Num pin)
{
	DIO_pinWrite(port,pin,ON);
}

void led_Off(Port_Num port, Pin_Num pin)
{
	DIO_pinWrite(port,pin,OFF);
}
