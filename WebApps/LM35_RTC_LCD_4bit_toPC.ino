#include <Wire.h>
#include "RTClib.h"
#include <LiquidCrystal.h>

//A4=SDA <-> SDA=RTC
//A5=SCL <-> SCL=RTC

//khai bao man hinh lcd
//pin RW == GND ***Always**
const int pin_RS =2;//pin4_LCD
const int pin_EN = 3;//pin6_LCD
const int pin_d4 = 4;//pin11_LCD
const int pin_d5 = 5;//pin12_LCD
const int pin_d6 = 6;//pin13_LCD
const int pin_d7 = 7;//pin14_LCD
LiquidCrystal lcd(pin_RS,pin_EN,pin_d4,pin_d5,pin_d6,pin_d7);

//Khai bao bien cho Thoi gian
String ngaythang="";
String giophut="";
char daysOfTheWeek[7][12] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

//khai bao bien cho LM35
int analogPin = A0; //Doc du lieu cho ADC
int val1,val2;  //gia tri dang so Digital
float temp,temp1,temp2; //gia tri nhiet do

// doi tuong dong ho
RTC_DS1307 rtc;

// ---------------------------------------------------------------
void setup() {

 // khoi tao lcd
 lcd.begin(16, 2);
 // khoi tao dong ho
 if (! rtc.begin()) {
   lcd.print("RTC is not found!");
   Serial.print("Couldn't find RTC");
  while (1);
 }
 
 if (! rtc.isrunning()) {
    lcd.clear();
    lcd.print("RTC chua dat thoi gian");
    Serial.print("RTC is NOT running!");
    
   //Chi lam 1 lan khi khoi tao;
   // Dat ngay gio dong ho theo hien tai cua may tinh
 } 
  //Sau khi nap xong thi xoa dong nay di va nap lai
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
   
   // ta cung co the dat theo y muon theo vd ben duoi
   // vi du thang 1 ngay 21, nam 2020 gio 3am
   // rtc.adjust(DateTime(2020, 1, 21, 3, 0, 0));
 Serial.begin (9600);
 lcd.clear();
 val1 = analogRead(analogPin);  // read the input pin 0 - 1023 ADC 10 bit 2^10: 1024 trang thai
 //xuat du lieu dang so: D0 - D7 T0 = 5V - 1023 Hoi: val =X t0=?
 float voltage1 = (float)val1 * 5.0 / 1024.0;
 temp1 = (voltage1 * 100.0); //10mv = 10C Hoi: voltage = X => ?t0 =? (1V =1000mv)
}
// ---------------------------------------------------------------
void showtime(DateTime now){
 delay(300);
 val2 = analogRead(analogPin);  // read the input pin 0 - 1023 ADC 10 bit 2^10: 1024 trang thai
    //xuat du lieu dang so: D0 - D7 T0 = 5V - 1023 Hoi: val =X t0=?
    float voltage2 = (float)val2 * 5.0 / 1024.0;
    temp2 = (voltage2 * 100.0); //10mv = 10C Hoi: voltage = X => ?t0 =? (1V =1000mv)
   
    if(abs(temp1 - temp2)<1.5){
      temp = temp1;
    }
    else{
      temp=(temp1+temp2)*0.5;
    } 

    //Xy ly nhiet do: doc 2 lan
    //lan 1 khi khoi tao: t1
    //lan 2: sau 300ms: t2
    //so sanh: |t1-t2|<1 -> gan t=t2
    //cuoi thap tac: t1=t
    //lap lai
    
  String thu="";
  String ngay="";
  String ndo = "";

    ndo = " "+ String(temp)+ char(223) + "C";
    thu=" "+String(daysOfTheWeek[now.dayOfTheWeek()]);
  
   if(now.day()<=9)
   {
     ngay="0"+String(now.day())+"-";
   }
   else {
    ngay=String(now.day())+"-";
   }
   String thang="";
   if(now.month()<=9)
   {
     thang="0"+String(now.month())+"-";
   }
   else {
    thang=String(now.month())+"-";
   }
   String nam="";
   if(now.year()<=9)
   {
     nam="0"+String(now.year());
   }
   else {
    nam=String(now.year());
   }

//Tinh toan GIO:PHUT:GIAY 
  String gio="";
 if(now.hour()<=9)
   {
    gio="0"+String(now.hour())+":";
   }
   else {
    gio=String(now.hour())+":";
   }
   
   String phut="";
   if(now.minute()<=9)
   {
     phut="0"+String(now.minute())+":";
   }
   else {
     phut=String(now.minute())+":";
   }
   
   String giay="";
   if(now.second()<=9)
   {
     giay="0"+String(now.second());
   }
   else {
    giay=String(now.second());
   }

  ngaythang=ngay+thang+nam+thu;
  giophut=gio+phut+giay;
  
    // hien thi ngay + thu
    lcd.setCursor(0, 0);    
    lcd.print(ngaythang);
    
    // hien thi gio + nhietdo
    lcd.setCursor(0, 1);
    lcd.print(giophut);
    lcd.print(ndo);
    delay(300);

    temp1 = temp;
//Test xem ngay gio khi khong co LCD       
//Serial.println(ngaythang);
//Serial.println(giophut);
//Serial.print(ndo);

//Send to PC khi co tin hieu @(chuan bi data va gui len cho PC)
  char r;
  r = Serial.read();
  //Truyen du lieu len PC
  if(r=='@'){
    String data_send = (ngaythang + " " + giophut + " " + ndo);
    Serial.println(data_send);
    delay(250);
  }

}

// ---------------------------------------------------------------
void loop() {
 DateTime now = rtc.now();
 showtime(now);
}
