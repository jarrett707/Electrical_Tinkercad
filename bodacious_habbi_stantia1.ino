const int numLEDs = 6; // Number of LEDs in the scanner
const int ledPins[] = {1, 3, 5, 7, 9, 11}; // Pin numbers for the LEDs

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT); // Set the LED pins as output
  }
}

void loop() {
  // Turn on the LEDs from left to right
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(100); // Delay for a short period
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
  }

  // Turn on the LEDs from right to left
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(100); // Delay for a short period
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
  }
}
