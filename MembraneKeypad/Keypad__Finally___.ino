#define r1 9
#define r2 8
#define r3 7
#define r4 6
#define c1 5
#define c2 4
#define c3 3
#define c4 2

int delay_ms = 500;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(c1, INPUT_PULLUP);
  pinMode(c2, INPUT_PULLUP);
  pinMode(c3, INPUT_PULLUP);
  pinMode(c4, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // read each row
  readRow1();
  readRow2();
  readRow3();
  readRow4();
}

void readRow1() {
  digitalWrite(r1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);

  if (digitalRead(c1) == LOW) {
   Serial.println("1");
   delay(delay_ms); 
  }
  else if (digitalRead(c2) == LOW) {
    Serial.println("2");
    delay(delay_ms);
  }
  else if (digitalRead(c3) == LOW) {
    Serial.println("3");
    delay(delay_ms);
  }
  else if (digitalRead(c4) == LOW) {
    Serial.println("A");
    delay(delay_ms);
  }
}

void readRow2() {
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);

  if (digitalRead(c1) == LOW) {
   Serial.println("4");
   delay(delay_ms); 
  }
  else if (digitalRead(c2) == LOW) {
    Serial.println("5");
    delay(delay_ms);
  }
  else if (digitalRead(c3) == LOW) {
    Serial.println("6");
    delay(delay_ms);
  }
  else if (digitalRead(c4) == LOW) {
    Serial.println("B");
    delay(delay_ms);
  }
} 
void readRow3() {
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, LOW);
  digitalWrite(r4, HIGH);

  if (digitalRead(c1) == LOW) {
   Serial.println("7");
   delay(delay_ms); 
  }
  else if (digitalRead(c2) == LOW) {
    Serial.println("8");
    delay(delay_ms);
  }
  else if (digitalRead(c3) == LOW) {
    Serial.println("9");
    delay(delay_ms);
  }
  else if (digitalRead(c4) == LOW) {
    Serial.println("C");
    delay(delay_ms);
  }
}
void readRow4() {
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, LOW);

  if (digitalRead(c1) == LOW) {
   Serial.println("*");
   delay(delay_ms); 
  }
  else if (digitalRead(c2) == LOW) {
    Serial.println("0");
    delay(delay_ms);
  }
  else if (digitalRead(c3) == LOW) {
    Serial.println("#");
    delay(delay_ms);
  }
  else if (digitalRead(c4) == LOW) {
    Serial.println("D");
    delay(delay_ms);
  }
}
//        ___
//     \_/O¸O\_/
//       \ ^ /  
