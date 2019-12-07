#include <Servo.h>

Servo myServo;

//pins
const int motorPin = 13;
//const int motor2 = ;
const int buttonPin = 2;
//const int buttonPinTwo = ;
const int servoPin = 12;

//vars
const int motorSpeed = 240;
//max angle
const float maxA = 135.000;
//min angle
const float minA = 45.000;
//speed of increments servo
const float incr = 0.002;
const float initAngle = 90.000;
float pos = initAngle;

//dictates whether servo is swinging to the right(r) or not
int r = true;

//protos
void motorOn();
void motorOff();
void turnHead(int);

void setup() {
 Serial.begin(9600);
 pinMode(motorPin, OUTPUT);
 pinMode(buttonPin, INPUT);

 myServo.attach(servoPin);
 myServo.write(initAngle); //reset
 delay(100);
}

void loop() {
  if(digitalRead(buttonPin) == LOW){
    motorOn();
  }
  if(digitalRead(buttonPin) == HIGH){
    motorOff();
  }

  //swinging to right(r) and not exceeding max angle
  if(r && pos < maxA){
    pos = pos + incr;
    myServo.write(pos);
  }
 //not swinging to right (r), swinging to left
  if(!r && pos > minA){
    pos = pos - incr;
    myServo.write(pos);
  }
  
 //if max angle is reached, switch r, swing to other direction
  if(pos >= maxA){
    r = false;
  }
  if(pos <= minA){
    r = true;
  }
}

void motorOn(){
  analogWrite(motorPin, motorSpeed);
}

void motorOff(){
  digitalWrite(motorPin, LOW);
}
