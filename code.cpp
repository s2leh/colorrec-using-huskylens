#include <Servo.h>

Servo servo9;
Servo servo8;
Servo servo7;
Servo servo6;

void setup() {
  servo9.attach(9);
  servo8.attach(8);
  servo7.attach(7);
  servo6.attach(6);

  // Sweep for approximately 2 seconds
  for (int pos = 0; pos <= 180; pos += 1) {
    servo9.write(pos);
    servo8.write(pos);
    servo7.write(pos);
    servo6.write(pos);
    delay(4);  
  }

  for (int pos = 180; pos >= 0; pos -= 1) {
    servo9.write(pos);
    servo8.write(pos);
    servo7.write(pos);
    servo6.write(pos);
    delay(4);  
  }

  // Move to and hold at 90 degrees
  servo9.write(90);
  servo8.write(90);
  servo7.write(90);
  servo6.write(90);
}

void loop() {
  // Do nothing; hold position at 90°
}
