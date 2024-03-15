int time = 100;//100 default

int LP = 11;      
int CP = 9;   
int DP = 12;   
int E0=0;
int E1=1;

byte leds = 0;

void updateShiftRegister()
{
   digitalWrite(LP, LOW);
   shiftOut(DP, CP, LSBFIRST, leds);
   digitalWrite(LP, HIGH);
}

void setup() 
{
  pinMode(LP, OUTPUT);
  pinMode(DP, OUTPUT);  
  pinMode(CP, OUTPUT);
  pinMode(E0,OUTPUT);
  pinMode(E1,OUTPUT);
}

void Chuongtrinh_1()
{
    leds = 0;
    digitalWrite(E0,0);
    digitalWrite(E1,0);
    
  //updateShiftRegister();
  //delay(time);
  
  //Bat lan luot cac LED
  for (int i = 0; i < 8; i++)
  {
    for (int j=0;j<10;j++)
    {
      bitClear(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(j);
      updateShiftRegister();
      bitSet(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(10-j);
      updateShiftRegister();
    }
  }

 //Bat lan luot cac LED
  for (int i = 0; i < 8; i++)
  {
    for (int j=0;j<10;j++)
    {
      bitSet(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(j);
      updateShiftRegister();
      bitClear(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(10-j);
      updateShiftRegister();
    }
  }
  //delay(time);

}


void Chuongtrinh_2()
{
  leds = 0;
  digitalWrite(E0,0);
  digitalWrite(E1,1);      
  //updateShiftRegister();
  //delay(time);
  
  //Bat lan luot cac LED
  for (int i = 0; i < 8; i++)
  {
    for (int j=0;j<10;j++)
    {
      bitClear(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(j);
      updateShiftRegister();
      bitSet(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(10-j);
      updateShiftRegister();
    }
  }
  //Bat lan luot cac LED
  for (int i = 0; i < 8; i++)
  {
    for (int j=0;j<10;j++)
    {
      bitSet(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(j);
      updateShiftRegister();
      bitClear(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(10-j);
      updateShiftRegister();
    }
  }
  
  digitalWrite(E0,1);
  digitalWrite(E1,0);
 //Bat lan luot cac LED
  for (int i = 0; i < 8; i++)
  {
    for (int j=0;j<10;j++)
    {
      bitClear(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(j);
      updateShiftRegister();
      bitSet(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(10-j);
      updateShiftRegister();
    }
  }
  //Bat lan luot cac LED
  for (int i = 0; i < 8; i++)
  {
    for (int j=0;j<10;j++)
    {
      bitSet(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(j);
      updateShiftRegister();
      bitClear(leds, i);//chan du lieu nao duoc SET -vong lap 1-8 la 8 chan duoc set
      delay(10-j);
      updateShiftRegister();
    }
  }
  //delay(time);

}

void loop() 
{
  Chuongtrinh_2();
  Chuongtrinh_1();
}
