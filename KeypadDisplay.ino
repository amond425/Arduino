#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys [ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = { 9, 8, 7, 6 };
byte colPins[COLS] = { 5, 4, 3, 2 };

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define A A0
#define B A1
#define C A2
#define D A3
#define E A4
#define F A5
#define G A6

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
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

void displayChar(char charToDisplay) {
  
  turnOffAll();
  
  if(charToDisplay == '0') {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
  }
  if(charToDisplay == '1') {
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
  }
  if(charToDisplay == '2') {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
  }
  if(charToDisplay == '3') {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if(charToDisplay == '4') {
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
  }
  if(charToDisplay == '5') {
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if(charToDisplay == '6') {
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if(charToDisplay == '7') {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
  }
  if(charToDisplay == '8') {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
  if(charToDisplay == '9') {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(C, HIGH);
  }
  if(charToDisplay == 'A') {
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(E, HIGH);
  }
  if(charToDisplay == 'B') {
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
  }
  if(charToDisplay == 'C') {
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
  }
  
  if(charToDisplay == 'D') {
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
  }
  if(charToDisplay == '*') {
    digitalWrite(G, HIGH);
  }
  if(charToDisplay == '#') {
    digitalWrite(F, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(C, HIGH);
  }
}

void loop() {
  char key = kpd.getKey();
  if(key != NULL) {
    displayChar(key);
  }
}

void testDisplay() {
  displayChar('0');
  delay(1000);
  displayChar('1');
  delay(1000);
  displayChar('2');
  delay(1000);
  displayChar('3');
  delay(1000);
  displayChar('4');
  delay(1000);
  displayChar('5');
  delay(1000);
  displayChar('6');
  delay(1000);
  displayChar('7');
  delay(1000);
  displayChar('8');
  delay(1000);
  displayChar('9');
  delay(1000);
}
