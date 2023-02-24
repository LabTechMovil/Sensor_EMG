#include <Servo.h>
#define THRESHOLD 500
#define EMG_PIN 0
#define SERVO_PIN 3
Servo SERVO_1;

void setup() {
  Serial.begin(9600);
  SERVO_1.attach(SERVO_PIN);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value= analogRead (EMG_PIN);
  delay (250);
    if(value > THRESHOLD){
      SERVO_1.write(170);
    }
    else{
      SERVO_1.write(10);
    }
    Serial.println(value);
}
