// Uses potentiometer to change the brighness of LED

int potpin = 0; // holds analog value of potentiometer
int ledpin = 11; // output pin
int val = 0; // holds values from the sensor

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  // analog ports are default set for input
}

void loop() {
  val = analogRead(potpin);
  Serial.println(val);
  analogWrite(ledpin, val/4);
  delay(10);
}

