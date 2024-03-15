//LED 7 doan co ma nhu sau:
//   A
// F   B
//   G
// E   C
//   D

//khai bao bien
int data[4];//cac so 4 bit tu 1 den 9
int D0 = 8; //pin0
int D1 = 9; //pin1
int D2 = 10; //pin2
int D3 = 11; //pin3
int z;
int dem;
int donvi;
int chuc;
int tram;
int nghin;
int chucnghin;
int tramnghin;
int second;

void setup() {
  // cai dat cau hinh cac chan dieu khien
  DDRC=0xFF; //Cac cong cua PortD la cong ra
  DDRB=0xFF; //Cac cong cua PortB la cong ra
}

void hienthi()
{
  z=0;
  while(z<3)
  {
    PORTB=donvi;
    PORTC=1;
    delay(10);
    PORTB=chuc;
    PORTC=2;
    delay(10);
    PORTB=tram;
    PORTC=4;
    delay(10);
    PORTB=nghin;
    PORTC=8;
    delay(10);
    PORTB=chucnghin;
    PORTC=16;
    delay(10);
    PORTB=tramnghin;
    PORTC=32;
    delay(10);
    z++;
  }
}


void Clock()
{
  while(tramnghin<=2)
  {
    chucnghin=0;
    while(chucnghin<=3)
    {
      nghin=0;
      while(nghin<=5)
      {
        tram=0;
        while(tram<=9)
        {
          chuc=0;
          while(chuc<=5)
          {
            donvi=0;
            while(donvi<=9)
            {
              hienthi();
              donvi++;
            }
            chuc++;
          }
          tram++;
        }
        nghin++;
      }
    }
    tramnghin++;
  }

}

void loop() 
{
  donvi=0;
  chuc=0;
  tram=0;
  nghin=0;
  chucnghin=0;
  tramnghin=0;
  Clock();  
}
