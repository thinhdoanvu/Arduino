//khai bao bien
int i;
int du[8];
int dem;

int D0 = 0; 
int D1 = 1; 
int D2 = 2; 
int D3 = 3;
int D4 = 4;
int D5 = 5;
int D6 = 6;
int D7 = 7;

//chuong trinh con doi tu he 10 sang he 2
void dec2bin(int a)
{
   dem=0;
   while(a>0)
   {
     du[dem]=a%2;
     a=a/2;
     dem++;
   }
}

void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}

void display() {
  
  // turn the green LED on and the other LEDs off
  digitalWrite(D7, du[0]); 
  digitalWrite(D6, du[1]);
  digitalWrite(D5, du[2]);
  digitalWrite(D4, du[3]); 
  digitalWrite(D3, du[4]);
  digitalWrite(D2, du[5]);
  digitalWrite(D1, du[6]); 
  digitalWrite(D0, du[7]);
  delay(300);    // wait 2 seconds
    
}

//chuong trinh chinh
void loop()
{
  for(i=0;i<8;i++)
  {
    du[i]=0;
  }
  
  //su dung vong lap
  for(i=0;i<256;i++)
  {
    dec2bin(i);
    display(); 
  }
}
