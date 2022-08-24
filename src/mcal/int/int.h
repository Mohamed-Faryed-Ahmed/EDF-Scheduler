#ifndef INT_H
#define INT_H
#include "../../common/std_type.h"
#include "../../common/reg.h"

#define PRI_0   (0U)
#define PRI_1   (1U)
#define PRI_2   (2U)
#define PRI_3   (3U)
#define PRI_4   (4U)
#define PRI_5   (5U)
#define PRI_6   (6U)
#define PRI_7   (7U)

void INT_timer0A_En(void);
void INT_sysTimer_En(uint8_t pri);

#endif
