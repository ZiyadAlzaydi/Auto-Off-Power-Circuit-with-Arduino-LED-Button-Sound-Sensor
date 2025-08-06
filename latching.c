const int powerLatch = 5;
const int ledPin = 4;

void setup() {
  pinMode(powerLatch, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(powerLatch, HIGH);  // Keep power on
  digitalWrite(ledPin, HIGH);      // Turn on LED

  delay(10000);                    // Wait 10 seconds

  digitalWrite(ledPin, LOW);       // Turn off LED
  digitalWrite(powerLatch, LOW);   // Cut power
}

void loop() {
  // Nothing here — Arduino powers off after setup
}