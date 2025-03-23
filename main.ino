#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_LED_PIN 4  // GPIO4 (D2)

IRsend irsend(IR_LED_PIN);  // Initialize IR sender

void setup() {
    Serial.begin(115200);
    irsend.begin();
}

void loop() {
    Serial.println("Sending Power ON Signal to TV");
    
    // Example IR code for Mi TV (NEC protocol, change based on your TV)
    irsend.sendNEC(0x20DF10EF, 32);  // 0x20DF10EF is an example Mi TV power code

    delay(5000); // Wait for 5 seconds before sending again
}
