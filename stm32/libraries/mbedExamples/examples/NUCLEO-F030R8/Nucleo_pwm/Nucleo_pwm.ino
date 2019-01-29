#include "mbed.h"
 
PwmOut myled(PA_4);
 
char i = 0;
bool dir = true;

void setup() {
    myled.period_ms(10);
    myled.pulsewidth_ms(i); 
}

void loop() {
    if (dir)
    {
        i++;
        if (i > 20) 
            dir = false;         
    }
    else
    {
        i--;
        if (i <= 0)
            dir = true;      
    }

    myled.pulsewidth_ms(i); 
    wait(0.05);
}
