/*
 * funkcje.h
 *
 *  Created on: Nov 17, 2024
 *      Author: milos
 */

#ifndef SRC_FUNKCJE_H_
#define SRC_FUNKCJE_H_

#include "spi.h"
#include "gpio.h"


/*rejestry*/
#define CTRL 0x00
#define TRQ 0x01

void ResetDriver(void);
void Write_Reg(uint8_t* reg_in);


#endif /* SRC_FUNKCJE_H_ */
