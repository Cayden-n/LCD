#include <LiquidCrystal.h>

const int rs = 2,
          en = 3,
          d4 = 6,
          d5 = 7,
          d6 = 8,
          d7 = 9;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600); 
  lcd.begin(16, 2);
  lcd.print("Hello, world!");
}

void loop() {
  for (int pos = 0; pos < 13; pos++){
    lcd.scrollDisplayLeft();
    delay(250);
  }
  for (int pos = 0; pos < 13; pos++){
    lcd.scrollDisplayRight();
    delay(250);
  }
}
