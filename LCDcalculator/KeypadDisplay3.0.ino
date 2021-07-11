#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys [ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = { 22, 24, 26, 28 };
byte colPins[COLS] = { 30, 32, 34, 36 };

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin(9600);
}

int cursorX = 0;
int number1 = 0;
int number2 = 0;
char lastKey = NULL;
int answer = 0;


void loop() {
  char key = kpd.getKey();
    
  if(key == NULL) {
    return;
  }
 
  Serial.print("Key pressed: ");
  Serial.print(key);
  Serial.println();
  
  if(key == '*') {
    cursorX = 0;
    lcd.clear();
    lastKey = NULL;
    return;
  }

  if(key == 'A'){
    lastKey = key;
    lcd.setCursor(cursorX,0);
    cursorX = cursorX + 1;
    lcd.print('+');
    return;
  }
  if(key == '#') {
    lcd.print('=');
    cursorX = cursorX + 1;
    answer = number1 + number2;
    lcd.print(answer);
    return;
  }

  if(lastKey == 'A'){
    String str = String(key);
    number2 = str.toInt();
    Serial.print("number2: ");
    Serial.print(number2);
    Serial.println();
  } 
  else {
    String str = String(key);
    number1 = str.toInt();
    Serial.print("number1: ");
    Serial.print(number1);
    Serial.println();
  }
  cursorX = cursorX + 1;
  lcd.print(key);
}
