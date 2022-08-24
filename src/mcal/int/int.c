#include "int.h"

void INT_timer0A_En(void)
{
	TIMER0_IM =0x01;                 /*setGPTM Interrupt Mask (GPTMIMR).*/
	TIMER0_ICR |=0x00000001;         /*clear flage */
	NVIC_EN0 |=(1<<19);              /*enable IRQ 19 */
}

void INT_sysTimer_En(uint8_t pri)
{
	SYSTICK_CTRL           |=(1<<1);                                     /*enable interrupt*/
	NVIC_SYSTEM_PRI3        =(NVIC_SYSTEM_PRI3 & 0x3FFFFFFF)|(pri<<29);  /*set priorty 0*/
}
