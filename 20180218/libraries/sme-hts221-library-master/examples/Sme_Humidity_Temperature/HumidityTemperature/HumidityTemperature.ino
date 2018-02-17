/*
 * humidity.cpp
 *
 * Example on SmartEverything humidity / temperature sensor reading
 *
 * Created: 4/27/2015 10:32:11 PM
 *  Author: speirano
 */

#include <Wire.h>
#include <Arduino.h>

#include <HTS221.h>

// the setup function runs once when you press reset or power the board
void setup() {
    //Initiate the Wire library and join the I2C bus
    Wire.begin();
    pinMode(13, OUTPUT);
    smeHumidity.begin();
    Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {

    double data = 0;

    data = smeHumidity.readHumidity();
    Serial.print("Humidity   : ");
    Serial.print(data);
    Serial.println(" %");

    data = smeHumidity.readTemperature();
    Serial.print("Temperature: ");
    Serial.print(data);
    Serial.println(" celsius");

   digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);              // wait for a second
   digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
   delay(500);              // wait for a second

}
