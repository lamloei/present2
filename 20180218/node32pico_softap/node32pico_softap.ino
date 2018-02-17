#include <WiFi.h>
 
const char *ssid = "Node32Pico";
const char *password = "123456789";
 
void setup() {
 
  Serial.begin(115200);
  WiFi.softAP(ssid, password);
 
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
 
}
 
void loop() {}

