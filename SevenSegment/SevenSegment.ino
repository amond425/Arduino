  int A=2;
  int B=3;
  int C=4;
  int D=5;
  int E=6;
  int F=7;
  int G=8;
  
void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(13, INPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void turnOffAll() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void numbers(int numberToDisplay) {
  turnOffAll();
  if(numberToDisplay == 0) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
  }
  if(numberToDisplay == 1) {
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
  }
  if(numberToDisplay == 2) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
  }
  if(numberToDisplay == 3) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if(numberToDisplay == 4) {
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
  }
  if(numberToDisplay == 5) {
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if(numberToDisplay == 6) {
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if(numberToDisplay == 7) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
  }
  if(numberToDisplay == 8) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
  if(numberToDisplay == 9) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(C, HIGH);
  }
}

void loop() {
  if (digitalRead(11) == 1) {
    Serial.print("Sensed motion ");
    int numberToDisplay = (int)random(1, 6);
    Serial.println(numberToDisplay);
    numbers(numberToDisplay);
  }
  delay(500);
}

// #CHOW CHOW ARE CUTE
