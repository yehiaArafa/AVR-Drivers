#include "Types.h"
#include "Util.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"

#include "Segment_Config.h"
//#include "Segment_Private.h"
#include "Segment_Interface.h"



void SEGMENT_INIT(void){
	
	SEGMENT_clearDisplay();
	#if commonType ==0
		DIO_writePin(commonPin,LOW);
	#else
		DIO_writePin(commonPin,HIGH);
	#endif		

}


u8 SEGMENT_clearDisplay(){
	
	if( DIO_writePin(A,LOW) &&
	    DIO_writePin(B,LOW) &&
	    DIO_writePin(C,LOW) &&
	    DIO_writePin(D,LOW) &&
	    DIO_writePin(E,LOW) &&
	    DIO_writePin(F,LOW) &&
	    DIO_writePin(G,LOW) ){
	return OK;
		}
	return ERROR; 
	
}

u8 SEGMENT_display(u8 value){
	
if ( (value >=0 && value <=9) ) ){
	
	return OK;
}


return ERROR;


}



