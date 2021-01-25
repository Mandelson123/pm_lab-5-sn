#include <Arduino.h>
#include <LiquidCrystal.h>

#define buttonUp 11
#define buttonDown 13

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
int menu=1;
bool psButtonUp;
bool psButtonDown
  ;
void setup(void) {
  lcd.begin(16, 2);
  pinMode(buttonUp, INPUT_PULLUP);
  pinMode(buttonDown, INPUT_PULLUP);
}

void loop(void) {
 dispMenu();
 changeMenu();
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

void changeMenu(void){
  if(digitalRead(buttonUp) == HIGH && psButtonDown == LOW) {
    psButtonDown = HIGH;
    menu=menu+1;
    if(menu>3){
      menu=1;
    }
  }
  if(digitalRead(buttonDown) == HIGH && psButtonDown == LOW){
    psButtonDown = HIGH;
    menu=menu-1;
    if(menu<1){
      menu=3;
    }
  }
  psButtonUp = digitalRead(buttonUp);
  psButtonDown = digitalRead(buttonDown);
  
}