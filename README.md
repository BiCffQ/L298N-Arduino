# L298N-Arduino

| DC        | Rotation        |  IN1  |  IN2  |  IN3  |  IN4  |
|-----------|-----------------|-------|-------|-------|-------|
| Motor-A   |  Forward(pwm)   | 1/PWM | 0     |       |       |
|           |  Reverse(pwm)   |   0   | 1/PWM |       |       |
|           |  Standby        |   0   |   0   |       |       |
|           |  Brake          |   1   |   1   |       |       |
|-----------|-----------------|-------|-------|-------|-------|
| Motor-B   |  Forward(pwm)   |       |       | 1/PWM | 0     |
|           |  Reverse(pwm)   |       |       |   0   | 1/PWM |
|           |  Standby        |       |       |   0   |   0   |
|           |  Brake          |       |       |   1   |   1   |
