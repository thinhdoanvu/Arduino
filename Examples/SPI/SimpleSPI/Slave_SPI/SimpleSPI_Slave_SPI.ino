//SPI SLAVE (ARDUINO)
//SPI COMMUNICATION BETWEEN TWO ARDUINO 

#include<SPI.h>
#define LED 7
#define BUT 2
volatile boolean received;
volatile byte Slave_received,Slave_send;
int But_Val;
int x;

void setup()
{
  pinMode(BUT,INPUT);//Nut nhan la dau vao
  pinMode(LED,OUTPUT);//LED la dau ra
  pinMode(MISO,OUTPUT);//MISO gui tin hieu den Master

  SPCR |= _BV(SPE);//Bat che do Slave
  received = false;

  SPI.attachInterrupt();//Bat ngat truyen thong SPI
}

ISR (SPI_STC_vect)//Trinh phuc vu ngat
{
  Slave_received = SPDR; //Gia tri nhan duoc, luu tru trong thanh ghi SPDR
  received = true;
}

void loop()
{ if(received)
   {
      //Nhan du lieu tu Master
      if (Slave_received==1)//Neu gia tri nhan duoc la 1
      {
        digitalWrite(LED,HIGH);//Bat LED
      }
      else
      {
        digitalWrite(LED,LOW);//Tat LED
      }

      //Truyen tin hieu cho Master
      But_Val = digitalRead(BUT);//Doc du liei=u tu nut nhan
      
      if (But_Val == HIGH)//Neu nut duoc nhan
      {
        x=1;
        
      }
      else
      {
        x=0;
      }
    Slave_send=x;                             
    SPDR = Slave_send;//Nap vao thanh ghi SPDR de truyen
    delay(100);
  }
}
