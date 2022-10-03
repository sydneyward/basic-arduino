// Simple program to make external LED flash

int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn light on 
  delay(1000);
  digitalWrite(ledPin, LOW); // turn it off
  delay(1000);
}
