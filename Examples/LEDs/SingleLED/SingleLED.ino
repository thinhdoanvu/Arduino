//khai bao bien
int LED=5; //LED gan boi pin 5

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,1);
  delay(100);
  digitalWrite(LED,0);
  delay(100);
}
