#include "Types.h"
#include "Util.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"

#include "Segment_Config.h"
#include "Segment_Interface.h"



void SEGMENT_INIT(void){
	
	SEGMENT_clearDisplay();
	#if SEGMENT_commonType ==0
		DIO_writePin(SEGMENT_commonPin,LOW);
	#else
		DIO_writePin(SEGMENT_commonPin,HIGH);
	#endif		

}


u8 SEGMENT_clearDisplay(){
	
	if( DIO_writePin(SEGMENT_A,LOW) &&
	    DIO_writePin(SEGMENT_B,LOW) &&
	    DIO_writePin(SEGMENT_C,LOW) &&
	    DIO_writePin(SEGMENT_D,LOW) &&
	    DIO_writePin(SEGMENT_E,LOW) &&
	    DIO_writePin(SEGMENT_F,LOW) &&
	    DIO_writePin(SEGMENT_G,LOW) ){
	return OK;
		}
	return ERROR; 
	
}

u8 SEGMENT_display_num(u8 value){
	
if ( (value >=0 && value <=9) ) {
	switch (value){
	case 0: 
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,HIGH);
		DIO_writePin(SEGMENT_E,HIGH);
		DIO_writePin(SEGMENT_F,HIGH);
		DIO_writePin(SEGMENT_G,LOW);
		break;
	case 1:
		DIO_writePin(SEGMENT_A,LOW);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,LOW);
		DIO_writePin(SEGMENT_E,LOW);
		DIO_writePin(SEGMENT_F,LOW);
		DIO_writePin(SEGMENT_G,LOW);
		break;
	case 2:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,LOW);
		DIO_writePin(SEGMENT_D,HIGH);
		DIO_writePin(SEGMENT_E,HIGH);
		DIO_writePin(SEGMENT_F,LOW);
		DIO_writePin(SEGMENT_G,HIGH);
		break;	
	case 3:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,HIGH);
		DIO_writePin(SEGMENT_E,LOW);
		DIO_writePin(SEGMENT_F,LOW);
		DIO_writePin(SEGMENT_G,HIGH);
		break;
	case 4:
		DIO_writePin(SEGMENT_A,LOW);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,LOW);
		DIO_writePin(SEGMENT_E,LOW);
		DIO_writePin(SEGMENT_F,HIGH);
		DIO_writePin(SEGMENT_G,HIGH);
		break;
	case 5:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,LOW);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,HIGH);
		DIO_writePin(SEGMENT_E,LOW);
		DIO_writePin(SEGMENT_F,HIGH);
		DIO_writePin(SEGMENT_G,HIGH);
		break;
	case 6:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,LOW);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,HIGH);
		DIO_writePin(SEGMENT_E,HIGH);
		DIO_writePin(SEGMENT_F,HIGH);
		DIO_writePin(SEGMENT_G,HIGH);
		break;
	case 7:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,LOW);
		DIO_writePin(SEGMENT_E,LOW);
		DIO_writePin(SEGMENT_F,LOW);
		DIO_writePin(SEGMENT_G,LOW);
		break;
	case 8:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,HIGH);
		DIO_writePin(SEGMENT_E,HIGH);
		DIO_writePin(SEGMENT_F,HIGH);
		DIO_writePin(SEGMENT_G,HIGH);
		break;
	case 9:
		DIO_writePin(SEGMENT_A,HIGH);
		DIO_writePin(SEGMENT_B,HIGH);
		DIO_writePin(SEGMENT_C,HIGH);
		DIO_writePin(SEGMENT_D,LOW);
		DIO_writePin(SEGMENT_E,LOW);
		DIO_writePin(SEGMENT_F,HIGH);
		DIO_writePin(SEGMENT_G,HIGH);
		break;	
	}
	return OK;
}

return ERROR;

}


u8 SEGMENT_display_char(u8 value){
	
	if ( (value >='A' && value <='F') ) {
		switch (value){
			case 'A':
			DIO_writePin(SEGMENT_A,HIGH);
			DIO_writePin(SEGMENT_B,HIGH);
			DIO_writePin(SEGMENT_C,HIGH);
			DIO_writePin(SEGMENT_D,LOW);
			DIO_writePin(SEGMENT_E,HIGH);
			DIO_writePin(SEGMENT_F,HIGH);
			DIO_writePin(SEGMENT_G,HIGH);
			break;
			case 'B':
			DIO_writePin(SEGMENT_A,LOW);
			DIO_writePin(SEGMENT_B,LOW);
			DIO_writePin(SEGMENT_C,HIGH);
			DIO_writePin(SEGMENT_D,HIGH);
			DIO_writePin(SEGMENT_E,HIGH);
			DIO_writePin(SEGMENT_F,HIGH);
			DIO_writePin(SEGMENT_G,HIGH);
			break;
			case 'C':
			DIO_writePin(SEGMENT_A,HIGH);
			DIO_writePin(SEGMENT_B,LOW);
			DIO_writePin(SEGMENT_C,LOW);
			DIO_writePin(SEGMENT_D,HIGH);
			DIO_writePin(SEGMENT_E,HIGH);
			DIO_writePin(SEGMENT_F,HIGH);
			DIO_writePin(SEGMENT_G,LOW);
			break;
			case 'D':
			DIO_writePin(SEGMENT_A,LOW);
			DIO_writePin(SEGMENT_B,HIGH);
			DIO_writePin(SEGMENT_C,HIGH);
			DIO_writePin(SEGMENT_D,HIGH);
			DIO_writePin(SEGMENT_E,HIGH);
			DIO_writePin(SEGMENT_F,LOW);
			DIO_writePin(SEGMENT_G,HIGH);
			break;
			case 'E':
			DIO_writePin(SEGMENT_A,HIGH);
			DIO_writePin(SEGMENT_B,LOW);
			DIO_writePin(SEGMENT_C,LOW);
			DIO_writePin(SEGMENT_D,HIGH);
			DIO_writePin(SEGMENT_E,HIGH);
			DIO_writePin(SEGMENT_F,HIGH);
			DIO_writePin(SEGMENT_G,HIGH);
			break;
			case 'F':
			DIO_writePin(SEGMENT_A,HIGH);
			DIO_writePin(SEGMENT_B,LOW);
			DIO_writePin(SEGMENT_C,LOW);
			DIO_writePin(SEGMENT_D,LOW);
			DIO_writePin(SEGMENT_E,HIGH);
			DIO_writePin(SEGMENT_F,HIGH);
			DIO_writePin(SEGMENT_G,HIGH);
			break;
					}
		return OK;
	}

	return ERROR;

}



