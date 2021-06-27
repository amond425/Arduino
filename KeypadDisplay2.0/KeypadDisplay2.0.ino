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

void loop() {
  char key = kpd.getKey();
  if(key != NULL) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(key);
    delay(50);
  }
}
