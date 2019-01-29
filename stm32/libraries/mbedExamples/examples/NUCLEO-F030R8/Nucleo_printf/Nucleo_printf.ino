#include "mbed.h"
 
//------------------------------------
// Hyperterminal configuration
// 9600 bauds, 8-bit data, no parity
//------------------------------------
 
Serial pc(SERIAL_TX, SERIAL_RX);
 
DigitalOut myled(LED1);

int i;

void setup() {
    i = 1;
    pc.printf("Hello World !\n");
}

void loop() {
    wait(1);
    pc.printf("This program runs since %d seconds.\n", i++);
    myled = !myled;
}
