// Date and time functions using a DS1307 RTC connected via I2C and Wire lib
// Before using lib, copy RTClib.cpp and RTClib.h to path: "C:\Program Files (x86)\Arduino\libraries\RTC"
// make RTC folder if it does not existing

#include <Wire.h>
#include <LiquidCrystal.h>
#include "RTClib.h"

RTC_DS1307 rtc;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // (rs, e, d4, d5, d6, d7)

char daysOfTheWeek[7][12] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

void setup () 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  
  if (! rtc.begin()) 
  {
    lcd.print("Couldn't find RTC");
   // Serial.print("Couldn't find RTC");
    while (1);
  }

  if (! rtc.isrunning()) 
  {
    lcd.print("RTC is NOT running!");
    //Serial.print("RTC is NOT running!");
  }
  
    //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));//auto update from computer time
    rtc.adjust(DateTime(2019, 12, 18, 21, 49, 0));// to set the time manualy 
  
}

void loop () 
{
    DateTime now = rtc.now();
    
    lcd.setCursor(0, 1);
    lcd.print(now.hour());
    lcd.print(':');
    lcd.print(now.minute());
    lcd.print(':');
    lcd.print(now.second());
    lcd.print("   ");

    lcd.setCursor(0, 0);
    lcd.print(daysOfTheWeek[now.dayOfTheWeek()]);
    lcd.print(" ,");
    lcd.print(now.day());
    lcd.print('/');
    lcd.print(now.month());
    lcd.print('/');
    lcd.print(now.year());
   
}
