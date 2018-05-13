#include <Servo.h>
Servo myservo;
Servo myservo2;


void setup(){
  myservo.attach(8); 
  myservo2.attach(9); 
}


void loop(){
  


  myservo.write(0);
  myservo2.write(0);
delay(3000);
myservo.write (90);
myservo2.write (90);
delay (3000);
myservo.write (180);
myservo2.write (180);
delay(5000);


  
}
