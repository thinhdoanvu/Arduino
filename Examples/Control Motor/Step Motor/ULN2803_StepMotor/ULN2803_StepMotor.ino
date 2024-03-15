#define CoilA 7//34
#define CoilB 6//32
#define CoilC 5//30
#define CoilD 4//28

// Global variables
int timeDelay = 3000;


void setup(){
  // declaring the four pins to be outputs
  pinMode(CoilA, OUTPUT);
  pinMode(CoilB, OUTPUT);
  pinMode(CoilC, OUTPUT);
  pinMode(CoilD, OUTPUT);
  // setting the inital state of the electromagnets
  digitalWrite(CoilA, HIGH);
  digitalWrite(CoilB, LOW);
  digitalWrite(CoilC, LOW);
  digitalWrite(CoilD, HIGH);
  delay(10); // a small time delay to allow the motor to move
}// end of setup

void loop(){
  for(int i=0; i<202; i++){ // looping through this chunk of code for ~ a full rotation
    digitalWrite(CoilC, LOW);
    digitalWrite(CoilA, HIGH);
    delayMicroseconds(timeDelay);
    digitalWrite(CoilD, LOW);
    digitalWrite(CoilB, HIGH);
    delayMicroseconds(timeDelay);
    digitalWrite(CoilA, LOW);
    digitalWrite(CoilC, HIGH);
    delayMicroseconds(timeDelay);
    digitalWrite(CoilB, LOW);
    digitalWrite(CoilD, HIGH);
    delayMicroseconds(timeDelay);
  }// end of looping
  // preparing the electromagnets to go the other direction
  digitalWrite(CoilB, HIGH);
  digitalWrite(CoilD, LOW);
  delayMicroseconds(timeDelay*500);
  
  
  for(int j=0; j<204; j++){ // looping through this chunk of code for ~ a full rotation in the other direction
    digitalWrite(CoilC, LOW);
    digitalWrite(CoilA, HIGH);
    delayMicroseconds(timeDelay);
    digitalWrite(CoilD, HIGH);
    digitalWrite(CoilB, LOW);
    delayMicroseconds(timeDelay);
    digitalWrite(CoilA, LOW);
    digitalWrite(CoilC, HIGH);
    delayMicroseconds(timeDelay);
    digitalWrite(CoilB, HIGH);
    digitalWrite(CoilD, LOW);
    delayMicroseconds(timeDelay);
  }// end of looping
  // preparing the electromagnets to go the other direction
  digitalWrite(CoilB, LOW);
  digitalWrite(CoilD, HIGH); 
  delayMicroseconds(timeDelay*500);
  
}//end of loop
