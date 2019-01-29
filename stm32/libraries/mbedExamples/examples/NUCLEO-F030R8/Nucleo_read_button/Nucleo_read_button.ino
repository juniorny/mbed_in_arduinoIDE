#include "mbed.h"
 
DigitalIn mybutton(USER_BUTTON);
DigitalOut myled(LED1);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
    if (mybutton == 0) { // Button is pressed
      myled = !myled; // Toggle the LED state
      wait(0.2); // 200 ms
    }
}
