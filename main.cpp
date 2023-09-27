/**
 * @file Bai 1
 * @author Trương Quốc Ánh
 * @brief Using Button to change the led status
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <Arduino.h>
#define LED 14
#define BUTTON 12
bool ledStatus = 0;
int buttonStatus;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonStatus = digitalRead(BUTTON);
  if(!buttonStatus)
  {
    //change the Led status
    ledStatus = !ledStatus;
  }
  if(ledStatus)
  {
    digitalWrite(LED, HIGH);
    Serial.print("LED ON\n");
  }
  else 
  {
    digitalWrite(LED, LOW);
    Serial.print("LED OFF\n");
  }
  delay(100);
}

