#include"Motor_RS.h"

Motor_RS motor(3, 5, 6, 9);     //Insert a pin that supports pwm
int pwm = 125;                  //Enter the speed you need PWM (0-255)

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor.forward();    //Go ahead
  delay(5000);
  motor.left();       //Rotate left
  delay(5000);
  motor.back();       //Go back
  delay(5000);
  motor.right();      //Rotate right
  delay(5000);
  motor.stop();       //Brake
  delay(5000);

}
