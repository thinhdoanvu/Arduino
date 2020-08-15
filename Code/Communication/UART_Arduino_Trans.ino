//khai bao bien
#define LF 0x0A

int analogPin = A0; //Doc du lieu cho ADC
int val = 0;  
float temp;
String chuoi;
int i;

//khai bao thu vien chan LCD
void setup() 
{
 Serial.begin(9600);
}

void loop() 
{
  val = analogRead(analogPin);  // read the input pin
  float voltage = (float)val * 5.0 / 1024.0;
  temp = voltage * 100.0;
  chuoi = String (temp,3);
  
  for(i=0;i<chuoi.length();i++)
  {
    Serial.write(chuoi[i]);
    delay(10);              
  }
  Serial.write('#');          //ky tu bao hieu la het roi
  delay(10);
}
