// Date and time functions using a DS1307 RTC connected via I2C and Wire lib
//Arduino <-> RTC/LCD
//A5 <--> pin_SCL DS1307
//A4 <--> pin_SDA DS1307
//2 <--> pin_RS LCD
//3 <-->pin_E LCD
//RW LCD = GND for Write Data 
//4 = pin_4 LCD
//5 = pin_5 LCD
//6 = pin_6 LCD
//7 = pin_7 LCD


#include <Wire.h>
#include <LiquidCrystal.h>
#include "RTClib.h"

RTC_DS1307 rtc;
LiquidCrystal lcd(11, 12,13, 4, 5, 6, 7); // (rs, rw, e, d4, d5, d6, d7)

char daysOfTheWeek[7][12] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

void setup () 
{
  Serial.begin(9600);//Giao tiếp Arduino với USB 240 480 960 ... 11520 ..
  lcd.begin(16, 2);
  
  if (! rtc.begin()) 
  {
    lcd.print("Couldn't find RTC");
    Serial.print("Couldn't find RTC");
    while (1);
  }

  if (! rtc.isrunning()) 
  {
    lcd.print("RTC is NOT running!");
    Serial.print("RTC is NOT running!");
  }
    //Chi lam 1 lan khi khoi tao;
    // Dat ngay gio dong ho theo hien tai cua may tinh
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));//auto update from computer time
    // ta cung co the dat theo y muon theo vd ben duoi
    // vi du thang 1 ngay 21, nam 2020 gio 3am
    //rtc.adjust(DateTime(2021, 12, 4, 9, 5, 4));// to set the time manualy 
}

void loop () 
{
    DateTime now = rtc.now();
    //hang 1, cot 4
    lcd.setCursor(4, 1); //    15:00:00    
    lcd.print(now.hour());//15
    lcd.print(':');
    lcd.print(now.minute());//00
    lcd.print(':');
    lcd.print(now.second());//00
    lcd.print("   ");

    lcd.setCursor(0, 0);
    lcd.print(daysOfTheWeek[now.dayOfTheWeek()]);
    lcd.print(", ");
    lcd.print(now.day());
    lcd.print('/');
    lcd.print(now.month());
    lcd.print('/');
    lcd.print(now.year());

    //Xuất ra Serial
  Serial.print(now.day());
  Serial.print("-");
  Serial.print(now.month());
  Serial.print("-");
  Serial.print(now.year());
  Serial.print(" ");
  Serial.print(now.hour());
  Serial.print(":");
  Serial.print(now.minute());
  Serial.print(":");
  Serial.println(now.second());

  delay(1000);
}
