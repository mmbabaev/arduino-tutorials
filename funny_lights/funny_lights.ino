int currentPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void nextLight() {
//  digitalWrite(currentPin, LOW);
  digitalWrite(currentPin, HIGH);

  currentPin = currentPin + 1;
  if (currentPin == 11) { 
    currentPin = 8;
  }
  
  delay(500);
}

void resetPins() {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  nextLight();
  nextLight();
  nextLight();

  resetPins();
}
