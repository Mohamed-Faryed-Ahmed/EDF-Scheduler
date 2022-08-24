#include "timer.h"
#include "../../common/reg.h" 


void TIMER_init(Timer_Init* timx)
{
	int delay=5;
	if(timx->t_num == T0)
	{
		RCGC_TIMER |=0x00000001;  /* Timer0 enable clock*/
		delay=delay+5;
		TIMER0_CTL &=0x00000000;  /*GPTMCTL cleared */
		if((timx->mode == P) || (timx->mode ==  ONE))
		{
			TIMER0_CFG =0x00000000;   /*(GPTMCFG) with a value of 0x0000.0000*/
			if(timx->t_type == TA)
			{
				if(timx->mode == P)
				{
					TIMER0_TA =0X02;        /*Configure(GPTMTnMR): Periodic mode.*/
				}
				else if(timx->mode == ONE)
				{
					TIMER0_TA =0X01;
				}
			}
			TIMER0_APR  = 0x000000FF & 0xFF; /* prescaler is  256 */
			TIMER0_AILR = 3036;              /*Load the start value into (GPTMTnILR).*/
		}
	}
}

void TIMER_start(Timer_Num num,Timer_Type type)
{
	if((num == T0) && (type == TA))
	{
		TIMER0_CTL=0x01;                        /* enable timer0 A to start */
	}  
  else if((num == T0) && (type == TB))
	{
		TIMER0_CTL=0x80;                        /* enable timer0 B to start */
	}                                   
}

void TIMER_stop(Timer_Num num,Timer_Type type)
{
	if((num == T0) && (type == TA))
	{
		TIMER0_CTL &=0xFFFFFFFE;                        /* disable timer0 A  */
	}  
  else if((num == T0) && (type == TB))
	{
		TIMER0_CTL=0xFFFFFF7F;                          /* disable timer0 B  */
	}
}
