#include "Mouse.h"

const int upButton = 2;
const int mouseButton = 6;

void setup() {
  pinMode(upButton, INPUT_PULLUP);
  pinMode(mouseButton, INPUT_PULLUP);
  Mouse.begin();
}

void loop() {
  if (digitalRead(upButton) == LOW ) {
    Mouse.move(0, -10, 0); // x, y, scrollwheel
  }

  if (digitalRead(mouseButton) == LOW) { // mouse button pressed
      Mouse.press(MOUSE_LEFT);
  } else { // mouse button released
      Mouse.release(MOUSE_LEFT);
  }

  // a delay so the mouse doesn't move too fast:
  delay(20);
}
