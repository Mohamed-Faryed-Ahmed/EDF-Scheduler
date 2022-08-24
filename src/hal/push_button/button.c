#include "button.h"

void BUTTON_init(Port_Num port,Pin_Num pin,DIO_Status up_or_down)
{
	DIO_pinSetting(port,pin,up_or_down,INPUT);
}


uint8_t BUTTON_read(Port_Num port,Pin_Num pin)
{
	return (DIO_pinRead(port,pin));
}

