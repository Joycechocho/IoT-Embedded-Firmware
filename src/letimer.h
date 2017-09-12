#ifndef __LETIMER_H__
#define __LETIMER_H__

#include "sleep.h"

extern uint16_t ulfrco_ticks;

#define LETIMER_ULFRCO_TICK_S  1000
#define LETIMER_LFXO_TICK_S   32768

#define LE_DIVIDER2 true        //Needed for periods 2 seconds and over
#define LE_PERIOD_SECONDS (2.5) // Period must be in the range 0 - 2 seconds
#define LE_ON_SECONDS (.05)    //  Off + On period duration must cumulatively be 2 seconds or less

void LETIMER_setup(sleepstate_enum);
void LETIMER0_IRQHandler(void);

#endif
