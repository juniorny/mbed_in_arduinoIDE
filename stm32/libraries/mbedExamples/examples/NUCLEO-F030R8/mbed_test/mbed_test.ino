#include "mbed.h"

//int global_by_zhong = 0;

Serial pc(SERIAL_TX, SERIAL_RX);

DigitalOut myled(LED1);

void setup() {
    pc.printf("Application start...\n");
//    pc.printf("global_by_zhong = %d\n", global_by_zhong);
}

void loop() {
    myled = !myled;
    wait(0.5);
//    for (volatile unsigned int i = 0; i < 0x1ffff; i++);
}
