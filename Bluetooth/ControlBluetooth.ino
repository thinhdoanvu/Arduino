#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1); //TX,RX

#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5

char val;
void setup() 
{
  pinMode(LED1,OUTPUT);  
  pinMode(LED2,OUTPUT);  
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  
  mySerial.begin(9600);
  Serial.begin(9600);
  
}
void Bluetooth()
{
if( mySerial.available() >0 ) 
{
    val = mySerial.read();
}
  if( val == '1' ) 
  {
    digitalWrite(LED1,HIGH); 
  }
  if( val == '2' ) 
  {
    digitalWrite(LED1,LOW);
  }

  if( val == '3' ) 
  {
    digitalWrite(LED2,HIGH); 
  }
  if( val == '4' ) 
  {
    digitalWrite(LED2,LOW);
  }

  if( val == '5' ) 
  {
    digitalWrite(LED3,HIGH); 
  }
  if( val == '6' ) 
  {
    digitalWrite(LED3,LOW);
  }

  if( val == '7' ) 
  {
    digitalWrite(LED4,HIGH); 
  }
  if( val == '8' ) 
  {
    digitalWrite(LED4,LOW);
  }
  
}

void loop() 
{
  Bluetooth();
}
