int time = 100;
int LP = 11;      
int CP = 9;   
int DP = 12;   

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
}

void loop() 
{
  leds = 0;
  updateShiftRegister();
  delay(time);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(time);
  }
}
