int i=0;
void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print(i++);
  Serial.println(": Hello Node32Pico");
  delay(500);
}

