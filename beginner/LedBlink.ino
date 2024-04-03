// Blinking LED Example

// Define the pin connected to the LED
int ledPin = 13;

// Setup function runs once when the board starts up
void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

// Loop function runs repeatedly
void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(ledPin, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);
  // Wait for 1 second
  delay(1000);
}