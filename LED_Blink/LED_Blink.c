/*
 * LED_Blink.c
 *
 * Created: 04-02-2016 11:56:35
 * Author : Kevin Rosenørn Skrumsager
 */ 
#define F_CPU 16000000UL //CPU clock frequency

#include <avr/io.h>
#include <util/delay.h>

void init();


int main(void)
{
	init();
    /* Replace with your application code */
    while (1) 
    {
		PORTG |= (1<<PG5); //5th bit in port G is set to 1
		_delay_ms(1000);
		PORTG &= ~(1<<PG5); //5th bit in port G is set to 0
		_delay_ms(1000);
    }
}

/*
*init-function sets a port to give output.
*/
void init()
{
	DDRG  |= (1<<DDG5); //Data direction register has bit #5 set to 1
}

