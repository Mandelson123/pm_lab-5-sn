#include <Arduino.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
int menu=1;

void setup(void) {
  lcd.begin(16, 2);
}

void loop(void) {
  dispMenu();
  delay(1000);
  menu++;
  if(menu>3) menu=1; 
}

  void dispMenu(void){
    switch(menu){
      case 1:
        lcd.setCursor(0,0);
        lcd.print("Menu 1");
        break;
      case 2:
        lcd.setCursor(0,0);
        lcd.print("Menu 2");
        break;
      case 3:
        lcd.setCursor(0,0);
        lcd.print("Menu 3");
        break;
  }
}