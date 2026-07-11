#define F_CPU 900000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xFF;

	while (1)
	{
		PORTD = 0b00000001;
		_delay_ms(300);

		PORTD = 0b00000010;
		_delay_ms(300);

		PORTD = 0b00000100;
		_delay_ms(300);

		PORTD = 0b00001000;
		_delay_ms(300);

		PORTD = 0b00010000;
		_delay_ms(300);

		PORTD = 0b00100000;
		_delay_ms(300);

		PORTD = 0b01000000;
		_delay_ms(300);

		PORTD = 0b10000000;
		_delay_ms(300);
	}
}