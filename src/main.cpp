#include <avr/io.h>
#include <util/delay.h>

int main(){
  DDRH|= (1<<PH5)|(1<<PH6);
  DDRB|= (1<<PB5)|(1<<PB5);
  

}