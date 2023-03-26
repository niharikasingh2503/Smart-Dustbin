#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

int IRSensor = 2; // connect ir sensor to arduino pin 2
//int LED = 13; // conect Led to arduino pin 13

void setup() 
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  //pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1){
    //digitalWrite(LED, LOW); // LED LOW
     for (pos = 0; pos <= 150; pos += 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  delay(1000);
  for (pos = 150; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  }
  
}
