/*
 * مشروع: عداد من 1 إلى 9 باستخدام Arduino UNO
 * بنفس نمط كود ATmega328P
 * الشاشة: 7-segment (أنود مشترك)
 */

// تعريف الأطراف المستخدمة للشاشة (مثل ATmega328P)
// في Arduino: الأطراف الرقمية 2-8
#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8

// أكواد الأرقام من 1 إلى 9 (أنود مشترك)
// الترتيب: {a, b, c, d, e, f, g}
// 0 = تشغيل، 1 = إطفاء
unsigned char digits[9][7] = {
  {1, 0, 0, 1, 1, 1, 1},  // 1 → يضيء b و c فقط
  {0, 0, 1, 0, 0, 1, 0},  // 2 → a, b, d, e, g
  {0, 0, 0, 0, 1, 1, 0},  // 3 → a, b, c, d, g
  {1, 0, 0, 1, 1, 0, 0},  // 4 → b, c, f, g
  {0, 1, 0, 0, 1, 0, 0},  // 5 → a, c, d, f, g
  {0, 1, 0, 0, 0, 0, 0},  // 6 → a, c, d, e, f, g
  {0, 0, 0, 1, 1, 1, 1},  // 7 → a, b, c
  {0, 0, 0, 0, 0, 0, 0},  // 8 → a, b, c, d, e, f, g
  {0, 0, 0, 0, 1, 0, 0}   // 9 → a, b, c, d, f, g
};

// دالة تشبه setup في ATmega328P
void setup() {
  // تعيين جميع الأطراف كمخرجات
  DDRD |= (1 << 2);  // a = الطرف 2 (PD2)
  DDRD |= (1 << 3);  // b = الطرف 3 (PD3)
  DDRD |= (1 << 4);  // c = الطرف 4 (PD4)
  DDRD |= (1 << 5);  // d = الطرف 5 (PD5)
  DDRD |= (1 << 6);  // e = الطرف 6 (PD6)
  DDRD |= (1 << 7);  // f = الطرف 7 (PD7)
  DDRB |= (1 << 0);  // g = الطرف 8 (PB0)
}

// دالة تشبه digitalWrite في ATmega328P
void digitalWrite_avr(int pin, int value) {
  if(pin <= 7) {
    if(value == 0)
      PORTD &= ~(1 << pin);  // تشغيل (0 = تشغيل)
    else
      PORTD |= (1 << pin);   // إطفاء (1 = إطفاء)
  } else {
    if(value == 0)
      PORTB &= ~(1 << 0);    // تشغيل
    else
      PORTB |= (1 << 0);     // إطفاء
  }
}

// دالة تشبه loop في ATmega328P
void loop() {
  for(int num = 0; num < 9; num++) {
    digitalWrite_avr(a, digits[num][0]);
    digitalWrite_avr(b, digits[num][1]);
    digitalWrite_avr(c, digits[num][2]);
    digitalWrite_avr(d, digits[num][3]);
    digitalWrite_avr(e, digits[num][4]);
    digitalWrite_avr(f, digits[num][5]);
    digitalWrite_avr(g, digits[num][6]);
    
    delay(500);
  }
}
