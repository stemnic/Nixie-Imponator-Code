#include <atmel_start.h>
#include <util/delay.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	// Init all outputs
	
	PORTC.DIRSET = 0xff;
	PORTC.OUTSET = 0xcc;

	/* Replace with your application code */
	while (1) {
		for (int i = 0; i<8; i++){
			PORTC.OUTCLR = 0xff;
			PORTC.OUT |= i;
			PORTC.OUT |= (i << 4);
			_delay_ms(500);
		}
	}
}
