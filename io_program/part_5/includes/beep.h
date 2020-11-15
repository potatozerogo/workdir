#ifndef __BPS_BEEP_H
#define __BPS_BEEP_H


#define BEEP_GPIO_INDEX "19"

int beep_init(void);
int beep_deinit(void);
int beep_on(void);
int beep_off(void);

#endif //__BPS_BEEP_H
