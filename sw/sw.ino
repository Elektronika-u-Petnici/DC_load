#include <Arduino.h>


void setup() {
  
    Serial.begin(115200);         // Connect to PA2
    Serial.print("Cao");
}

void loop() {
    Serial.print("Cao");
    delay(5000);
}
