#define f_PWM_thuan 11 //chan so 11 lam chan ra cho xung bam
#define f_PWM_nghich 9 //chan so 9lam chan ra cho xung bam
#define STOP 2
#define ROTATE 3

//khai bao bien
int i;
int analogPin = A0; //Doc du lieu cho ADC
int Val = 0;
int val;
int Rot =0;
int Stop = 0;

//khai bao thu vien chan LCD
void setup() 
{
  Serial.begin(9600);
  pinMode(f_PWM_thuan,OUTPUT);
  pinMode(f_PWM_nghich,OUTPUT);
  pinMode(STOP, INPUT);
  pinMode(ROTATE, INPUT);
}

void PWM(int pin, int f)
{
  for(i=0; i<f; i++)
  {
    analogWrite(pin, f);
    delay(1);
  }
}

void PWM_nghich()
{
  //Quay nghich
  PWM(f_PWM_nghich,val);
  digitalWrite(f_PWM_thuan,0);
}

void PWM_thuan()
{
  //Quay thuan
  PWM(f_PWM_thuan,val);
  digitalWrite(f_PWM_nghich,0);
}

void STOP_Rotate()
{
  digitalWrite(f_PWM_nghich,1);
  digitalWrite(f_PWM_thuan,1);
}
void loop() 
{
  
  Val = analogRead(analogPin);  // read the input pin
  val = map(val, 0, 1023, 0, 255);
  Rot = digitalRead(ROTATE);
  Stop = digitalRead(STOP);
  if(Stop == HIGH) //START
  {
    if(Rot==HIGH) //Quay thuan
    {
      PWM_thuan();
    }
    else
    {
      PWM_nghich();
    }
  }
  else
  {
    //STOP
    STOP_Rotate();
  }
  //Serial.println(val);
  //delay(100);
}
