#include <Wire.h>
 void setup()
{
  Wire.begin();
   Serial.begin(9600);
  while (!Serial);
  Serial.println("\nI2C Scanner");
}
 
void loop()
{
  byte error, address;
  int nDevices;
 
  Serial.println("Scanning...");
 
  nDevices = 0;
  for(address = 1; address < 127; address++ )
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    //Kiem tra ma ACK nhan duoc
    if (error == 0) //co tim thay thiet bi
    {
      Serial.print("I2C device found at address 0x");
      if (address<16)
      {
        Serial.print("0"); //chen them so 0 o dau
      }
      Serial.print(address,HEX);
      Serial.println("  !");
      nDevices++;
    }
    //
    else if (error==4)//Khong nhan dien thiet bi
    {
      Serial.print("Unknown error at address 0x");
      if (address<16)
      {
        Serial.print("0"); //chen them so 0 o dau
      }
      Serial.println(address,HEX);
    }    
  }

  //Co bao nhieu thiet bi
  if (nDevices == 0)
  {
    Serial.println("No I2C devices found\n");
  }
  else
  {
    Serial.print("Co ");
    Serial.print(nDevices);
    Serial.println(" thiet bi duoc ket noi I2C\n");
  }
  delay(5000);// 5 giay scan
}
