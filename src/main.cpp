#include <Arduino.h>
#define LED 12
#define BUTTON 0
 
int i;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}
 
void loop() {
  i ++;
  // put your main code here, to run repeatedly:
  Serial.print("Button = ");
  Serial.print(digitalRead(BUTTON));
  Serial.print(" LED ON  i: ");
  Serial.println(i);
  digitalWrite(LED, HIGH);
  delay(200);
 
  Serial.print(" LED OFF!   i: ");
  Serial.println(i);
  digitalWrite(LED, LOW);
  delay(1000);
}