#include "Types.h"
#include "Util.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"

#include "UART_Config.h"
#include "UART_Interface.h"



void UART_INIT(void){
	
u16 ubrrRegisterValue = (F_CPU/(16*UART_BAUDRATE))-1;	

UBRRL = (u8)ubrrRegisterValue;
UBRRH = ubrrRegisterValue >> 8;

//UBRRL=51;//9600 buad rate for 8 MHZ
//UBRRH=0;


UCSRB|=(UART_DATA_REGISTERY_INTERRUPT<<5) ; 
	   
UCSRC|=(1<<7) | (0<<6) | (0<<0);

switch(UART_PARITY){
	case 0:
		UCSRC|=(0<<5) | (0<<4);
		break;
	case 1:
		UCSRC|=(0<<5) | (1<<4);
		break;
	case 2:
		UCSRC|=(0<<5) | (0<<4);
		break;
}

switch(UART_STOPBITS){
	case 1:
		UCSRC|=(0<<3);
	break;
	case 2:
		UCSRC|=(0<<3);
	break;
}


switch(UART_DATABITS){
	case 5: 
		UCSRC|=(0<<2) | (0<<1);
		UCSRB|=(0<<2);
		break;
	case 6:
		UCSRC|=(0<<2) | (1<<1);
		UCSRB|=(0<<2);
		break;
	case 7:
		UCSRC|=(1<<2) | (0<<1);
		UCSRB|=(0<<2);
		break;	
	case 8:
		UCSRC|=(1<<2) | (1<<1);
		UCSRB|=(0<<2);
		break;
	case 9:
		UCSRC|=(1<<2) | (1<<1);
		UCSRB|=(0<<2);
		break;
}

}


void UART_enableRx(void){
	UCSRB|=(1<<4);
	#if (UART_RECEIVER_INTERRUPT==ENABLE)
		//enable interrupt here
	#endif
	UCSRB|=(UART_RECEIVER_INTERRUPT<<7);
}

void UART_enableTx(void){
	UCSRB|=(1<<3);
	#if (UART_TRANSMITTER_INTERRUPT==ENABLE)
	//enable interrupt here
	#endif
	UCSRB|=(UART_TRANSMITTER_INTERRUPT<<6);	
}



u8 UART_sendChar(u8 value){
	
	while (!(UCSRA & (1<<5)));
	UDR=value;
	return OK;  
}


u8 UART_sendString(u8 *value){
	u8 counter;
	for (counter = 0; value[counter] != '\0'; counter++) {
		UART_sendChar(value[counter]);
	}
	return OK;
}

/*
u8 UART_interruptSendChar(u8 value){

	UDR=value;
	return OK;
}
*/

 u8 UART_recieveChar(){
	 
	while(!(UCSRA & (1<<7)));
	return UDR; 
 }

/*
u8 UART_interruptRecieveChar(){
	
	return UDR;
}
*/