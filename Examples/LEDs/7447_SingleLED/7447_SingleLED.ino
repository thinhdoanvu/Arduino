//LED 7 doan co ma nhu sau:
//   A
// F   B
//   G
// E   C
//   D

//khai bao bien

void setup() {
  // cai dat cau hinh cac chan dieu khien
  DDRD=0xFF; //Cac cong cua PortD la cong ra
}

void Display()
{
  int i;
  for(i=0;i<10;i++)
  {
    PORTD=i;
    delay(500);
  }
}

void loop() 
{
  Display();  
}
