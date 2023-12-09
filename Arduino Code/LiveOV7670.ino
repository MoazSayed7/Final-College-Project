#include "setup.h"
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int timer1;
int timer2;

float Time;

int flag1 = 0;
int flag2 = 0;

float distance = 20;  cm
float speed;

const int ir_s1 = 8;
const int ir_s2 = 9;

 const int buzzer = 9;

void setup() {
  pinMode(ir_s1, INPUT);
  pinMode(ir_s2, INPUT);
  pinMode(buzzer, OUTPUT);
  initializeScreenAndCamera();
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.print(" WELCOME To OUR ");
  lcd.setCursor(0, 1);
  lcd.print("Project");
  delay(4000);
  lcd.clear();
}

void loop() {
  if (digitalRead(ir_s1) == LOW && flag1 == 0) {
    timer1 = millis();
    flag1 = 1;
  }

  if (digitalRead(ir_s2) == LOW && flag2 == 0) {
    timer2 = millis();
    flag2 = 1;
  }

  if (flag1 == 1 && flag2 == 1) {
    if (timer1 > timer2) {
      Time = timer1 - timer2;
    } else if (timer2 > timer1) {
      Time = timer2 - timer1;
    }
    Time = Time / 1000;  millisecond to second
    speed = distance / Time;
  }

  if (speed == 0) {
    lcd.setCursor(0, 1);
    if (flag1 == 0 && flag2 == 0) {
      lcd.print("No car  detected");
    } else {
      lcd.print("Searching...    ");
    }
  } else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Speed:");
    lcd.print(speed, 1);
    lcd.print("Cm/s  ");
    lcd.setCursor(0, 1);

    if (speed > 15) {
      lcd.print("  Over Speeding  ");
      processFrame();
      tone(buzzer, 2000);
      delay(3000);
      noTone(buzzer);
    } else {
      lcd.print("  Normal Speed   ");
    }
    delay(4000);
    speed = 0;
    flag1 = 0;
    flag2 = 0;
  }
}
