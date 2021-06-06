#define flexPin A0 // with a 10k resistor
#define ledPin 4 // with a 1k resistor

void setup() {
  pinMode(flexPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(flexPin);
  // convert flexValue to LED output
  // map(value, fromLow, fromHigh, toLow, toHigh)
  int ledValue = map(flexValue, 720, 940, 0, 255);
  Serial.print(flexValue);
  Serial.print(";");
  Serial.print(ledValue);
  Serial.println();
  analogWrite(ledPin, ledValue);
  delay(100);
}
