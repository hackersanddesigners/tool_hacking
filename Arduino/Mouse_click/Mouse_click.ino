#include <Mouse.h>

int buttonPin = 9;  // Set a button to any pin

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);  // Set the button as an input
  Mouse.begin();
}

void loop()
{
  if (digitalRead(buttonPin) == LOW)  // if the button goes low
  {
    Mouse.click();  // send mouse click even to the computer
    delay(1000);  // delay so there aren't a kajillion clicks
  }
}
