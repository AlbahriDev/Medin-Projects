/*
Arduino LED Counter 1 → 9
*/

void setup() {
  // تعريف المخارج (LEDs)
  for (int i = 2; i <= 10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // عدّاد من 1 إلى 9
  for (int i = 2; i <= 10; i++) {
    digitalWrite(i, HIGH);   // تشغيل LED
    delay(500);              // انتظار نصف ثانية
    digitalWrite(i, LOW);    // إطفاء LED
  }
}
