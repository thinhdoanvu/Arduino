//khai bao bien
int inByte = 0;         // incoming serial byte

void setup() {
  // put your setup code here, to run once:
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  while (!Serial) 
  {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  //chan so 13 lam chan xuat du lieu, mac dinh duoc noi voi LED
  pinMode(13,OUTPUT);
  establishContact();  // send a byte to establish contact until receiver responds
}

void loop() {
  // put your main code here, to run repeatedly:
   // if we get a valid byte, read analog ins:
  if (Serial.available() > 0) 
  {
    // get incoming byte:
    inByte = Serial.read();
  }
  digitalWrite(13,inByte);
  //Bat cho LED sang
  //delay(1000);
  //digitalWrite(13,LOW);
  //tat LED
  //delay(1000);
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println("0,0,0");   // send an initial string
    delay(300);
  }
}
