//these are the include files. They are outside the project folder
#include <avr/io.h>
#include <avr/delay.h>

int main (void)
{
	//Set PORTC to all outputs
	DDRC = 0xFF;
	//create an infinite loop
	while(1) {
		PORTC |=(1<<0);
		//PAUSE 250 miliseconds
		_delay_ms(1000);
		//turns C0 LOW
		PORTC &= ~(1 << 0);
		//PAUSE 250 miliseconds
		_delay_ms(1000);
	};
}