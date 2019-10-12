//Led Blink _ 8 Led sao băng - su dung 74595

int time = 1;
int LP = 11;      
int CP = 9;   
int DP = 12;   

byte leds = 0;
int i;

void PWM_ON1()
{
  //Bat LED
  updateShiftRegister();
  //Tat LED
  delay(1);//tre bao nhieu giua cac bit???? defaul = 1 , phoi hop voi delay ben duoi cho hieu ung khac nhau
  updateShiftRegister();
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
  updateShiftRegister();
  for (i = 0; i < 8; i++)
  {
    bitSet(leds,i);
    PWM_ON1();
  }
  //delay(1);  //giua 2 lan 8 bit //delay cang lon thi so cang nhanh do tan so quet de chuyen bit cang nhanh
            //mac dinh la ko co dong nay
  for (i = 0; i < 8; i++)
  {
    bitClear(leds,i);
    PWM_ON1();
  }

}
