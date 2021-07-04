// C++ code
//
#include <Servo.h>

int position1 = 0;

int unnamed = 0;

int position2 = 0;

int position3 = 0;

int i = 0;

Servo servo_13;

Servo servo_12;

Servo servo_11;

Servo servo_10;

Servo servo_9;

Servo servo_8;

int counter;

void setup()
{
  servo_13.attach(13, 500, 2500);

  servo_12.attach(12, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_8.attach(8, 500, 2500);

}

void loop()
{
  position1 = 90;
  position2 = 60;
  position3 = 30;
  for (position1 = 0; position1 <= 90; position1 += 1) {
    servo_13.write(position1);
    servo_12.write(position1);
    servo_11.write(position1);
    servo_10.write(position1);
    servo_9.write(position1);
    servo_8.write(position1);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (position1 = 90; position1 >= 0; position1 -= 1) {
    servo_13.write(position1);
    servo_12.write(position1);
    servo_11.write(position1);
    servo_10.write(position1);
    servo_9.write(position1);
    servo_8.write(position1);
    delay(30); // Wait for 30 millisecond(s)
  }
  delay(1000); // Wait for 1000 millisecond(s)
  for (position1 = 0; position1 <= 10; position1 += 1) {
    servo_13.write(position1);
    servo_10.write(position1);
    for (position2 = 0; position2 <= 60; position2 += 1) {
      servo_12.write(position2);
      servo_11.write(position2);
      servo_9.write(position2);
      servo_8.write(position2);
      delay(10); // Wait for 10 millisecond(s)
    }
  }
  for (position1 = 10; position1 >= 0; position1 -= 1) {
    servo_13.write(position1);
    servo_10.write(position1);
    for (position2 = 60; position2 >= 0; position2 -= 1) {
      servo_12.write(position2);
      servo_11.write(position2);
      servo_9.write(position2);
      servo_8.write(position2);
      delay(10); // Wait for 10 millisecond(s)
    }
  }
  delay(1000); // Wait for 1000 millisecond(s)
  for (counter = 0; counter < 15; ++counter) {
    for (position3 = 0; position3 <= 30; position3 += 1) {
      servo_11.write(position3);
      servo_8.write(position3);
      delay(15); // Wait for 15 millisecond(s)
    }
    for (position3 = 30; position3 >= 0; position3 -= 1) {
      servo_11.write(position3);
      servo_8.write(position3);
      delay(15); // Wait for 15 millisecond(s)
    }
  }
}