#include <Arduino.h>
#define LDR_PIN A0
void setup() {
    // write your initialization code here
    Serial.begin(9600);
    pinMode(LDR_PIN,INPUT);
    Serial.println("LDR test");

}

