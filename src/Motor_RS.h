#ifndef Motor_RS_h
#define Motor_RS_h

#include "Arduino.h"

class Motor_RS
{
  public:
    Motor_RS(int pin1, int pin2, int pin3, int pin4);
    void forward();
    void back();
    void lift();
    void right();
    void stop();
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
    int pwm;
};

#endif
