#include <Servo.h>

#define PB1 19

Servo         myservo;  

int pos = 0;    // variable to store the servo position
int min_delay = 5000;

void move_servo(){
  Serial.println("Abrindo servo....");
  for(pos = 0; pos <= 180; pos += 90){ // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
  }
  Serial.println("Servo aberto");
  delay(1000);
  Serial.println("Fechando servo....");
  for(pos = 180; pos >= 0; pos -= 90){ // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
  }
  Serial.println("Servo fechado");
}
void setup(){
  myservo.attach(PB1);  // attaches the servo on pin 13 to the servo object
  Serial.begin(115200);
}
void loop(){
    move_servo();
    delay(5000);
}

