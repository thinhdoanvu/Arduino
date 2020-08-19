//SPI MASTER (ARDUINO)
//SPI COMMUNICATION BETWEEN TWO ARDUINO 
#include<SPI.h> //Library cua SPI 
#define LED 7           
#define BUT 2

int But_Val;
int x;

void setup()
{ 
  pinMode(BUT,INPUT); //Sets pin 2 as input 
  pinMode(LED,OUTPUT);//Sets pin 7 as Output
  
  SPI.begin();//Khoi dong SPI
  SPI.setClockDivider(SPI_CLOCK_DIV8);//Tan so giao tiep SPI = 8 (16/8=2Mhz)
  digitalWrite(SS,HIGH);//Cam tat ca cac Slave
}

void loop()
{
  byte Master_send,Master_receive;          

  But_Val = digitalRead(BUT);//Kiem tra nut nhan
  if(But_Val == HIGH)//Neu nut nhan duoc nhan xuong = HIGH
  {
    x = 1;
  }
  else
  {
    x = 0;
  }
  
  digitalWrite(SS, LOW);//Bat dau gui tin hieu
  Master_send = x;                            
  Master_receive=SPI.transfer(Master_send);//Truyen va nhan du lieu dong thoi
  if(Master_receive == 1)//Neu tin hieu nhan duoc la 1
  {
    digitalWrite(LED,HIGH);//Bat LED sang
  }
  else
  {
   digitalWrite(LED,LOW);//Tat LED
  }
  delay(100);
}
