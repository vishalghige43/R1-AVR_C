#include <define.hpp>

void gpio_init(){

    //TODO: Pin_1/Pin_2 set for input

    DDRA|= (1<<dirFL) | (1<<dirBL);
    DDRB|= (1<<mPinBL)| (1<<mPinFR) | (1<<ServoPin_3) | (1<<stepPin);
    DDRC|= (1<<dirFR) | (1<<dirBR) | (1<<dirPin);
    DDRE|= (1<<ServoPin_1) | (1<<ServoPin_4) | (1<<shootPnuematic);
    DDRG|= (1<<ServoPin_2);
    DDRH|= (1<<mPinFL) | (1<<mPinBR) | (1<<BldcPin_1);

    _delay_ms(1);


}