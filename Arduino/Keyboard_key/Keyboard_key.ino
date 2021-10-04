#include <Keyboard.h>
int buttonPin = 3;

void setup() {
    pinMode( buttonPin, INPUT_PULLUP ); // connect the button to pin 3
    Keyboard.begin(); // start the keyboard library
    delay(3000); // upload delay
}

void loop() {
    int pressed = digitalRead( buttonPin );  // read pin 3
    if( pressed == HIGH ){ // if the button is pressed
        Keyboard.write( 'd' ); // print the letter d
        delay( 100 ); // do nothing for 0.1 second
    }
}
