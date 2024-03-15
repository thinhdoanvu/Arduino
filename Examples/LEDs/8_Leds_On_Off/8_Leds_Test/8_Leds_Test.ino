//khai bao bien
int LED[8];
void setup() 
{
  DDRD=0xFF;
  int i;
  //gan cac chan tu LED[0] = pin 0 den LED[7] = pin 7
  for(i=0;i<8;i++)
  {
    LED[i]=i;
  }
  //gan cho moi chan la OUTPUT
  
  for(i=0;i<8;i++)
  {
    pinMode(LED[i],OUTPUT);
    //pinMode(pins,OUTPUT);
  } 
}

void allOFF(){
  int j;
  for(j=0;j<8;j++){
    digitalWrite(LED[j],0);
  }
}

void allON(){
  int j;
  for(j=0;j<8;j++){
    digitalWrite(LED[j],1);
  }
}

void eachLEDs(){
    int j;
    //sang tung LED
    for(j=0;j<8;j++){
      digitalWrite(LED[j],1);
      delay(100);
    }
    //tat tung LED
    for(j=7;j>0;j--){
      digitalWrite(LED[j],0);
      delay(100);
    }
}

void loop() 
{
  allOFF();
  delay(100);
  allON();
  delay(100);
  allOFF();
  delay(100);
  eachLEDs();
}
