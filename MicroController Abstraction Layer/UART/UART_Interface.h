#ifndef _UART_INTERFACE_H_
#define _UART_INTERFACE_H_

#include "UART_Private.h"


extern void UART_INIT(void);
extern void UART_enableRx(void);
extern void UART_enableTx(void);
extern u8 UART_sendChar(u8);
extern u8 UART_sendString(u8*);
extern u8 UART_interruptSendChar(void);
extern u8 UART_recieveChar();
extern u8 UART_interruptRecieveChar();

#endif 
