#ifndef TIMER_H
#define TIMER_H
#include "../../common/std_type.h"


typedef enum
{
	T0=0,T1=1,T2=2,T3=3,T4=4,T5=5
}Timer_Num;

typedef enum
{
	TA=0,TB=1
}Timer_Type;

typedef enum
{
	P=0,ONE=1
}Timer_Mode;

typedef struct 
{
	
	/*uint32_t data;*/
	Timer_Num t_num    :3;
	Timer_Type t_type  :1;
	Timer_Mode  mode   :1;
	
}Timer_Init;

void TIMER_init(Timer_Init * timx);
void TIMER_start(Timer_Num,Timer_Type);
void TIMER_stop(Timer_Num,Timer_Type);

#endif
