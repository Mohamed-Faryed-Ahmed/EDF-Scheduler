#ifndef DIO_H
#define DIO_H

#include "../../common/std_type.h" 

typedef enum
{
	PORTA =0,PORTB =1,PORTC =2,PORTD =3,PORTE =4, PORTF =5
}Port_Num;

typedef enum
{
	PIN0 =0,PIN1 =1,PIN2 =2,PIN3 =3,PIN4 =4, PIN5 =5,PIN6=6,PIN7=7
}Pin_Num;

typedef enum
{
	INPUT =0,OUTPUT = 255
}DIO_Dir;

typedef enum
{
	UP =0, DOWN =1
}DIO_Status;


void DIO_portSetting(Port_Num port_num ,DIO_Status status ,DIO_Dir dir);
void DIO_pinSetting(Port_Num port_num ,Pin_Num pin_num ,DIO_Status status ,DIO_Dir dir);

void DIO_portWrite(Port_Num port_num,uint8_t data);
uint8_t DIO_portRead(Port_Num port_num);

void DIO_pinWrite(Port_Num port_num,Pin_Num pin_num,Status state);
uint8_t DIO_pinRead(Port_Num port_num,Pin_Num pin_num);

#endif
