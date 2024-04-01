
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalRead(LED_BUILTIN);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalRead(LED_BUILTIN);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
