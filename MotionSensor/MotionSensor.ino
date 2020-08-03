void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int motionSensorOutput = digitalRead(2);
  if (motionSensorOutput == 1) {
    tone(11, 500);
    delay(500);
    tone(11, 520);
    delay(500);
    tone(11, 540);
    delay(500);
    tone(11, 560);
    delay(500);
    tone(11, 580);
    delay(500);
    tone(11, 600);
    delay(500);
    tone(11, 620);
    delay(500);
    tone(11, 640);
    delay(500);
    tone(11, 660);
    delay(500);
    noTone(11);
  }
  else {
    delay(1000);
  }
}
