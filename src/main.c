#include "settings.h"
#include "macros.h"
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    
    PORTB |= (1<<PB7); //Pull up rez na PB7
    DDRD |= (1 << PD0); 

    while (1) {
        if(!(PINB & (1<<7))){
            for(int y = 0;y < 7;y++){
                for(int i =0;i<250;i++){
                    PORTD ^= (1<<PD0);
                    switch(y){
                        case 0:
                            _delay_ms(1.5);
                            break;
                        case 1:
                            _delay_ms(1.5);
                            break;
                        case 2:
                            _delay_ms(1.5);
                            break;
                        case 3:
                            _delay_ms(3);
                            break;
                        case 4:
                            _delay_ms(1);
                            break;
                         case 5:
                            _delay_ms(5);
                            break;
                         case 6:
                            _delay_ms(5);
                            break;
                        
                    }
                }
            if(y%2==0){
                _delay_ms(50);
            }else{
                _delay_ms(150);
            }
        }
        
        }
    }

    return 0;
}                               /* main */
