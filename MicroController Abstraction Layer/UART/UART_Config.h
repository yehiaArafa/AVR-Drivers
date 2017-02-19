#ifndef _UART_CONFIG_H_
#define _UART_CONFIG_H_


/*frequency oscillator for the MCU in MHZ */
#define F_CPU    8000000

/*Parity (NONE=0, ODD=1, EVEN=2 )*/
#define UART_PARITY	   0

/*Baudrate */
#define UART_BAUDRATE    9600

/*Stop bits  (ONE_BIT=1 and TWO_BIT=2)*/
#define UART_STOPBITS    1

/*Data bits  (FIVE_BITS=5, SIX_BITS=6, SEVEN_BITS=7, EIGHT_BITS=8, NINE_BITS=9)*/
#define UART_DATABITS      8

/*Enable-Disable receiver interrupt (ENABLE and DISBALE)*/
#define UART_RECEIVER_INTERRUPT         UART_DISABLE

/*Enable-Disable transmitter interrupt (ENABLE and DISBALE)*/
#define UART_TRANSMITTER_INTERRUPT      UART_DISABLE

/*Enable-Disable data register empty interrupt (ENABLE and  DISBALE)*/
#define UART_DATA_REGISTERY_INTERRUPT   UART_DISABLE


#define UART_ENABLE	 1
#define UART_DISABLE 0


#endif