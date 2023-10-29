#include <SoftwareSerial.h>

SoftwareSerial BTserial(D2, D3); // RX, TX pins of HC-05 module

#define LED_PIN D4 // Digital pin for LED control

void setup() {
  Serial.begin(115200);
  BTserial.begin(9600);  
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (BTserial.available()) {
    char data = BTserial.read();
    if (data == '1') {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED: ON");
    } else if (data == '0') {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED: OFF");
    }
  }
}
