#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0b00001000; //set D3 as output
	  PORTD = 0b00001000;  //set D3 to high
	    
	  while(1){
	  	 PORTD |= 0b00001000;  //LED on
	  	 _delay_ms(500);
  
	  	 PORTD = 0x00;  //LED off
	  	 _delay_ms(500);
	  }
	  return 0;
}