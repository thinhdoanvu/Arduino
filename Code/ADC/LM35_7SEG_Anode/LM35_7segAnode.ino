//khai bao bien
int analogPin = A0; //Doc du lieu cho ADC
int FAN = 10;
int val = 0;  //gia tri dang so Digital
float temp; //gia tri nhiet do
int i;
int chuc;
int donvi;

void setup() {
  for(i=0;i<=7;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(analogPin,INPUT);
  pinMode(FAN,OUTPUT);
}

void Hienthi_7SEG(int number)
{
  switch (number)
  {
    case 0:{
      digitalWrite(0, LOW);//a
      digitalWrite(1, LOW);//b
      digitalWrite(2, LOW);//c
      digitalWrite(3, LOW);//d
      digitalWrite(4, LOW);//e
      digitalWrite(5, LOW);//f
      digitalWrite(6, HIGH);//g
      break;
    }
    case 1:{
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;
    }
    case 2:{
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      break;
    }
    case 3:{
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      break;
    }
    case 4:{
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    }
    case 5:{
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    }
    case 6:{
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    }
    case 7:{
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;
    }
    case 8:{
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    }
    case 9:{
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
    }
  }
} 

void tachso(int X){
  chuc=X/10;
  donvi=X%10;
}

void loop() 
{
    val = analogRead(analogPin);  // read the input pin 0 - 1023 ADC 10 bit 2^10: 1024 trang thai
    //xuat du lieu dang so: D0 - D7 T0 = 5V - 1023 Hoi: val =X t0=?
    float voltage = (float)val * 5.0 / 1024.0;
    temp = voltage * 100; //10mv = 10C Hoi: voltage = X => ?t0 =? (1V =1000mv)   
    //hien thi val
    tachso(temp);
    Hienthi_7SEG(chuc);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(100);
    Hienthi_7SEG(donvi);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(100);
    }
}
