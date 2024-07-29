#include <Servo.h>

// تعيين محركات السيرفو
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {
  // تعيين الدبابيس التي تتصل بمحركات السيرفو
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
}

void loop() {
  // تحريك كل محرك سيرفو بزاوية 0 إلى 180 درجة والعكس
  for (int angle = 0; angle <= 180; angle++) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    servo6.write(angle);
    delay(15); // تأخير بسيط للتحكم في سرعة الحركة
  }

  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    servo6.write(angle);
    delay(15); // تأخير بسيط للتحكم في سرعة الحركة
  }
}
