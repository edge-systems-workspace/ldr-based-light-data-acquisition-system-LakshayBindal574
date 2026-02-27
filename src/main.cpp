#include <Arduino.h>
#define LDR_PIN A0
void setup() {
    // write your initialization code here
    Serial.begin(9600);
    pinMode(LDR_PIN,INPUT);
    Serial.println("LDR test");

}

void loop() {
    // write your code here
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercent = map(ldrRaw,0,1023,100,0);
    Serial.print("LDR Raw: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println();
    delay(500);
}
