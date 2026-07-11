/*
 * LAB3.c
 *
 * Created: 14/01/48 04:13:19 ص
 * Author : Administrator
 */ 

#include <avr/io.h>


int main(void)
{
	DDRB=0X00;
	DDRC=0XFF;
	PORTB|=(1<<PORTB0)|(1<<PORTB1)|(1<<PORTB2);
	
    /* Replace with your application code */
    while (1) 
    { if((PINB &(1<<0))==0)
		{PORTC |=(1<<0);}
			if ((PINB &(1<<1))==0)
			    {PORTC &=~(1<<0);}
			if ((PINB&(1<<2))==0)
			{PORTC^=(1<<0);}
			}
}

