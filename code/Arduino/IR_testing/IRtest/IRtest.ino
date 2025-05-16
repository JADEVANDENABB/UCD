#include <IRremote.h>

const int RECV_PIN = 2;  // Make sure this is the right pin
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);  // Start the Serial Monitor
  irrecv.enableIRIn(); // Start the IR receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.print("Received IR code: 0x");
    Serial.println(results.value, HEX);
    irrecv.resume();  // Receive the next value
  }
}