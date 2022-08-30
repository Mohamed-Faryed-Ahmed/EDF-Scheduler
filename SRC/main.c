/*
 * FreeRTOS Kernel V10.2.0
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */

/* 
	NOTE : Tasks run in system mode and the scheduler runs in Supervisor mode.
	The processor MUST be in supervisor mode when vTaskStartScheduler is 
	called.  The demo applications included in the FreeRTOS.org download switch
	to supervisor mode prior to main being called.  If you are not using one of
	these demo application projects then ensure Supervisor mode is used.
*/


/*
 * Creates all the demo application tasks, then starts the scheduler.  The WEB
 * documentation provides more details of the demo application tasks.
 * 
 * Main.c also creates a task called "Check".  This only executes every three 
 * seconds but has the highest priority so is guaranteed to get processor time.  
 * Its main function is to check that all the other tasks are still operational.
 * Each task (other than the "flash" tasks) maintains a unique count that is 
 * incremented each time the task successfully completes its function.  Should 
 * any error occur within such a task the count is permanently halted.  The 
 * check task inspects the count of each task to ensure it has changed since
 * the last time the check task executed.  If all the count variables have 
 * changed all the tasks are still executing error free, and the check task
 * toggles the onboard LED.  Should any task contain an error at any time 
 * the LED toggle rate will change from 3 seconds to 500ms.
 *
 */

/* Standard includes. */
#include <stdlib.h>
#include <stdio.h>

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "lpc21xx.h"
#include "semphr.h"
#include "event_groups.h"

/* Peripheral includes. */
#include "serial.h"
#include "GPIO.h"


/*-----------------------------------------------------------*/

/* Constants to setup I/O and processor. */
#define mainBUS_CLK_FULL	( ( unsigned char ) 0x01 )

/* Constants for the ComTest demo application tasks. */
#define mainCOM_TEST_BAUD_RATE	( ( unsigned long ) 115200 )

#define _PERIOD_1 50   //task 1 period
#define _PERIOD_2 50   //task 2 period
#define _PERIOD_3 100  //task 3 period
#define _PERIOD_4 20   //task 4 period
#define _PERIOD_5 10   //task 5 period
#define _PERIOD_6 100  //task 6 period


/*
 * Configure the processor for use with the Keil demo board.  This is very
 * minimal as most of the setup is managed by the settings in the project
 * file.
 */
static void prvSetupHardware( void );
/*-----------------------------------------------------------*/

/*Refrance of tasks*/

TaskHandle_t task_1_Handle     = NULL;
TaskHandle_t task_2_Handle     = NULL;
TaskHandle_t task_3_Handle     = NULL;
TaskHandle_t task_4_Handle     = NULL;
TaskHandle_t task_5_Handle     = NULL;
TaskHandle_t task_6_Handle     = NULL;
/*-----------------------------------------------------------*/

/*prototype for tasks*/
void task_1( void * pvParameters );
void task_2( void * pvParameters );
void task_3( void * pvParameters );
void task_4( void * pvParameters );
void task_5( void * pvParameters );
void task_6( void * pvParameters );

/*-----------------------------------------------------------*/

/*prototype for RTOS*/
void vApplicationIdleHook( void );
void vApplicationTickHook( void );
/*-----------------------------------------------------------*/

/*globale Variable */
volatile pinState_t button_status=PIN_IS_LOW;
char timeBuffer[190];

unsigned int TASK_5_timeIn =0 ,TASK_5_timeOut=0, TASK_5_timeTotal=0; 
unsigned int TASK_6_timeIn =0 ,TASK_6_timeOut=0, TASK_6_timeTotal=0; 
unsigned int system_Time =0;
unsigned int CPU_load=0;

unsigned char button_1 =0;
unsigned char button_2 =0;
/*-----------------------------------------------------------*/

/*
 * Application entry point:
 * Starts all the other tasks, then starts the scheduler. 
 */
int main( void )
{
	/* Setup the hardware for use with the Keil demo board. */
	prvSetupHardware();
	

    /* Create Tasks here */
	
	xTaskPeriodicCreate(task_1, "Button_1_Monitor"    , 150,( void * ) 0, 2,&task_1_Handle,_PERIOD_1);
	xTaskPeriodicCreate(task_2, "Button_2_Monitor"    , 150,( void * ) 0, 2,&task_2_Handle,_PERIOD_2);
	xTaskPeriodicCreate(task_3, "Periodic_Transmitter", 150,( void * ) 0, 2,&task_3_Handle,_PERIOD_3);
	xTaskPeriodicCreate(task_4, "Uart_Receiver"       , 150,( void * ) 0, 2,&task_4_Handle,_PERIOD_4);
	xTaskPeriodicCreate(task_5, "Load_1_Simulation"   , 150,( void * ) 0, 2,&task_5_Handle,_PERIOD_5);
	xTaskPeriodicCreate(task_6, "Load_2_Simulation"   , 150,( void * ) 0, 2,&task_6_Handle,_PERIOD_6);
	
	
	vTaskStartScheduler();

	for( ;; );
}
/*-----------------------------------------------------------*/

void task_1( void * pvParameters )
{
	TickType_t xLastWakeTime;       // variable that holds the time at which the task was last unblocked
	xLastWakeTime = xTaskGetTickCount();
	for( ;; )
	{
		button_1= GPIO_read(PORT_0 , PIN8);
		GPIO_write(PORT_0, PIN1,PIN_IS_LOW);
		vTaskDelayUntil(&xLastWakeTime,50);
		GPIO_write(PORT_0, PIN1,PIN_IS_HIGH);
	}
}

void task_2( void * pvParameters )
{
	TickType_t xLastWakeTime;       // variable that holds the time at which the task was last unblocked
	xLastWakeTime = xTaskGetTickCount();
	for( ;; )
	{
		button_2= GPIO_read(PORT_0 , PIN9);
		GPIO_write(PORT_0, PIN2,PIN_IS_LOW);
		vTaskDelayUntil(&xLastWakeTime,50);
		GPIO_write(PORT_0, PIN2,PIN_IS_HIGH);
	}
}
void task_3( void * pvParameters )
{
	TickType_t xLastWakeTime;       // variable that holds the time at which the task was last unblocked
	xLastWakeTime = xTaskGetTickCount();
	for( ;; )
	{
		if(button_1 == PIN_IS_HIGH)
		{
			GPIO_write(PORT_0, PIN13,PIN_IS_HIGH);
		}
		else
		{
			GPIO_write(PORT_0, PIN13,PIN_IS_LOW);
		}
		if(button_2 == PIN_IS_HIGH)
		{
			GPIO_write(PORT_0, PIN14,PIN_IS_HIGH);
		}
		else
		{
			GPIO_write(PORT_0, PIN14,PIN_IS_LOW);
		}
		
		GPIO_write(PORT_0, PIN3,PIN_IS_LOW);
		vTaskDelayUntil(&xLastWakeTime,100);
		GPIO_write(PORT_0, PIN3,PIN_IS_HIGH);
	}
}
void task_4( void * pvParameters )
{
	TickType_t xLastWakeTime;       // variable that holds the time at which the task was last unblocked
	xLastWakeTime = xTaskGetTickCount();
	for( ;; )
	{ 
		xSerialPutChar('\n');
		if((button_1 || button_2) == PIN_IS_HIGH)
		{
			xSerialPutChar('H');
		}
		else
		{
			xSerialPutChar('L');
		}
		xSerialPutChar('\n');
		GPIO_write(PORT_0, PIN4,PIN_IS_LOW);
		vTaskDelayUntil(&xLastWakeTime,20);
		GPIO_write(PORT_0, PIN4,PIN_IS_HIGH);
	}
}
void task_5( void * pvParameters )
{
	static unsigned int missA=0;
	unsigned long i=0;
	unsigned int startTime=0 ,endTime=0 ;
	TickType_t xLastWakeTime;       // variable that holds the time at which the task was last unblocked
	vTaskSetApplicationTaskTag( NULL, (TaskHookFunction_t) 1 );
	xLastWakeTime = xTaskGetTickCount();
	for( ;; )
	{
		vTaskGetRunTimeStats(timeBuffer);
		vSerialPutString((signed char *)timeBuffer,190);
		xSerialPutChar('\n');
		
		for(i=0; i<(28000);i++)
			{
				i=i;
			}
		endTime = xTaskGetTickCount();
		if((endTime-startTime)>=10)
			{
				missA++;
			}
		GPIO_write(PORT_0, PIN5,PIN_IS_LOW);
		vTaskDelayUntil(&xLastWakeTime,10);		
    GPIO_write(PORT_0, PIN5,PIN_IS_HIGH);			
		startTime = xTaskGetTickCount();
	}
}

void task_6( void * pvParameters )
{
	static unsigned int missB=0;
	unsigned long i=0;
	unsigned int startTime=0 ,endTime=0 ;
	TickType_t xLastWakeTime;           //variable that holds the time at which the task was last unblocked
	vTaskSetApplicationTaskTag( NULL, (TaskHookFunction_t) 2 );
	xLastWakeTime = xTaskGetTickCount();
	for( ;; )
	{
		
		for(i=0; i<(10000);i++)
			{
				i=i;
			}
		endTime = xTaskGetTickCount();
		if((endTime-startTime)>=100)
			{
				missB++;
			}
		GPIO_write(PORT_0, PIN6,PIN_IS_LOW);
		vTaskDelayUntil(&xLastWakeTime,100);
		GPIO_write(PORT_0, PIN6,PIN_IS_HIGH);
		startTime = xTaskGetTickCount();
	}
}

/* callback  Function " idle hook*/
void vApplicationIdleHook( void )
{
	
}

/* callback  Function " tick hook*/
void vApplicationTickHook( void )
{
	GPIO_write(PORT_0, PIN0,PIN_IS_HIGH);
	GPIO_write(PORT_0, PIN0,PIN_IS_LOW);
}

/* Function to reset timer 1 */
void timer1Reset(void)
{
	T1TCR |= 0x2;
	T1TCR &= ~0x2;
}

/* Function to initialize and start timer 1 */
static void configTimer1(void)
{
	T1PR = 1000;
	T1TCR |= 0x1;
}

static void prvSetupHardware( void )
{
	/* Perform the hardware setup required.  This is minimal as most of the
	setup is managed by the settings in the project file. */

	/* Configure UART */
	xSerialPortInitMinimal(mainCOM_TEST_BAUD_RATE);

	/* Configure GPIO */
	GPIO_init();
	
	/* Config trace timer 1 and read T1TC to get current tick */
	configTimer1();

	/* Setup the peripheral bus to be the same as the PLL output. */
	VPBDIV = mainBUS_CLK_FULL;
}
/*-----------------------------------------------------------*/


