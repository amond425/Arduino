#include <Keypad.h>
#include <Servo.h>

Servo servo;

int pos = 0;
int done = 0;

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad lockKeyPad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  servo.attach(35);
}

char storedPasscode[3] = {'2', '4', '6'};
char enteredPasscode[3] = {' ', ' ', ' '};
int enteredDigitPos = 0;

void loop() {
  char key = lockKeyPad.getKey();
  if(key == NULL){
    return;
  }

  if (enteredDigitPos == 3){
    for(int x = 0; x < 3; x++){
      if(enteredPasscode[x] != storedPasscode[x]){
        Serial.println("Passcode incorrect. Try again.");
        break;
      }
      else{
        Serial.println("Passcode correct!");
        servo.write(135);
        delay(10000);
        servo.write(48);
        break;
      }
    }
    enteredDigitPos = 0;
      for(int i = 0; i < 3; i++) {
      enteredPasscode[i] = ' ';
    }
    return;
  }
  
  Serial.print("Entered key: ");
  Serial.println(key);

  enteredPasscode[enteredDigitPos] = key;
  enteredDigitPos = enteredDigitPos + 1;

  Serial.println("Content of array enteredPasscode: ");
  for(int i = 0; i < 3; i++) {
    Serial.print(enteredPasscode[i]);
  }
  Serial.println();
}
