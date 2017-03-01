#include "Types.h"
#include "Util.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"

#include "KeyPad_config.h"
#include "KeyPad_Interface.h"

#define F_CPU 1000000UL

#include<Util/delay.h>


/// This is not a good implementation as it not generic 
// this implementation is specific to 4 x 4 keypad like calculator
// will implement a more generic one when I have time

u8 KEYPAD_getPressedKey(void){
	
	u8 col1Val,col2Val,col3Val,col4Val;
	u8 rowCounter=0;
	u8 colCounter=0;	
	u8 flag=0;
	
	for(rowCounter=1;rowCounter<=KEYPAD_NumOfRow && flag==0;rowCounter++){
		//toggle zeros
		switch(rowCounter){
			case 1:
				DIO_writePin(KEYPAD_R1, LOW);
				DIO_writePin(KEYPAD_R2, HIGH);
				DIO_writePin(KEYPAD_R3, HIGH);
				DIO_writePin(KEYPAD_R4, HIGH);
				break;
			case 2:
				DIO_writePin(KEYPAD_R1, HIGH);
				DIO_writePin(KEYPAD_R2, LOW);
				DIO_writePin(KEYPAD_R3, HIGH);
				DIO_writePin(KEYPAD_R4, HIGH);
				break;
			case 3:
				DIO_writePin(KEYPAD_R1, HIGH);
				DIO_writePin(KEYPAD_R2, HIGH);
				DIO_writePin(KEYPAD_R3, LOW);
				DIO_writePin(KEYPAD_R4, HIGH);
				break;
			case 4:
				DIO_writePin(KEYPAD_R1, HIGH);
				DIO_writePin(KEYPAD_R2, HIGH);
				DIO_writePin(KEYPAD_R3, HIGH);
				DIO_writePin(KEYPAD_R4, LOW);
				break;		
		}
		
				
		for(colCounter=1;colCounter<=KEYPAD_NumOfCol && flag==0;colCounter++){
			 
			 DIO_readPin(KEYPAD_C1,&col1Val);
			 DIO_readPin(KEYPAD_C2,&col2Val);
			 DIO_readPin(KEYPAD_C3,&col3Val);
			 DIO_readPin(KEYPAD_C4,&col4Val);
			
			_delay_ms(20);
			
			if(colCounter==1 && col1Val==0){
				switch(rowCounter){
					case 1: 
						return 7;
					case 2:
						return 4;
					case 3:
						return 1;
					case 4:
						return 'U';	
					}
			}
			
			if(colCounter==2 && col2Val==0){
				switch(rowCounter){
					case 1:
						return 8;
					case 2:
						return 5;
					case 3:
						return 2;
					case 4:
						return 0;
				}
			}		
			
			if(colCounter==3 && col3Val==0){
				switch(rowCounter){
					case 1:
						return 9;
					case 2:
						return 6;
					case 3:
						return 3;
					case 4:
						return '=';
				}
			}
			
			if(colCounter==4 && col4Val==0){
				switch(rowCounter){
					case 1:
						return '/';
					case 2:
						return '*';
					case 3:
						return '-';
					case 4:
						return '+';
				}
			}		
					
						 
		}
		
		
	}
	
	return 'f';
}

	

