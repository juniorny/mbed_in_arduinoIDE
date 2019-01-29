#include "mbed.h"
 
InterruptIn mybutton(USER_BUTTON);
DigitalOut myled(LED1);
 
float delay = 1.0; // 1 sec
 
void pressed()
{
    if (delay == 1.0)
        delay = 0.2; // 200 ms
    else
        delay = 1.0; // 1 sec
}

void setup() {
    mybutton.fall(&pressed);

}

void loop() {
    myled = !myled;
    wait(delay);
}
