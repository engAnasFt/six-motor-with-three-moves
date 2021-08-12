#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
int i ;

void setup() {
  // put your setup code here, to run once:
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(4);
servo5.attach(7);
servo6.attach(8);  
}

void loop() {
  // put your main code here, to run repeatedly:
  // initial position
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
  servo6.write(180);
  
  delay(5000);
  
  // first move 
  
   servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  
  delay(2000);
  
  servo1.write(50);
  servo2.write(50);
  servo4.write(50);
  servo5.write(50);
  delay(1300);
  
  for( i=0 ; i<= 2; i++) {
  servo3.write(90);
  servo6.write(90);
    delay (1000);
  servo3.write(0);
  servo6.write(0); 
  delay(1000);  
  }
  delay(3000);
  
  // seccond move
  
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  
  delay(2000);
  
  servo1.write(135);
  servo2.write(90);
  servo3.write(0);
  servo4.write(135);
  servo5.write(90);
  servo6.write(0);
  
  delay(3000);
  
  
  
  // third move 
  
   servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  
  delay(1500);
  
  servo1.write(90);
  servo2.write(90);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
  servo6.write(180);
  
  delay(3000);
  
  
  
}