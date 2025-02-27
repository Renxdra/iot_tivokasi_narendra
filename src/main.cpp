#include <Arduino.h>
// put function declarations here:
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(23,HIGH);
  delay(3000); // this speeds up the simulation
   digitalWrite(23, LOW);
  
  digitalWrite(22, HIGH);
  delay(5000);
  digitalWrite(22, LOW);
  
 digitalWrite(21, HIGH);
 delay(2000);
 digitalWrite(21, LOW);
 delay(10);
}
