//Led Blink _ 8 Led sao băng - su dung 74595

int time = 1;
int LP = 11;      
int CP = 9;   
int DP = 12;   

byte leds = 0;
int i;

void PWM_ON1()
{
   //for(int z=0;z<8;z++)
   {
    int j=0;
    
    while(j<5)
    {
      //Bat LED
      //bitSet(leds,i);
      updateShiftRegister();
      //delay(1);
      //delay(100);
      
     //Tat LED
      //bitClear(leds,i);
      updateShiftRegister();
      //delay(i);
      j++;
    }
    //delay(3);
   }
}



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
}


void loop() 
{
  //leds = 0;
  
  updateShiftRegister();
  //delay(time);
  for (i = 0; i < 8; i++)
  {
    bitSet(leds,i);
    PWM_ON1();
  }
  delay(1);
  
  for (i = 0; i < 8; i++)
  {
    bitClear(leds,i);
    PWM_ON1();
  }

}
