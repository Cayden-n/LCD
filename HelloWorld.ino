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
}
String Hello="Hello World!";

void loop() {

lcd.blink();
lcd.setCursor(0, 0);

for(int i=0;i<Hello.length() ;i++){
  lcd.print(Hello.charAt(i));
  delay(400);
}
lcd.noBlink();
delay(3000);
lcd.clear();
}
