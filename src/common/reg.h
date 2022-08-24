#ifndef REG_H
#define REG_H 

#include "std_type.h"

#define GPIO_AHB (0U)
#define BP       (1U)
/******************************************************************************
*                           MOdel_CLOCK                                       *
******************************************************************************/

#define CLOCK_PORT                (*((volatile uint32_t*)(0x400FE000 + 0x608)))
#define GPIO_HBCTL                (*((volatile uint32_t*)(0x400FE000 + 0x06C)))
#define RCGC_TIMER                (*((volatile uint32_t*)(0x400FE000 + 0x604)))
#define SYSCTL_REGCGC2            (*((volatile unsigned long *)0x400FE108))


#if (GPIO_AHB == 1)
/******************************************************************************
*                           GPIO_PORT_DATA                                    *
*******************************************************************************/
#define PORTA_DATA (*((volatile uint32_t *)(0x40058000 + 0x3fc)))
#define PORTB_DATA (*((volatile uint32_t *)(0x40059000 + 0x3fc)))
#define PORTC_DATA (*((volatile uint32_t *)(0x4005A000 + 0x3fc)))
#define PORTD_DATA (*((volatile uint32_t *)(0x4005B000 + 0x3fc)))
#define PORTE_DATA (*((volatile uint32_t *)(0x4005C000 + 0x3fc)))
#define PORTF_DATA (*((volatile uint32_t *)(0x4005D000 + 0x3fc)))


#if (BP ==1)
/******************************************************************************
*                           GPIO_PORTA_DATA_PIN                               *
*******************************************************************************/
#define PA_0 (*((volatile uint32_t *)(0x40058000 + 0x004)))  
#define PA_1 (*((volatile uint32_t *)(0x40058000 + 0x008)))
#define PA_2 (*((volatile uint32_t *)(0x40058000 + 0x010)))
#define PA_3 (*((volatile uint32_t *)(0x40058000 + 0x020)))
#define PA_4 (*((volatile uint32_t *)(0x40058000 + 0x040)))
#define PA_5 (*((volatile uint32_t *)(0x40058000 + 0x080)))
#define PA_6 (*((volatile uint32_t *)(0x40058000 + 0x100)))
#define PA_7 (*((volatile uint32_t *)(0x40058000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTB_DATA_PIN                               *
*******************************************************************************/
#define PB_0 (*((volatile uint32_t *)(0x40059000 + 0x004)))  
#define PB_1 (*((volatile uint32_t *)(0x40059000 + 0x008)))
#define PB_2 (*((volatile uint32_t *)(0x40059000 + 0x010)))
#define PB_3 (*((volatile uint32_t *)(0x40059000 + 0x020)))
#define PB_4 (*((volatile uint32_t *)(0x40059000 + 0x040)))
#define PB_5 (*((volatile uint32_t *)(0x40059000 + 0x080)))
#define PB_6 (*((volatile uint32_t *)(0x40059000 + 0x100)))
#define PB_7 (*((volatile uint32_t *)(0x40059000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTC_DATA_PIN                               *
*******************************************************************************/
#define PC_0 (*((volatile uint32_t *)(0x4005A000 + 0x004)))  
#define PC_1 (*((volatile uint32_t *)(0x4005A000 + 0x008)))
#define PC_2 (*((volatile uint32_t *)(0x4005A000 + 0x010)))
#define PC_3 (*((volatile uint32_t *)(0x4005A000 + 0x020)))
#define PC_4 (*((volatile uint32_t *)(0x4005A000 + 0x040)))
#define PC_5 (*((volatile uint32_t *)(0x4005A000 + 0x080)))
#define PC_6 (*((volatile uint32_t *)(0x4005A000 + 0x100)))
#define PC_7 (*((volatile uint32_t *)(0x4005A000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTD_DATA_PIN                               *
*******************************************************************************/
#define PD_0 (*((volatile uint32_t *)(0x4005B000 + 0x004)))  
#define PD_1 (*((volatile uint32_t *)(0x4005B000 + 0x008)))
#define PD_2 (*((volatile uint32_t *)(0x4005B000 + 0x010)))
#define PD_3 (*((volatile uint32_t *)(0x4005B000 + 0x020)))
#define PD_4 (*((volatile uint32_t *)(0x4005B000 + 0x040)))
#define PD_5 (*((volatile uint32_t *)(0x4005B000 + 0x080)))
#define PD_6 (*((volatile uint32_t *)(0x4005B000 + 0x100)))
#define PD_7 (*((volatile uint32_t *)(0x4005B000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTE_DATA_PIN                               *
*******************************************************************************/
#define PE_0 (*((volatile uint32_t *)(0x4005C000 + 0x004)))  
#define PE_1 (*((volatile uint32_t *)(0x4005C000 + 0x008)))
#define PE_2 (*((volatile uint32_t *)(0x4005C000 + 0x010)))
#define PE_3 (*((volatile uint32_t *)(0x4005C000 + 0x020)))
#define PE_4 (*((volatile uint32_t *)(0x4005C000 + 0x040)))
#define PE_5 (*((volatile uint32_t *)(0x4005C000 + 0x080)))
#define PE_6 (*((volatile uint32_t *)(0x4005C000 + 0x100)))
#define PE_7 (*((volatile uint32_t *)(0x4005C000 + 0x200)))

/******************************************************************************
*                           GPIO_PORTF_DATA_PIN                               *
*******************************************************************************/
#define PF_0 (*((volatile uint32_t *)(0x4005D000 + 0x004)))  
#define PF_1 (*((volatile uint32_t *)(0x4005D000 + 0x008)))
#define PF_2 (*((volatile uint32_t *)(0x4005D000 + 0x010)))
#define PF_3 (*((volatile uint32_t *)(0x4005D000 + 0x020)))
#define PF_4 (*((volatile uint32_t *)(0x4005D000 + 0x040)))
#define PF_5 (*((volatile uint32_t *)(0x4005D000 + 0x080)))
#define PF_6 (*((volatile uint32_t *)(0x4005D000 + 0x100)))
#define PF_7 (*((volatile uint32_t *)(0x4005D000 + 0x200)))
#endif

/******************************************************************************
*                           GPIO_DIR                                          *
*******************************************************************************/
#define PORTA_DIR  (*((volatile uint32_t *)(0x40058000 + 0x400 )))
#define PORTB_DIR  (*((volatile uint32_t *)(0x40059000 + 0x400 )))
#define PORTC_DIR  (*((volatile uint32_t *)(0x4005A000 + 0x400 )))
#define PORTD_DIR  (*((volatile uint32_t *)(0x4005B000 + 0x400 )))
#define PORTE_DIR  (*((volatile uint32_t *)(0x4005C000 + 0x400 )))
#define PORTF_DIR  (*((volatile uint32_t *)(0x4005D000 + 0x400 )))

/******************************************************************************
*                           GPIO_ Interrupt Sense                             *
*******************************************************************************/
#define PORTA_IS   (*((volatile uint32_t *)(0x40058000 + 0x404 )))
#define PORTB_IS   (*((volatile uint32_t *)(0x40059000 + 0x404 )))
#define PORTC_IS   (*((volatile uint32_t *)(0x4005A000 + 0x404 )))
#define PORTD_IS   (*((volatile uint32_t *)(0x4005B000 + 0x404 )))
#define PORTE_IS   (*((volatile uint32_t *)(0x4005C000 + 0x404 )))
#define PORTF_IS   (*((volatile uint32_t *)(0x4005D000 + 0x404 )))

/******************************************************************************
*                           GPIO Interrupt Both Edges                         *
*******************************************************************************/
#define PORTA_IBE  (*((volatile uint32_t *)(0x40058000 + 0x408 )))
#define PORTB_IBE  (*((volatile uint32_t *)(0x40059000 + 0x408 )))
#define PORTC_IBE  (*((volatile uint32_t *)(0x4005A000 + 0x408 )))
#define PORTD_IBE  (*((volatile uint32_t *)(0x4005B000 + 0x408 )))
#define PORTE_IBE  (*((volatile uint32_t *)(0x4005C000 + 0x408 )))
#define PORTF_IBE  (*((volatile uint32_t *)(0x4005D000 + 0x408 )))

/******************************************************************************
*                           GPIO Interrupt Event                              *
*******************************************************************************/
#define PORTA_IEV  (*((volatile uint32_t *)(0x40058000 + 0x40C )))
#define PORTB_IEV  (*((volatile uint32_t *)(0x40059000 + 0x40C )))
#define PORTC_IEV  (*((volatile uint32_t *)(0x4005A000 + 0x40C )))
#define PORTD_IEV  (*((volatile uint32_t *)(0x4005B000 + 0x40C )))
#define PORTE_IEV  (*((volatile uint32_t *)(0x4005C000 + 0x40C )))
#define PORTF_IEV  (*((volatile uint32_t *)(0x4005D000 + 0x40C )))

/******************************************************************************
*                           GPIO Interrupt Mask                               *
*******************************************************************************/
#define PORTA_IM  (*((volatile uint32_t *)(0x40058000 + 0x410 )))
#define PORTB_IM  (*((volatile uint32_t *)(0x40059000 + 0x410 )))
#define PORTC_IM  (*((volatile uint32_t *)(0x4005A000 + 0x410 )))
#define PORTD_IM  (*((volatile uint32_t *)(0x4005B000 + 0x410 )))
#define PORTE_IM  (*((volatile uint32_t *)(0x4005C000 + 0x410 )))
#define PORTF_IM  (*((volatile uint32_t *)(0x4005D000 + 0x410 )))
	
/******************************************************************************
*                           GPIO Raw Interrupt Status                         *
*******************************************************************************/
#define PORTA_RIS  (*((volatile uint32_t *)(0x40058000 + 0x414 )))
#define PORTB_RIS  (*((volatile uint32_t *)(0x40059000 + 0x414 )))
#define PORTC_RIS  (*((volatile uint32_t *)(0x4005A000 + 0x414 )))
#define PORTD_RIS  (*((volatile uint32_t *)(0x4005B000 + 0x414 )))
#define PORTE_RIS  (*((volatile uint32_t *)(0x4005C000 + 0x414 )))
#define PORTF_RIS  (*((volatile uint32_t *)(0x4005D000 + 0x414 )))
	
/******************************************************************************
*                           GPIO Interrupt Clear                              *
*******************************************************************************/
#define PORTA_ICR  (*((volatile uint32_t *)(0x40058000 + 0x41C )))
#define PORTB_ICR  (*((volatile uint32_t *)(0x40059000 + 0x41C )))
#define PORTC_ICR  (*((volatile uint32_t *)(0x4005A000 + 0x41C )))
#define PORTD_ICR  (*((volatile uint32_t *)(0x4005B000 + 0x41C )))
#define PORTE_ICR  (*((volatile uint32_t *)(0x4005C000 + 0x41C )))
#define PORTF_ICR  (*((volatile uint32_t *)(0x4005D000 + 0x41C )))

/******************************************************************************
*                           GPIO Alternate Function Select                    *
*******************************************************************************/
#define PORTA_AFSEL  (*((volatile uint32_t *)(0x40058000 + 0x420 )))
#define PORTB_AFSEL  (*((volatile uint32_t *)(0x40059000 + 0x420 )))
#define PORTC_AFSEL  (*((volatile uint32_t *)(0x4005A000 + 0x420 )))
#define PORTD_AFSEL  (*((volatile uint32_t *)(0x4005B000 + 0x420 )))
#define PORTE_AFSEL  (*((volatile uint32_t *)(0x4005C000 + 0x420 )))
#define PORTF_AFSEL  (*((volatile uint32_t *)(0x4005D000 + 0x420 )))

/******************************************************************************
*                           GPIO Pull-Up Select                               *
*******************************************************************************/
#define PORTA_PUR  (*((volatile uint32_t *)(0x40058000 + 0x510 )))
#define PORTB_PUR  (*((volatile uint32_t *)(0x40059000 + 0x510 )))
#define PORTC_PUR  (*((volatile uint32_t *)(0x4005A000 + 0x510 )))
#define PORTD_PUR  (*((volatile uint32_t *)(0x4005B000 + 0x510 )))
#define PORTE_PUR  (*((volatile uint32_t *)(0x4005C000 + 0x510 )))
#define PORTF_PUR  (*((volatile uint32_t *)(0x4005D000 + 0x510 )))

/******************************************************************************
*                           GPIO Pull_DOWN Select                             *
*******************************************************************************/
#define PORTA_PDR  (*((volatile uint32_t *)(0x40058000 + 0x514 )))
#define PORTB_PDR  (*((volatile uint32_t *)(0x40059000 + 0x514 )))
#define PORTC_PDR  (*((volatile uint32_t *)(0x4005A000 + 0x514 )))
#define PORTD_PDR  (*((volatile uint32_t *)(0x4005B000 + 0x514 )))
#define PORTE_PDR  (*((volatile uint32_t *)(0x4005C000 + 0x514 )))
#define PORTF_PDR  (*((volatile uint32_t *)(0x4005D000 + 0x514 )))

/******************************************************************************
*                           GPIO Digital Enable                               *
*******************************************************************************/
#define PORTA_EN  (*((volatile uint32_t *)(0x40058000 + 0x51C )))
#define PORTB_EN  (*((volatile uint32_t *)(0x40059000 + 0x51C )))
#define PORTC_EN  (*((volatile uint32_t *)(0x4005A000 + 0x51C )))
#define PORTD_EN  (*((volatile uint32_t *)(0x4005B000 + 0x51C )))
#define PORTE_EN  (*((volatile uint32_t *)(0x4005C000 + 0x51C )))
#define PORTF_EN  (*((volatile uint32_t *)(0x4005D000 + 0x51C )))

/******************************************************************************
*                           GPIO Lock                                         *
*******************************************************************************/
#define PORTA_LOCK  (*((volatile uint32_t *)(0x40058000 + 0x520 )))
#define PORTB_LOCK  (*((volatile uint32_t *)(0x40059000 + 0x520 )))
#define PORTC_LOCK  (*((volatile uint32_t *)(0x4005A000 + 0x520 )))
#define PORTD_LOCK  (*((volatile uint32_t *)(0x4005B000 + 0x520 )))
#define PORTE_LOCK  (*((volatile uint32_t *)(0x4005C000 + 0x520 )))
#define PORTF_LOCK  (*((volatile uint32_t *)(0x4005D000 + 0x520 )))

/******************************************************************************
*                           GPIO Commit                                       *
*******************************************************************************/
#define PORTA_CR  (*((volatile uint32_t *)(0x40058000 + 0x524 )))
#define PORTB_CR  (*((volatile uint32_t *)(0x40059000 + 0x524 )))
#define PORTC_CR  (*((volatile uint32_t *)(0x4005A000 + 0x524 )))
#define PORTD_CR  (*((volatile uint32_t *)(0x4005B000 + 0x524 )))
#define PORTE_CR  (*((volatile uint32_t *)(0x4005C000 + 0x524 )))
#define PORTF_CR  (*((volatile uint32_t *)(0x4005D000 + 0x524 )))

/******************************************************************************
*                           GPIO Analog Mode Select                           *
*******************************************************************************/
#define PORTA_AMSEL  (*((volatile uint32_t *)(0x40058000 + 0x528)))
#define PORTB_AMSEL  (*((volatile uint32_t *)(0x40059000 + 0x528)))
#define PORTC_AMSEL  (*((volatile uint32_t *)(0x4005A000 + 0x528)))
#define PORTD_AMSEL  (*((volatile uint32_t *)(0x4005B000 + 0x528)))
#define PORTE_AMSEL  (*((volatile uint32_t *)(0x4005C000 + 0x528)))
#define PORTF_AMSEL  (*((volatile uint32_t *)(0x4005D000 + 0x528)))
/******************************************************************************
*                           GPIO Port Control                                 *
*******************************************************************************/
#define PORTA_PCTL  (*((volatile uint32_t *)(0x40058000 + 0x52C )))
#define PORTB_PCTL  (*((volatile uint32_t *)(0x40059000 + 0x52C )))
#define PORTC_PCTL  (*((volatile uint32_t *)(0x4005A000 + 0x52C )))
#define PORTD_PCTL  (*((volatile uint32_t *)(0x4005B000 + 0x52C )))
#define PORTE_PCTL  (*((volatile uint32_t *)(0x4005C000 + 0x52C )))
#define PORTF_PCTL  (*((volatile uint32_t *)(0x4005D000 + 0x52C )))

#elif (GPIO_AHB == 0)
/*****************************************************************************
GPIO registers (PORTA)                                                       *
*****************************************************************************/
#define PORTA_DATA       (*((volatile unsigned long *)0x400043FC))
#define PORTA_DIR        (*((volatile unsigned long *)0x40004400))
#define PORTA_AFSEL      (*((volatile unsigned long *)0x40004420))
#define PORTA_PUR        (*((volatile unsigned long *)0x40004510))
#define PORTA_PDR        (*((volatile unsigned long *)0x40004514))
#define PORTA_EN         (*((volatile unsigned long *)0x4000451C))
#define PORTA_LOCK       (*((volatile unsigned long *)0x40004520))
#define PORTA_CR         (*((volatile unsigned long *)0x40004524))
#define PORTA_AMSEL      (*((volatile unsigned long *)0x40004528))
#define PORTA_PCTL       (*((volatile unsigned long *)0x4000452C))

/* PORTA External Interrupts Registers */
#define PORTA_IS         (*((volatile unsigned long *)0x40004404))
#define PORTA_IBE        (*((volatile unsigned long *)0x40004408))
#define PORTA_IEV        (*((volatile unsigned long *)0x4000440C))
#define PORTA_IM         (*((volatile unsigned long *)0x40004410))
#define PORTA_RIS        (*((volatile unsigned long *)0x40004414))
#define PORTA_ICR        (*((volatile unsigned long *)0x4000441C))

/*****************************************************************************
GPIO registers (PORTB)
*****************************************************************************/
#define PORTB_DATA        (*((volatile unsigned long *)0x400053FC))
#define PORTB_DIR         (*((volatile unsigned long *)0x40005400))
#define PORTB_AFSEL       (*((volatile unsigned long *)0x40005420))
#define PORTB_PUR         (*((volatile unsigned long *)0x40005510))
#define PORTB_PDR         (*((volatile unsigned long *)0x40005514))
#define PORTB_EN          (*((volatile unsigned long *)0x4000551C))
#define PORTB_LOCK        (*((volatile unsigned long *)0x40005520))
#define PORTB_CR          (*((volatile unsigned long *)0x40005524))
#define PORTB_AMSEL       (*((volatile unsigned long *)0x40005528))
#define PORTB_PCTL        (*((volatile unsigned long *)0x4000552C))

/* PORTB External Interrupts Registers */
#define PORTB_IS          (*((volatile unsigned long *)0x40005404))
#define PORTB_IBE         (*((volatile unsigned long *)0x40005408))
#define PORTB_IEV         (*((volatile unsigned long *)0x4000540C))
#define PORTB_IM          (*((volatile unsigned long *)0x40005410))
#define PORTB_RIS         (*((volatile unsigned long *)0x40005414))
#define PORTB_ICR         (*((volatile unsigned long *)0x4000541C))

/*****************************************************************************
GPIO registers (PORTC)
*****************************************************************************/
#define PORTC_DATA        (*((volatile unsigned long *)0x400063FC))
#define PORTC_DIR         (*((volatile unsigned long *)0x40006400))
#define PORTC_AFSEL       (*((volatile unsigned long *)0x40006420))
#define PORTC_PUR         (*((volatile unsigned long *)0x40006510))
#define PORTC_PDR         (*((volatile unsigned long *)0x40006514))
#define PORTC_EN          (*((volatile unsigned long *)0x4000651C))
#define PORTC_LOCK        (*((volatile unsigned long *)0x40006520))
#define PORTC_CR          (*((volatile unsigned long *)0x40006524))
#define PORTC_AMSEL       (*((volatile unsigned long *)0x40006528))
#define PORTC_PCTL        (*((volatile unsigned long *)0x4000652C))

/* PORTC External Interrupts Registers */
#define PORTC_IS          (*((volatile unsigned long *)0x40006404))
#define PORTC_IBE         (*((volatile unsigned long *)0x40006408))
#define PORTC_IEV         (*((volatile unsigned long *)0x4000640C))
#define PORTC_IM          (*((volatile unsigned long *)0x40006410))
#define PORTC_RIS         (*((volatile unsigned long *)0x40006414))
#define PORTC_ICR         (*((volatile unsigned long *)0x4000641C))

/*****************************************************************************
GPIO registers (PORTD)
*****************************************************************************/
#define PORTD_DATA        (*((volatile unsigned long *)0x400073FC))
#define PORTD_DIR         (*((volatile unsigned long *)0x40007400))
#define PORTD_AFSEL       (*((volatile unsigned long *)0x40007420))
#define PORTD_PUR         (*((volatile unsigned long *)0x40007510))
#define PORTD_PDR         (*((volatile unsigned long *)0x40007514))
#define PORTD_EN          (*((volatile unsigned long *)0x4000751C))
#define PORTD_LOCK        (*((volatile unsigned long *)0x40007520))
#define PORTD_CR          (*((volatile unsigned long *)0x40007524))
#define PORTD_AMSEL       (*((volatile unsigned long *)0x40007528))
#define PORTD_PCTL        (*((volatile unsigned long *)0x4000752C))

/* PORTD External Interrupts Registers */
#define PORTD_IS          (*((volatile unsigned long *)0x40007404))
#define PORTD_IBE         (*((volatile unsigned long *)0x40007408))
#define PORTD_IEV         (*((volatile unsigned long *)0x4000740C))
#define PORTD_IM          (*((volatile unsigned long *)0x40007410))
#define PORTD_RIS         (*((volatile unsigned long *)0x40007414))
#define PORTD_ICR         (*((volatile unsigned long *)0x4000741C))

/*****************************************************************************
GPIO registers (PORTE)
*****************************************************************************/
#define PORTE_DATA        (*((volatile unsigned long *)0x400243FC))
#define PORTE_DIR         (*((volatile unsigned long *)0x40024400))
#define PORTE_AFSEL       (*((volatile unsigned long *)0x40024420))
#define PORTE_PUR         (*((volatile unsigned long *)0x40024510))
#define PORTE_PDR         (*((volatile unsigned long *)0x40024514))
#define PORTE_EN          (*((volatile unsigned long *)0x4002451C))
#define PORTE_LOCK        (*((volatile unsigned long *)0x40024520))
#define PORTE_CR          (*((volatile unsigned long *)0x40024524))
#define PORTE_AMSEL       (*((volatile unsigned long *)0x40024528))
#define PORTE_PCTL        (*((volatile unsigned long *)0x4002452C))

/* PORTE External Interrupts Registers */
#define PORTE_IS          (*((volatile unsigned long *)0x40024404))
#define PORTE_IBE         (*((volatile unsigned long *)0x40024408))
#define PORTE_IEV         (*((volatile unsigned long *)0x4002440C))
#define PORTE_IM          (*((volatile unsigned long *)0x40024410))
#define PORTE_RIS         (*((volatile unsigned long *)0x40024414))
#define PORTE_ICR         (*((volatile unsigned long *)0x4002441C))

/*****************************************************************************
GPIO registers (PORTF)
*****************************************************************************/
#define PORTF_DATA        (*((volatile unsigned long *)0x400253FC))
#define PORTF_DIR         (*((volatile unsigned long *)0x40025400))
#define PORTF_AFSEL       (*((volatile unsigned long *)0x40025420))
#define PORTF_PUR         (*((volatile unsigned long *)0x40025510))
#define PORTF_PDR         (*((volatile unsigned long *)0x40025514))
#define PORTF_EN          (*((volatile unsigned long *)0x4002551C))
#define PORTF_LOCK        (*((volatile unsigned long *)0x40025520))
#define PORTF_CR          (*((volatile unsigned long *)0x40025524))
#define PORTF_AMSEL       (*((volatile unsigned long *)0x40025528))
#define PORTF_PCTL        (*((volatile unsigned long *)0x4002552C))

/* PORTF External Interrupts Registers */
#define PORTF_IS          (*((volatile unsigned long *)0x40025404))
#define PORTF_IBE         (*((volatile unsigned long *)0x40025408))
#define PORTF_IEV         (*((volatile unsigned long *)0x4002540C))
#define PORTF_IM          (*((volatile unsigned long *)0x40025410))
#define PORTF_RIS         (*((volatile unsigned long *)0x40025414))
#define PORTF_ICR         (*((volatile unsigned long *)0x4002541C))
	
#if (BP == 1)
/******************************************************************************
*                           GPIO_PORTA_DATA_PIN                               *
*******************************************************************************/
#define PA_0 (*((volatile uint32_t *)(0x40004000 + 0x04)))  
#define PA_1 (*((volatile uint32_t *)(0x40004000 + 0x08)))
#define PA_2 (*((volatile uint32_t *)(0x40004000 + 0x10)))
#define PA_3 (*((volatile uint32_t *)(0x40004000 + 0x20)))
#define PA_4 (*((volatile uint32_t *)(0x40004000 + 0x40)))
#define PA_5 (*((volatile uint32_t *)(0x40004000 + 0x80)))
#define PA_6 (*((volatile uint32_t *)(0x40004000 + 0x100)))
#define PA_7 (*((volatile uint32_t *)(0x40004000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTB_DATA_PIN                               *
*******************************************************************************/
#define PB_0 (*((volatile uint32_t *)(0x40005000 + 0x004)))  
#define PB_1 (*((volatile uint32_t *)(0x40005000 + 0x008)))
#define PB_2 (*((volatile uint32_t *)(0x40005000 + 0x010)))
#define PB_3 (*((volatile uint32_t *)(0x40005000 + 0x020)))
#define PB_4 (*((volatile uint32_t *)(0x40005000 + 0x040)))
#define PB_5 (*((volatile uint32_t *)(0x40005000 + 0x080)))
#define PB_6 (*((volatile uint32_t *)(0x40005000 + 0x100)))
#define PB_7 (*((volatile uint32_t *)(0x40005000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTC_DATA_PIN                               *
*******************************************************************************/
#define PC_0 (*((volatile uint32_t *)(0x40006000 + 0x004)))  
#define PC_1 (*((volatile uint32_t *)(0x40006000 + 0x008)))
#define PC_2 (*((volatile uint32_t *)(0x40006000 + 0x010)))
#define PC_3 (*((volatile uint32_t *)(0x40006000 + 0x020)))
#define PC_4 (*((volatile uint32_t *)(0x40006000 + 0x040)))
#define PC_5 (*((volatile uint32_t *)(0x40006000 + 0x080)))
#define PC_6 (*((volatile uint32_t *)(0x40006000 + 0x100)))
#define PC_7 (*((volatile uint32_t *)(0x40006000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTD_DATA_PIN                               *
*******************************************************************************/
#define PD_0 (*((volatile uint32_t *)(0x40007000 + 0x004)))  
#define PD_1 (*((volatile uint32_t *)(0x40007000 + 0x008)))
#define PD_2 (*((volatile uint32_t *)(0x40007000 + 0x010)))
#define PD_3 (*((volatile uint32_t *)(0x40007000 + 0x020)))
#define PD_4 (*((volatile uint32_t *)(0x40007000 + 0x040)))
#define PD_5 (*((volatile uint32_t *)(0x40007000 + 0x080)))
#define PD_6 (*((volatile uint32_t *)(0x40007000 + 0x100)))
#define PD_7 (*((volatile uint32_t *)(0x40007000 + 0x200)))
/******************************************************************************
*                           GPIO_PORTE_DATA_PIN                               *
*******************************************************************************/
#define PE_0 (*((volatile uint32_t *)(0x40024000 + 0x004)))  
#define PE_1 (*((volatile uint32_t *)(0x40024000 + 0x008)))
#define PE_2 (*((volatile uint32_t *)(0x40024000 + 0x010)))
#define PE_3 (*((volatile uint32_t *)(0x40024000 + 0x020)))
#define PE_4 (*((volatile uint32_t *)(0x40024000 + 0x040)))
#define PE_5 (*((volatile uint32_t *)(0x40024000 + 0x080)))

/******************************************************************************
*                           GPIO_PORTF_DATA_PIN                               *
*******************************************************************************/
#define PF_0 (*((volatile uint32_t *)(0x40025000 + 0x04)))  
#define PF_1 (*((volatile uint32_t *)(0x40025000 + 0x08)))
#define PF_2 (*((volatile uint32_t *)(0x40025000 + 0x10)))
#define PF_3 (*((volatile uint32_t *)(0x40025000 + 0x20)))
#define PF_4 (*((volatile uint32_t *)(0x40025000 + 0x40)))
#endif

#endif

/*****************************************************************************
*                           Systick Timer Registers                          *
*****************************************************************************/
#define SYSTICK_CTRL           (*((volatile unsigned long *)0xE000E010))
#define SYSTICK_RELOAD         (*((volatile unsigned long *)0xE000E014))
#define SYSTICK_CURRENT        (*((volatile unsigned long *)0xE000E018))

/*****************************************************************************
*                           PLL Registers                                    *
*****************************************************************************/
#define SYSCTL_RIS             (*((volatile unsigned long *)0x400FE050))
#define SYSCTL_RCC             (*((volatile unsigned long *)0x400FE060))
#define SYSCTL_RCC2            (*((volatile unsigned long *)0x400FE070))

/*****************************************************************************
*                           NVIC Registers                                   *
*****************************************************************************/
#define NVIC_PRI0              (*((volatile unsigned long *)0xE000E400))
#define NVIC_PRI1              (*((volatile unsigned long *)0xE000E404))
#define NVIC_PRI2              (*((volatile unsigned long *)0xE000E408))
#define NVIC_PRI3              (*((volatile unsigned long *)0xE000E40C))
#define NVIC_PRI4              (*((volatile unsigned long *)0xE000E410))
#define NVIC_PRI5              (*((volatile unsigned long *)0xE000E414))
#define NVIC_PRI6              (*((volatile unsigned long *)0xE000E418))
#define NVIC_PRI7              (*((volatile unsigned long *)0xE000E41C))
#define NVIC_PRI8              (*((volatile unsigned long *)0xE000E420))
#define NVIC_PRI9              (*((volatile unsigned long *)0xE000E424))
#define NVIC_PRI10             (*((volatile unsigned long *)0xE000E428))
#define NVIC_PRI11             (*((volatile unsigned long *)0xE000E42C))
#define NVIC_PRI12             (*((volatile unsigned long *)0xE000E430))
#define NVIC_PRI13             (*((volatile unsigned long *)0xE000E434))
#define NVIC_PRI14             (*((volatile unsigned long *)0xE000E438))
#define NVIC_PRI15             (*((volatile unsigned long *)0xE000E43C))
#define NVIC_PRI16             (*((volatile unsigned long *)0xE000E440))
#define NVIC_PRI17             (*((volatile unsigned long *)0xE000E444))
#define NVIC_PRI18             (*((volatile unsigned long *)0xE000E448))
#define NVIC_PRI19             (*((volatile unsigned long *)0xE000E44C))
#define NVIC_PRI20             (*((volatile unsigned long *)0xE000E450))
#define NVIC_PRI21             (*((volatile unsigned long *)0xE000E454))
#define NVIC_PRI22             (*((volatile unsigned long *)0xE000E458))
#define NVIC_PRI23             (*((volatile unsigned long *)0xE000E45C))
#define NVIC_PRI24             (*((volatile unsigned long *)0xE000E460))
#define NVIC_PRI25             (*((volatile unsigned long *)0xE000E464))
#define NVIC_PRI26             (*((volatile unsigned long *)0xE000E468))
#define NVIC_PRI27             (*((volatile unsigned long *)0xE000E46C))
#define NVIC_PRI28             (*((volatile unsigned long *)0xE000E470))
#define NVIC_PRI29             (*((volatile unsigned long *)0xE000E474))
#define NVIC_PRI30             (*((volatile unsigned long *)0xE000E478))
#define NVIC_PRI31             (*((volatile unsigned long *)0xE000E47C))
#define NVIC_PRI32             (*((volatile unsigned long *)0xE000E480))
#define NVIC_PRI33             (*((volatile unsigned long *)0xE000E484))
#define NVIC_PRI34             (*((volatile unsigned long *)0xE000E488))

#define NVIC_EN0               (*((volatile unsigned long *)0xE000E100))
#define NVIC_EN1               (*((volatile unsigned long *)0xE000E104))
#define NVIC_EN2               (*((volatile unsigned long *)0xE000E108))
#define NVIC_EN3               (*((volatile unsigned long *)0xE000E10C))
#define NVIC_EN4               (*((volatile unsigned long *)0xE000E110))
#define NVIC_DIS0              (*((volatile unsigned long *)0xE000E180))
#define NVIC_DIS1              (*((volatile unsigned long *)0xE000E184))
#define NVIC_DIS2              (*((volatile unsigned long *)0xE000E188))
#define NVIC_DIS3              (*((volatile unsigned long *)0xE000E18C))
#define NVIC_DIS4              (*((volatile unsigned long *)0xE000E190))

/*****************************************************************************
*                           SCB Registers                                    *
*****************************************************************************/
#define NVIC_SYSTEM_PRI1          (*((volatile unsigned long *)0xE000ED18))
#define NVIC_SYSTEM_PRI2          (*((volatile unsigned long *)0xE000ED1C))
#define NVIC_SYSTEM_PRI3          (*((volatile unsigned long *)0xE000ED20))
#define NVIC_SYSTEM_SYSHNDCTRL    (*((volatile unsigned long *)0xE000ED24))
#define NVIC_SYSTEM_INTCTRL       (*((volatile unsigned long *)0xE000ED04))
#define NVIC_SYSTEM_CFGCTRL       (*((volatile unsigned long *)0xE000ED14))

/*****************************************************************************
*                            MPU Registers                                   *
*****************************************************************************/
#define MPU_TYPE               (*((volatile unsigned long *)0xE000ED90))
#define MPU_CTRL               (*((volatile unsigned long *)0xE000ED94))
#define MPU_NUMBER             (*((volatile unsigned long *)0xE000ED98))
#define MPU_BASE_R               (*((volatile unsigned long *)0xE000ED9C))
#define MPU_ATTR               (*((volatile unsigned long *)0xE000EDA0))
#define MPU_BASE1              (*((volatile unsigned long *)0xE000EDA4))
#define MPU_ATTR1              (*((volatile unsigned long *)0xE000EDA8))
#define MPU_BASE2              (*((volatile unsigned long *)0xE000EDAC))
#define MPU_ATTR2              (*((volatile unsigned long *)0xE000EDB0))
#define MPU_BASE3              (*((volatile unsigned long *)0xE000EDB4))
#define MPU_ATTR3              (*((volatile unsigned long *)0xE000EDB8))

/*****************************************************************************
*                           TIMER MODE                                       *
*****************************************************************************/
#define TIMER0_R  (*((volatile unsigned long *)0x40030000))
#define TIMER1_R  (*((volatile unsigned long *)0x40031000))
#define TIMER2_R  (*((volatile unsigned long *)0x40032000))
#define TIMER3_R  (*((volatile unsigned long *)0x40033000))
#define TIMER4_R  (*((volatile unsigned long *)0x40034000))
#define TIMER5_R  (*((volatile unsigned long *)0x40035000))

#define TIMER_W_0  (*((volatile unsigned long *)0x40036000))
#define TIMER_W_1  (*((volatile unsigned long *)0x40037000))
#define TIMER_W_2  (*((volatile unsigned long *)0x4004C000))
#define TIMER_W_3  (*((volatile unsigned long *)0x4004D000))
#define TIMER_W_4  (*((volatile unsigned long *)0x4004E000))
#define TIMER_W_5  (*((volatile unsigned long *)0x4004F000))

/*****************************************************************************
*                           TIMER CGF                                        *
*****************************************************************************/
#define TIMER0_CFG  (*((volatile unsigned long *)0x40030000))
#define TIMER1_CFG  (*((volatile unsigned long *)0x40031000))
#define TIMER2_CFG  (*((volatile unsigned long *)0x40032000))
#define TIMER3_CFG  (*((volatile unsigned long *)0x40033000))
#define TIMER4_CFG  (*((volatile unsigned long *)0x40034000))
#define TIMER5_CFG  (*((volatile unsigned long *)0x40035000))
	
#define TIMER_W_0_CFG  (*((volatile unsigned long *)0x40036000))
#define TIMER_W_1_CFG  (*((volatile unsigned long *)0x40037000))
#define TIMER_W_2_CFG  (*((volatile unsigned long *)0x4004C000))
#define TIMER_W_3_CFG  (*((volatile unsigned long *)0x4004D000))
#define TIMER_W_4_CFG  (*((volatile unsigned long *)0x4004E000))
#define TIMER_W_5_CFG  (*((volatile unsigned long *)0x4004F000))
/*****************************************************************************
*                           GPTM Timer A Mode                                *
*****************************************************************************/
#define TIMER0_TA  (*((volatile unsigned long *)(0x40030000+0x004)))
#define TIMER1_TA  (*((volatile unsigned long *)(0x40031000+0x004)))
#define TIMER2_TA  (*((volatile unsigned long *)(0x40032000+0x004)))
#define TIMER3_TA  (*((volatile unsigned long *)(0x40033000+0x004)))
#define TIMER4_TA  (*((volatile unsigned long *)(0x40034000+0x004)))
#define TIMER5_TA  (*((volatile unsigned long *)(0x40035000+0x004)))
	
/*****************************************************************************
*                           GPTM Timer B Mode                                *
*****************************************************************************/
#define TIMER0_TB  (*((volatile unsigned long *)(0x40030000+0x008)))
#define TIMER1_TB  (*((volatile unsigned long *)(0x40031000+0x008)))
#define TIMER2_TB  (*((volatile unsigned long *)(0x40032000+0x008)))
#define TIMER3_TB  (*((volatile unsigned long *)(0x40033000+0x008)))
#define TIMER4_TB  (*((volatile unsigned long *)(0x40034000+0x008)))
#define TIMER5_TB  (*((volatile unsigned long *)(0x40035000+0x008)))
	
/*****************************************************************************
*                           GPTM Control                                     *
*****************************************************************************/
#define TIMER0_CTL (*((volatile unsigned long *)(0x40030000+0x00C)))
#define TIMER1_CTL (*((volatile unsigned long *)(0x40031000+0x00C)))
#define TIMER2_CTL (*((volatile unsigned long *)(0x40032000+0x00C)))
#define TIMER3_CTL (*((volatile unsigned long *)(0x40033000+0x00C)))
#define TIMER4_CTL (*((volatile unsigned long *)(0x40034000+0x00C)))
#define TIMER5_CTL (*((volatile unsigned long *)(0x40035000+0x00C)))

/*****************************************************************************
*                           GPTM Interrupt Mask                              *
*****************************************************************************/
#define TIMER0_IM (*((volatile unsigned long *)(0x40030000+0x018)))
#define TIMER1_IM (*((volatile unsigned long *)(0x40031000+0x018)))
#define TIMER2_IM (*((volatile unsigned long *)(0x40032000+0x018)))
#define TIMER3_IM (*((volatile unsigned long *)(0x40033000+0x018)))
#define TIMER4_IM (*((volatile unsigned long *)(0x40034000+0x018)))
#define TIMER5_IM (*((volatile unsigned long *)(0x40035000+0x018)))
	
/*****************************************************************************
*                           GPTM Raw Interrupt Status                        *
*****************************************************************************/
#define TIMER0_RIS (*((volatile unsigned long *)(0x40030000+0x01C)))
#define TIMER1_RIS (*((volatile unsigned long *)(0x40031000+0x01C)))
#define TIMER2_RIS (*((volatile unsigned long *)(0x40032000+0x01C)))
#define TIMER3_RIS (*((volatile unsigned long *)(0x40033000+0x01C)))
#define TIMER4_RIS (*((volatile unsigned long *)(0x40034000+0x01C)))
#define TIMER5_RIS (*((volatile unsigned long *)(0x40035000+0x01C)))
/*****************************************************************************
*                           GPTM CLEAR Interrupt Status                        *
*****************************************************************************/
#define TIMER0_ICR (*((volatile unsigned long *)(0x40030000+0x024)))
#define TIMER1_ICR (*((volatile unsigned long *)(0x40031000+0x024)))
#define TIMER2_ICR (*((volatile unsigned long *)(0x40032000+0x024)))
#define TIMER3_ICR (*((volatile unsigned long *)(0x40033000+0x024)))
#define TIMER4_ICR (*((volatile unsigned long *)(0x40034000+0x024)))
#define TIMER5_ICR (*((volatile unsigned long *)(0x40035000+0x024)))
/*****************************************************************************
*                        GPTM Timer A Interval Load                          *
*****************************************************************************/
#define TIMER0_AILR (*((volatile unsigned long *)(0x40030000+0x028)))
#define TIMER1_AILR (*((volatile unsigned long *)(0x40031000+0x028)))
#define TIMER2_AILR (*((volatile unsigned long *)(0x40032000+0x028)))
#define TIMER3_AILR (*((volatile unsigned long *)(0x40033000+0x028)))
#define TIMER4_AILR (*((volatile unsigned long *)(0x40034000+0x028)))
#define TIMER5_AILR (*((volatile unsigned long *)(0x40035000+0x028)))
/*****************************************************************************
*                        GPTM Timer B Interval Load                          *
*****************************************************************************/
#define TIMER0_BILR (*((volatile unsigned long *)(0x40030000+0x02C)))
#define TIMER1_BILR (*((volatile unsigned long *)(0x40031000+0x02C)))
#define TIMER2_BILR (*((volatile unsigned long *)(0x40032000+0x02C)))
#define TIMER3_BILR (*((volatile unsigned long *)(0x40033000+0x02C)))
#define TIMER4_BILR (*((volatile unsigned long *)(0x40034000+0x02C)))
#define TIMER5_BILR (*((volatile unsigned long *)(0x40035000+0x02C)))

/*****************************************************************************
*                        GPTM Timer A Prescale                               *
*****************************************************************************/
#define TIMER0_APR (*((volatile unsigned long *)(0x40030000+0x038)))
#define TIMER1_APR (*((volatile unsigned long *)(0x40031000+0x038)))
#define TIMER2_APR (*((volatile unsigned long *)(0x40032000+0x038)))
#define TIMER3_APR (*((volatile unsigned long *)(0x40033000+0x038)))
#define TIMER4_APR (*((volatile unsigned long *)(0x40034000+0x038)))
#define TIMER5_APR (*((volatile unsigned long *)(0x40035000+0x038)))
/*****************************************************************************
*                        GPTM Timer B Prescale                               *
*****************************************************************************/
#define TIMER0_BPR (*((volatile unsigned long *)(0x40030000+0x03C)))
#define TIMER1_BPR (*((volatile unsigned long *)(0x40031000+0x03C)))
#define TIMER2_BPR (*((volatile unsigned long *)(0x40032000+0x03C)))
#define TIMER3_BPR (*((volatile unsigned long *)(0x40033000+0x03C)))
#define TIMER4_BPR (*((volatile unsigned long *)(0x40034000+0x03C)))
#define TIMER5_BPR (*((volatile unsigned long *)(0x40035000+0x03C)))

/*****************************************************************************
*                        GPTM Timer A DATA                                   *
*****************************************************************************/
#define TIMER0_TAR (*((volatile unsigned long *)(0x40030000+0x048)))
#define TIMER1_TAR (*((volatile unsigned long *)(0x40031000+0x048)))
#define TIMER2_TAR (*((volatile unsigned long *)(0x40032000+0x048)))
#define TIMER3_TAR (*((volatile unsigned long *)(0x40033000+0x048)))
#define TIMER4_TAR (*((volatile unsigned long *)(0x40034000+0x048)))
#define TIMER5_TAR (*((volatile unsigned long *)(0x40035000+0x048)))
/*****************************************************************************
*                        GPTM Timer B DATA                                   *
*****************************************************************************/
#define TIMER0_TBR (*((volatile unsigned long *)(0x40030000+0x04C)))
#define TIMER1_TBR (*((volatile unsigned long *)(0x40031000+0x04C)))
#define TIMER2_TBR (*((volatile unsigned long *)(0x40032000+0x04C)))
#define TIMER3_TBR (*((volatile unsigned long *)(0x40033000+0x04C)))
#define TIMER4_TBR (*((volatile unsigned long *)(0x40034000+0x04C)))
#define TIMER5_TBR (*((volatile unsigned long *)(0x40035000+0x04C)))
	
#endif
