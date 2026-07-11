/*
 * led1.c
 *
 * Created: 25/06/2026 07:47:21 م
 * Author : Ahmed_SHaker
 */ 

#include <avr/io.h>


int main(void)
{
   unsigned char i;
   DDRB=0x00;
   DDRD=0xFF;
   while(1)
   {
     i=PINB;
     PORTD=i;
     
   }
   
}
