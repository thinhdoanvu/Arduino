#include <Wire.h>
#include "RTClib.h"
#include <LiquidCrystal.h>
//khai bao man hinh lcd
const int pin_RS = 13;
const int pin_EN = 12;
const int pin_d4 = 11;
const int pin_d5 = 10;
const int pin_d6 = 9;
const int pin_d7 = 8;
//khai bao cac nut bam
const int Adjust = 6;
const int Mode = 5;
const int Tien = 4;
const int Lui = 3;
// 7 ngay trong tuan
char daysOfTheWeek[7][12] = {"Sun", "Mon", "Tue", "Wed", 
"Thu", "Fri", "Sat"};
// bien luu tru bao thuc alarm
int modealarm=0,gio=0,phut=0;
// cac not nhac
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988
//loa Pin
const int buzzer = 7;
//cac bien cho am nhac
int songspeed = 1.5;
int duration[] = {         //duration of each note (in ms) Quarter Note is set to 250 ms
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125,

  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125,

  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125,
  250, 125, 250, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 375,

  250, 125,
  //Rpeat of First Part
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125,

  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125,

  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125,
  250, 125, 250, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 375,
  //End of Repeat

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500,

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500
};

int notes[] = {       //Note of the song, 0 is a rest/pulse
  NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
  NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
  NOTE_A4, NOTE_G4, NOTE_A4, 0,

  NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
  NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
  NOTE_A4, NOTE_G4, NOTE_A4, 0,

  NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
  NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0,
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
  NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,

  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
  NOTE_D5, NOTE_E5, NOTE_A4, 0,
  NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
  NOTE_C5, NOTE_A4, NOTE_B4, 0,

  NOTE_A4, NOTE_A4,
  //Repeat of first part
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
  NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
  NOTE_A4, NOTE_G4, NOTE_A4, 0,

  NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
  NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
  NOTE_A4, NOTE_G4, NOTE_A4, 0,

  NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
  NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0,
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
  NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,

  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
  NOTE_D5, NOTE_E5, NOTE_A4, 0,
  NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
  NOTE_C5, NOTE_A4, NOTE_B4, 0,
  //End of Repeat

  NOTE_E5, 0, 0, NOTE_F5, 0, 0,
  NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
  NOTE_D5, 0, 0, NOTE_C5, 0, 0,
  NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4,

  NOTE_E5, 0, 0, NOTE_F5, 0, 0,
  NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
  NOTE_D5, 0, 0, NOTE_C5, 0, 0,
  NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4
};
// khai báo lcd
LiquidCrystal lcd(pin_RS,pin_EN,pin_d4,pin_d5,pin_d6,pin_d7);
// doi tuong dong ho
RTC_DS1307 rtc;

// ---------------------------------------------------------------
void setup() {
 //khoi tao cac nut bam
 pinMode(Adjust,INPUT);
 pinMode(Mode,INPUT);
 pinMode(Tien,INPUT);
 pinMode(Lui,INPUT);
 // khoi tao lcd
 lcd.begin(20, 4);
 // khoi tao dong ho
  if (! rtc.begin()) {
   lcd.print("Khong tim thay RTC");
   while (1);
 }
 if (! rtc.isrunning()) {
    lcd.clear();
    lcd.print("RTC chua dat thoi gian");
   // Dat ngay gio dong ho theo hien tai cua may tinh
   rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
   // ta cung co the dat theo y muon theo vd ben duoi
   // This line sets the RTC with an explicit date & time, for example to set
   // January 21, 2014 at 3am you would call:
   // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
 } 
}
// ---------------------------------------------------------------
void showtime(DateTime now){
  // hien thi ngay 
lcd.setCursor(0, 0);
   if(now.day()<=9)
   {
     lcd.print("0");
     lcd.print(now.day());
   }
   else {
    lcd.print(now.day());
   }
   lcd.print('/');
   if(now.month()<=9)
   {
     lcd.print("0");
     lcd.print(now.month());
   }
   else {
    lcd.print(now.month());
   }
   lcd.print('/');
   if(now.year()<=9)
   {
     lcd.print("0");
     lcd.print(now.year());
   }
   else {
    lcd.print(now.year());
   }
   lcd.print("(");
   lcd.print(daysOfTheWeek[now.dayOfTheWeek()]);
   lcd.print(") ");
 // hien thi gio
 lcd.setCursor(0, 1);
 if(now.hour()<=9)
   {
    lcd.print("0");
    lcd.print(now.hour());
   }
   else {
    lcd.print(now.hour());
   }
   lcd.print(':');
   if(now.minute()<=9)
   {
     lcd.print("0");
     lcd.print(now.minute());
   }
   else {
    lcd.print(now.minute());
   }
   lcd.print(':');
   if(now.second()<=9)
   {
     lcd.print("0");
     lcd.print(now.second());
   }
   else {
    lcd.print(now.second());
   }
}
// ---------------------------------------------------------------
// ham hien thi ngay gio phu vi khong the tinh toan tren DateTime duoc
void ngaygio(int ngay,int thang,int nam,int gio,int phut,int giay){
  // hien thi ngay 
lcd.setCursor(0, 0);
   if(ngay<=9)
   {
     lcd.print("0");
     lcd.print(ngay);
   }
   else {
    lcd.print(ngay);
   }
   lcd.print('/');
   if(thang<=9)
   {
     lcd.print("0");
     lcd.print(thang);
   }
   else {
    lcd.print(thang);
   }
   lcd.print('/');
   if(nam<=9)
   {
     lcd.print("0");
     lcd.print(nam);
   }
   else {
    lcd.print(nam);
   }
 // hien thi gio
 lcd.setCursor(0, 1);
 if(gio<=9)
   {
    lcd.print("0");
    lcd.print(gio);
   }
   else {
    lcd.print(gio);
   }
   lcd.print(':');
   if(phut<=9)
   {
     lcd.print("0");
     lcd.print(phut);
   }
   else {
    lcd.print(phut);
   } 
   lcd.print(':');
   if(giay<=9)
   {
     lcd.print("0");
     lcd.print(giay);
   }
   else {
    lcd.print(giay);
   }
}
// ham tra ve so ngay trong thang
int dayinmonth(int thang,int nam)
{
  if(thang==1 || thang==3 ||thang==5 ||thang==7 ||thang==8   ||
  thang==10 || thang==12)
      return 31;
  else if(thang != 2)
  return 30;
  else if(nam%4==0)
  return 29;
  else return 28;
}
// ham chinh sua ngay gio
void modifytime(DateTime now){
  
  showtime(now);
  int ngay,thang,nam,gio,phut,giay,sure=1;
  ngay=now.day();
  thang=now.month();
  nam=now.year();
  gio=now.hour();
  phut=now.minute();
  giay=now.second();  
  // hien thi con tro 
  lcd.cursor();
  lcd.setCursor(7,1); 
   //dat giay
   while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350);
          giay=giay+1;
          if(giay>60) giay=0; 
          ngaygio(ngay,thang,nam,gio,phut,giay);
          lcd.setCursor(7,1);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       giay=giay-1;
       if(giay<0) giay=60; 
       ngaygio(ngay,thang,nam,gio,phut,giay);
       lcd.setCursor(7,1);}
     }
   //dat phut
   lcd.setCursor(4,1);
   delay(350);
   while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          phut=phut+1;
          if(phut>60) phut=0; 
          ngaygio(ngay,thang,nam,gio,phut,giay);
          lcd.setCursor(4,1);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       phut=phut-1;
       if(phut<0) phut=60; 
       ngaygio(ngay,thang,nam,gio,phut,giay);
       lcd.setCursor(4,1);}
     }
     //dat gio
     lcd.setCursor(1,1);
     delay(350);
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          gio=gio+1;
          if(gio>=24) gio=0; 
          ngaygio(ngay,thang,nam,gio,phut,giay);
          lcd.setCursor(1,1);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       gio=gio-1;
       if(gio<=0) gio=24; 
       ngaygio(ngay,thang,nam,gio,phut,giay);
       lcd.setCursor(1,1);}
     }
    //dat nam
    lcd.setCursor(9,0);
    delay(350);
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          nam=nam+1;          
          ngaygio(ngay,thang,nam,gio,phut,giay);
          lcd.setCursor(9,0);
       }
       else if(digitalRead(Lui)==HIGH)
       {
       delay(350); 
       nam=nam-1;        
       ngaygio(ngay,thang,nam,gio,phut,giay);
       lcd.setCursor(9,0);}
     }
    // dat thang
    lcd.setCursor(4,0);
     delay(350);
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          thang=thang+1;
          if(thang>12) thang=1; 
          ngaygio(ngay,thang,nam,gio,phut,giay);
          lcd.setCursor(4,0);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       thang=thang-1;
       if(thang<1) thang=12; 
       ngaygio(ngay,thang,nam,gio,phut,giay);
       lcd.setCursor(4,0);}
     }
     //dat ngay
     lcd.setCursor(1,0);
     delay(350);
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          ngay=ngay+1;
          if(ngay>dayinmonth(thang,nam)) ngay=1; 
          ngaygio(ngay,thang,nam,gio,phut,giay);
          lcd.setCursor(1,0);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       ngay=ngay-1;
       if(ngay<dayinmonth(thang,nam)) ngay=dayinmonth(thang,nam); 
       ngaygio(ngay,thang,nam,gio,phut,giay);
       lcd.setCursor(1,0);}
     }
    lcd.noCursor();
    delay(350);
    // xac nhan yes/no dat lai dong ho
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Sure: YES/NO ??");
     if(sure==0) 
     {
      lcd.setCursor(0,1);      
      lcd.print("Sure: NO ");
     }else {lcd.setCursor(0,1); lcd.print("Sure: YES");}
     
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          if(sure==0) 
          {     
            sure=1;
            lcd.setCursor(0,1);      
            lcd.print("Sure: YES");
          }else if(sure==1) {
            sure=0;
            lcd.setCursor(0,1);      
            lcd.print("Sure: NO ");
          }         
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
          if(sure==0) 
          {     
            sure=1;
            lcd.setCursor(0,1);      
            lcd.print("Sure: YES");
          }else if(sure==1) {
            sure=0;
            lcd.setCursor(0,1);      
            lcd.print("Sure: NO ");
          }
       }
     }
    //set lai dong ho thuc 
   if(sure==1)
   rtc.adjust(DateTime(nam,thang,ngay,gio,phut,giay));  
}
// ---------------------------------------------------------------
  
//am nhac
void music(){
for (int i = 0; i < 203; i++) {       //203 is the total number of music notes in the song
      int wait = duration[i] * songspeed;
      tone(buzzer, notes[i], wait);        //tone(pin,frequency,duration)
      delay(wait);
    }  
}
// ham chi hien thi gio cho bao thuc
void timehour(int gio,int phut){
   lcd.setCursor(0, 1);
 if(gio<=9)
   {
    lcd.print("0");
    lcd.print(gio);
   }
   else {
    lcd.print(gio);
   }
   lcd.print(':');
   if(phut<=9)
   {
     lcd.print("0");
     lcd.print(phut);
   }
   else {
    lcd.print(phut);
   } 
}
//bao thuc
void alarm(DateTime now){
  lcd.clear();
  //
  // bat hay tat bao thuc ??
     lcd.setCursor(0,0);
     lcd.print("Alarm: ON/OFF ??");
     if(modealarm==0) 
     {
      lcd.setCursor(0,1);      
      lcd.print("Mode: OFF");
     }else {lcd.setCursor(0,1); lcd.print("Mode: ON");}
     
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          if(modealarm==0) 
          {     
            modealarm=1;
            lcd.setCursor(0,1);      
            lcd.print("Mode: ON ");
          }else if(modealarm==1) {
            modealarm=0;
            lcd.setCursor(0,1);      
            lcd.print("Mode: OFF");
          }
          
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
          if(modealarm==0) 
          {     
            modealarm=1;
            lcd.setCursor(0,1);      
            lcd.print("Mode: ON ");
          }else if(modealarm==1) {
            modealarm=0;
            lcd.setCursor(0,1);      
            lcd.print("Mode: OFF");
          }
       }
     }
if(modealarm==1){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Set time alarm:");     
  //hien thi gio bao thuc
  timehour(gio,phut);

   //hien thi con tro
   lcd.cursor();
   lcd.setCursor(4,1);
   //dat thoi gian bao thuc
   //dat phut
   delay(350);
   while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          phut=phut+1;
          if(phut>60) phut=0; 
          timehour(gio,phut);
          lcd.setCursor(4,1);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       phut=phut-1;
       if(phut<0) phut=60; 
       timehour(gio,phut);
       lcd.setCursor(4,1);}
     }
     //dat gio
     lcd.setCursor(1,1);
     delay(350);
     while(digitalRead(Adjust)==LOW){
      if(digitalRead(Tien)==HIGH)
       {
          delay(350); 
          gio=gio+1;
          if(gio>=24) gio=0; 
          timehour(gio,phut);
          lcd.setCursor(1,1);
       }
       else if(digitalRead(Lui)==HIGH)
       {
        delay(350); 
       gio=gio-1;
       if(gio<=0) gio=24; 
       timehour(gio,phut);
       lcd.setCursor(1,1);}
     }
 }
 lcd.noCursor();
}
//kiem tra bao thuc hay chua
void checkalarm(DateTime now){
  if(gio==now.hour()&& phut==now.minute()&& modealarm==1)
  {
    lcd.clear();
  lcd.print("*******Alarm********");
   lcd.setCursor(0, 1);
 if(gio<=9)
   {
    lcd.print("0");
    lcd.print(gio);
   }
   else {
    lcd.print(gio);
   }
   lcd.print(':');
   if(phut<=9)
   {
     lcd.print("0");
     lcd.print(phut);
   }
   else {
    lcd.print(phut);
   }
   music();
   lcd.clear(); 
  }
}
// ---------------------------------------------------------------
 //menu
void menu(DateTime now){
 int dong=1;
 lcd.clear();
 // hien thi menu
 lcd.setCursor(0,0);
 lcd.print("********Menu********");
 lcd.setCursor(1,1);
 lcd.print("1. Dat ngay gio");
 lcd.setCursor(1,2);
 lcd.print("2. Bao thuc");
 lcd.setCursor(1,3);
 lcd.print("3. Thoat");
// lua chon
while(digitalRead(Adjust)==LOW)
{
 if(digitalRead(Tien)==HIGH)
 {
  if(dong==3) dong=2; 
  else if(dong==2) dong=1;
  else if(dong==1) dong=3;  
 } else if(digitalRead(Lui)==HIGH)
 {
  if(dong==3) dong=1; 
  else if(dong==2) dong=3;
  else if(dong==1) dong=2;   
 }
 lcd.setCursor(0,dong);
 lcd.blink();
 delay(350);
}
 delay(350);
 lcd.noBlink();
 if(dong==1){lcd.clear(); modifytime(now);}
 if(dong==2){lcd.clear(); alarm(now);}
 lcd.clear();
}
 
// ---------------------------------------------------------------
void loop() {
 DateTime now = rtc.now();
 checkalarm(now);
 showtime(now);
 if(digitalRead(Mode)==HIGH)
 menu(now);
}
