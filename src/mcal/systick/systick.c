#include "systick.h"
#include "../../common/reg.h"
void SYS_TICK_init(Sys_Init *S_sys)
{
  SYSTICK_CTRL   &=~(1<<0);
  SYSTICK_RELOAD  =S_sys->value;                /*value*/
  SYSTICK_CTRL   |=((S_sys->sys_clock)<<2);     /*clock*/
  SYSTICK_CURRENT = 0;                          /* Clear the Current Register value */
  /*SYSTICK_CTRL  &=~(1<<1); */                    /*disable interrupt*/
  SYSTICK_CTRL  |=(1<<0);
}

void SYS_TICK_reset(void)
{
  SYSTICK_CURRENT = 0;                          /* Clear the Current Register value */
}
Sys_Flage SYS_TICK_poll(void)
{
  return (Sys_Flage)((SYSTICK_CTRL &(1<<16))>>16);
}
