
#include <Servo.h>

Servo B;

  int potpin = A0; 
  int val;   

Servo Q;

  int potpin1 = A1; 
  int val1; 

Servo W;

  int potpin2 = A2; 
  int val2;

Servo E;

  int potpin3 = A3; 
  int val3;

Servo R;

  int potpin4 = A4; 
  int val4;

void setup() {
  B.attach(3);
  Q.attach(5);
  W.attach(6);
  E.attach(9);
  R.attach(10);
}

void loop() {
  val = analogRead(potpin);          
  val = map(val, 0, 1023, 0, 90);    
  B.write(val);                  
  delay(15);
  
  val1 = analogRead(potpin1);          
  val1 = map(val1, 0, 1023, 0, 90);    
  Q.write(val1);                  
  delay(15);
  
  val2 = analogRead(potpin2);          
  val2 = map(val2, 0, 1023, 0, 90);    
  W.write(val2);                  
  delay(15); 
  
  val3 = analogRead(potpin3);          
  val3 = map(val3, 0, 1023, 0, 90);    
  E.write(val3);                  
  delay(15); 
  
  val4 = analogRead(potpin4);          
  val4 = map(val4, 0, 1023, 0, 90);    
  R.write(val4);                  
  delay(15); 
    
}  
