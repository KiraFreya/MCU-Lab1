/*       
 #include <avr/io.h>
 #include <util/delay.h>

 int main(void)
 {
     DDRD = 0b00001000; //set PD3 - LED - as output
 	PORTD = 0b00000100;  // PUD, additional setup to enable input
	    
 	while(1){
		if ((PIND & 0b00000100) == 0b00000100){ //Check if button is not pressed
	  	 	PORTD |= 0b00001000;  //LED on
 	  	 	_delay_ms(500);
  
 	  	 	PORTD &=~ 0b00001000;  //LED off
 	  	 	_delay_ms(500);
 		}
 		else{          //button is pressed
 			PORTD &=~ 0b00001000;
 		}
 	}
 	return 0;
*/


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0b00011000; //set PD3 & PD4 - LED1 & LED2 - as outputs
	PORTD = 0b00000100;  // PUD, additional setup to enable input
	    
	while(1){
	    if ((PIND & 0b00000100) == 0b00000100){ // button is not pressed
			PORTD |= (1 << PORTD3); //turn on LED1 and turn off LED2
	  	 	_delay_ms(500);
  
	  	 	PORTD &=~(1 << PORTD3);  //LED off
	  	 	_delay_ms(500);
		}
	    else{ // button is pressed
			PORTD |= (1 << PORTD4); //turn off LED1 and turn o LED2
	  	 	_delay_ms(500);
  
	  	 	PORTD &=~(1 << PORTD4);;  //LED off
	  	 	_delay_ms(500);
	     }
	}
	return 0;
}