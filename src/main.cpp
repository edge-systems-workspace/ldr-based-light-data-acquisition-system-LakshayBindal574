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
/**
 * @file LDR_Light_Monitor.ino
 * @author Lakshay Bindal
 * @date 2026-02-27
 * @version 1.0
 *
 * @brief Light intensity monitoring using LDR sensor.
 *
 * @details
 * This program reads analog values from a Light Dependent Resistor (LDR)
 * connected to an Arduino analog pin. The raw analog value (0–1023)
 * is converted into a light percentage (0–100%).
 *
 * The readings are displayed on the Serial Monitor every 500 ms.
 *
 * Connection:
 * - LDR output → Analog Pin A0
 * - Other end of LDR → 5V
 * - 10kΩ resistor → GND (Voltage divider configuration)
 *
 * @note
 * LDR resistance decreases as light intensity increases.
 *
 * @warning
 * Ensure proper voltage divider circuit is used to avoid incorrect readings.
 */

#include <Arduino.h>

/** @brief Analog pin connected to LDR output */
#define LDR_PIN A0


/**
 * @brief Initializes serial communication and LDR pin.
 */
void setup()
{
    Serial.begin(9600);
    pinMode(LDR_PIN, INPUT);
    Serial.println("LDR test");
}


/**
 * @brief Main loop function.
 *
 * @details
 * Reads raw analog value from LDR and converts it
 * into light percentage using Arduino map() function.
 *
 * Conversion:
 * - Raw Range: 0–1023
 * - Percentage Range: 100% (dark) to 0% (bright)
 */
void loop()
{
    int ldrRaw = analogRead(LDR_PIN);

    // Convert raw reading to percentage (inverse mapping)
    int lightPercent = map(ldrRaw, 0, 1023, 100, 0);

    Serial.print("LDR Raw: ");
    Serial.print(ldrRaw);

    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println("%");

    delay(500);
}
