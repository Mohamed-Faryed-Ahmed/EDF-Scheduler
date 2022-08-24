#ifndef INT_CONFIG_H
#define INT_CONFIG_H


void INT_timer_Call(void volatile (*Call)(void));
void INT_sysTimer_Call(void volatile (*Call)(void));

#endif
