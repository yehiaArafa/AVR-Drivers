#include "Types.h"
#include "Util.h"
#include "DIO_Config.h"
#include "DIO_Private.h"
#include "DIO_Interface.h"



void DIO_INIT(void){
	
	DDRA=conc(DIO_PIN7_DIR,  DIO_PIN6_DIR,  DIO_PIN5_DIR,  DIO_PIN4_DIR,  DIO_PIN3_DIR,  DIO_PIN2_DIR,  DIO_PIN1_DIR,  DIO_PIN0_DIR);
	DDRB=conc(DIO_PIN15_DIR, DIO_PIN14_DIR, DIO_PIN13_DIR, DIO_PIN12_DIR, DIO_PIN11_DIR, DIO_PIN10_DIR, DIO_PIN9_DIR,  DIO_PIN8_DIR);
	DDRC=conc(DIO_PIN23_DIR, DIO_PIN22_DIR, DIO_PIN21_DIR, DIO_PIN20_DIR, DIO_PIN19_DIR, DIO_PIN18_DIR, DIO_PIN17_DIR, DIO_PIN16_DIR);
	DDRD=conc(DIO_PIN31_DIR, DIO_PIN30_DIR, DIO_PIN29_DIR, DIO_PIN28_DIR, DIO_PIN27_DIR, DIO_PIN26_DIR, DIO_PIN25_DIR, DIO_PIN24_DIR);

	PORTA=conc(DIO_PIN7_INIT,  DIO_PIN6_INIT,  DIO_PIN5_INIT,  DIO_PIN4_INIT,  DIO_PIN3_INIT,  DIO_PIN2_INIT,  DIO_PIN1_INIT,  DIO_PIN0_INIT);
	PORTB=conc(DIO_PIN15_INIT, DIO_PIN14_INIT, DIO_PIN13_INIT, DIO_PIN12_INIT, DIO_PIN11_INIT, DIO_PIN10_INIT, DIO_PIN9_INIT,  DIO_PIN8_INIT);
	PORTC=conc(DIO_PIN23_INIT, DIO_PIN22_INIT, DIO_PIN21_INIT, DIO_PIN20_INIT, DIO_PIN19_INIT, DIO_PIN18_INIT, DIO_PIN17_INIT, DIO_PIN16_INIT);
	PORTD=conc(DIO_PIN31_INIT, DIO_PIN30_INIT, DIO_PIN29_INIT, DIO_PIN28_INIT, DIO_PIN27_INIT, DIO_PIN26_INIT, DIO_PIN25_INIT, DIO_PIN24_INIT);
	
}

u8 DIO_writePin(u8 pinNumber, u8 value){
	if(pinNumber<NUMBER_OF_PINS && pinNumber >= 0){
		switch (pinNumber/PINS_PER_PORT)
		{
			case 0: ASSIGN_BIT(PORTA,(pinNumber%PINS_PER_PORT),value);
					break;
			case 1: ASSIGN_BIT(PORTB,(pinNumber%PINS_PER_PORT),value);
					break;
			case 2: ASSIGN_BIT(PORTC,(pinNumber%PINS_PER_PORT),value);
					break;
			case 3: ASSIGN_BIT(PORTD,(pinNumber%PINS_PER_PORT),value);
					break;
		}
		return OK;
	}
	else{
		return ERROR;
	}
}

u8 DIO_readPin(u8 pinNumber, u8 *ptrValue){
	if(pinNumber<NUMBER_OF_PINS && pinNumber >= 0){
		switch (pinNumber/PINS_PER_PORT)
		{
			case 0: *ptrValue=GET_BIT(PORTA,(pinNumber%PINS_PER_PORT));
					break;
			case 1: *ptrValue=GET_BIT(PORTB,(pinNumber%PINS_PER_PORT));
					break;
			case 2: *ptrValue=GET_BIT(PORTC,(pinNumber%PINS_PER_PORT));
					break;
			case 3: *ptrValue=GET_BIT(PORTD,(pinNumber%PINS_PER_PORT));
					break;
		}
		return OK;
	}
	else{
		return ERROR;
	}
}
