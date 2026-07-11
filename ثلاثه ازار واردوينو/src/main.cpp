#include <Arduino.h>

#define LED_PIN 1
#define SET_PIN 7
#define RESET_PIN 6
#define DEBIAN_PIN 5

bool ledstate = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(SET_PIN, INPUT_PULLUP);
  pinMode(RESET_PIN, INPUT_PULLUP);
  pinMode(DEBIAN_PIN, INPUT_PULLUP);
  
  digitalWrite(LED_PIN, LOW);  // تأكد أن الـ LED يبدأ مطفأ
}

void loop() {
  // زر SET: يضيء الـ LED
  if (digitalRead(SET_PIN) == LOW) {
    ledstate = true;
    digitalWrite(LED_PIN, ledstate);  // استخدم HIGH بدلاً من ledstate
    delay(200);  // زود التأخير إلى 1 ثانية
  }
  
  // زر RESET: يطفئ الـ LED
  if (digitalRead(RESET_PIN) == LOW) {
    ledstate = false;
    digitalWrite(LED_PIN, ledstate);  // استخدم LOW بدلاً من ledstate
    delay(200);  // زود التأخير إلى 1 ثانية
  }
  
  // زر DEBIAN: يقلب حالة الـ LED
  if (digitalRead(DEBIAN_PIN) == LOW) {
    ledstate = !ledstate;
    digitalWrite(LED_PIN, ledstate);
    delay(200);  // زود التأخير إلى 1 ثانية
  }
  
   // ✅ استخدم 50ms بدلاً من 10ms
}