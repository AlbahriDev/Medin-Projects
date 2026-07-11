#define LED_PIN 2
#define SWITCH_PIN 4

void setup(){
    pinMode(LED_PIN, OUTPUT);
    pinMode(SWITCH_PIN, INPUT);
  }
void loop(){
  int switchState = digitalRead(SWITCH_PIN);
  if ( switchState == HIGH){
    digitalWrite(LED_PIN, HIGH);
    }
    else{
      digitalWrite(LED_PIN, LOW);
      }
  
  }
