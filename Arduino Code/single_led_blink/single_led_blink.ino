// This is the setup function, which runs once when the Arduino is powered on or reset.
void setup() {
  // Set pin 8 as an output pin, indicating it will be used to send electrical signals.
  pinMode(8, OUTPUT);
}

// This is the loop function, which runs repeatedly after the setup function.
void loop() {
  // Turn on (HIGH) the output signal on pin 8, indicating an electrical signal is sent.
  digitalWrite(8, HIGH);
  
  // Pause the program for 100 milliseconds (0.1 seconds).
  delay(100);
  
  // Turn off (LOW) the output signal on pin 8, indicating no electrical signal is sent.
  digitalWrite(8, LOW);
  
  // Pause the program for another 100 milliseconds (0.1 seconds).
  delay(100);
}
