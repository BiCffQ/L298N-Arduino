#include "Arduino.h"
#include "Motor_RS.h"

Motor_RS::Motor_RS(int pin1,int pin2,int pin3,int pin4)
{
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
  _pin4 = pin4;
}

void Motor_RS::forward()
{
  analogWrite(_pin1, pwm);
  digitalWrite(_pin2, LOW); 
  digitalWrite(_pin3, LOW);
  analogWrite(_pin4, pwm);
}

void Motor_RS::back()
{
  digitalWrite(_pin1, LOW);
  analogWrite(_pin2, pwm); 
  analogWrite(_pin3, pwm);
  digitalWrite(_pin4, LOW);
}

void Motor_RS::right()
{
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin2, HIGH); 
  digitalWrite(_pin3, LOW);
  analogWrite(_pin4, pwm);
}

void Motor_RS::left()
{
  analogWrite(_pin1, pwm);
  digitalWrite(_pin2, LOW); 
  digitalWrite(_pin3, HIGH);
  digitalWrite(_pin4, HIGH);  
}
void Motor_RS::stop()
{
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin2, HIGH); 
  digitalWrite(_pin3, HIGH);
  digitalWrite(_pin4, HIGH);  
}
