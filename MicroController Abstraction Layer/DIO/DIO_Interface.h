#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

#include "DIO_Private.h"

/***** FUNCTIONS *****/

//initialize
extern void DIO_INIT(void);

//write value to pin
extern u8 DIO_writePin(u8 pinNumber,u8 value);

//read value from pin
extern u8 DIO_readPin(u8 pinNumber,u8 *value);

//write value to port
extern u8 DIO_writePort(u8 portLetter, u8 value);

//read value from port
extern u8 DIO_readPort(u8 portLetter, u8 *value);


/***** REGISTERS *****/
/* 
PORTA, PORTB, PORTC, PORTD
PINA, PINB, PINC, PIND
DDRA, DDRB, DDRC, DDRD
*/

/***** PINS *****/
/* 
PIN0, PIN1, PIN2, ......, PIN32
*/


#endif 