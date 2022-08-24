#include <stdlib.h>

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "led.h"

void TSK_A (void *pvParameters);
void TSK_B (void *pvParameters);
void TSK_C (void *pvParameters);
void TSK_D (void *pvParameters);

//-------------------------------------------------
// Global Variables
//-------------------------------------------------

#define A_PERIOD 2000  //task A period
#define B_PERIOD 4000  //task B period
#define C_PERIOD 6000  //task C period
#define D_PERIOD 8000  //task D period

int main (void)
{
 //Setup the hardware . 
	
	led_Init(PORTF,PIN1);
	led_Init(PORTF,PIN2);
	led_Init(PORTF,PIN3);
	/* task creation*/
	

 xTaskPeriodicCreate( TSK_A, ( const char * ) "A",
	                             configMINIMAL_STACK_SIZE,
                               NULL,1, NULL,
                               A_PERIOD );
 
 xTaskPeriodicCreate( TSK_B, ( const char * ) "B",
	                             configMINIMAL_STACK_SIZE,
                               NULL,1, NULL,
                               B_PERIOD );
	
 xTaskPeriodicCreate( TSK_C, ( const char * ) "C",
	                             configMINIMAL_STACK_SIZE,
                               NULL,1, NULL,
                               C_PERIOD );
 xTaskPeriodicCreate( TSK_D, ( const char * ) "D",
	                             configMINIMAL_STACK_SIZE,
                               NULL,1, NULL,
                               D_PERIOD );
	
	/* schacdular */
	vTaskStartScheduler();
	for(;;);
}

void TSK_A (void *pvParameters)
{
	TickType_t xLastWakeTimeA;

  // Initialise the xLastWakeTime variable with the current time.
  xLastWakeTimeA = 0;
  for(;;)
	{
		led_On(PORTF,PIN1);
		led_Off(PORTF,PIN2);
		led_Off(PORTF,PIN3);
    vTaskDelayUntil( &xLastWakeTimeA, 8000 );
	}
}

void TSK_B (void *pvParameters)
{
	TickType_t xLastWakeTimeB;
  // Initialise the xLastWakeTime variable with the current time.
  xLastWakeTimeB = 0;
	for(;;)
	{
		led_Off(PORTF,PIN1);
		led_On(PORTF,PIN2);
		vTaskDelayUntil( &xLastWakeTimeB, 8000 );
	}
}

void TSK_C (void *pvParameters)
{
	TickType_t xLastWakeTimeC;
  // Initialise the xLastWakeTime variable with the current time.
  xLastWakeTimeC = 0;
	for(;;)
	{
		led_Off(PORTF,PIN2);
		led_On(PORTF,PIN3);
		vTaskDelayUntil( &xLastWakeTimeC, 8000 );
	}
}

void TSK_D (void *pvParameters)
{
	TickType_t xLastWakeTimeD;
  // Initialise the xLastWakeTime variable with the current time.
  xLastWakeTimeD = 0;
	for(;;)
	{
		led_On(PORTF,PIN1);
		led_On(PORTF,PIN2);
		vTaskDelayUntil( &xLastWakeTimeD, 8000 );
	}
}
