#ifndef _DIO_PRIVATE_H_
#define _DIO_PRIVATE_H_

/***** REGISTERS DEFINITION *****/

#define PINA    *((volatile u8 *)(0X39))
#define PINB    *((volatile u8 *)(0X36))
#define PINC    *((volatile u8 *)(0X33))
#define PIND    *((volatile u8 *)(0X30))

#define DDRA    *((volatile u8 *)(0X3A))
#define DDRB    *((volatile u8 *)(0X37))
#define DDRC    *((volatile u8 *)(0X34))
#define DDRD    *((volatile u8 *)(0X31))

#define PORTA   *((volatile u8 *)(0X3B))
#define PORTB   *((volatile u8 *)(0X38))
#define PORTC   *((volatile u8 *)(0X35))
#define PORTD   *((volatile u8 *)(0X32))


/***** PINS DEFINITION *****/

#define PIN0    0
#define PIN1    1 
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7
#define PIN8    8
#define PIN9    9
#define PIN10   10
#define PIN11   11
#define PIN12   12
#define PIN13   13
#define PIN14   14
#define PIN15   15
#define PIN16   16
#define PIN17   17
#define PIN18   18
#define PIN19   19
#define PIN20   20
#define PIN21   21
#define PIN22   22
#define PIN23   23
#define PIN24   24
#define PIN25   25
#define PIN26   26
#define PIN27   27
#define PIN28   28
#define PIN29   29
#define PIN30   30
#define PIN31   31

/***** CONCATINATION *****/

#define conc(A7,A6,A5,A4,A3,A2,A1,A0)            concHelper(A7,A6,A5,A4,A3,A2,A1,A0)
#define concHelper(X7,X6,X5,X4,X3,X2,X1,X0)     0b##X7##X6##X5##X4##X3##X2##X1##X0


/***** OTHER DEFINITIONS *****/

#define PINS_PER_PORT    8
#define NUMBER_OF_PORTS  4
#define NUMBER_OF_PINS   32


#endif 
