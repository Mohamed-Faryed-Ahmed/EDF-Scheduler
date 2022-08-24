#ifndef SYS_TICK_H
#define SYS_TICK_H
#include "../../common/std_type.h"

typedef enum{UN_SYS=0,SYS=1}Sys_Flage;
typedef enum{PIOSC=0,SYSTEM=1}Sys_Clock;
typedef struct{
  uint32_t value      :24;
  Sys_Clock sys_clock :1;
}Sys_Init;



void SYS_TICK_init(Sys_Init *S_sys);
void SYS_TICK_reset(void);
Sys_Flage SYS_TICK_poll(void);




#endif
