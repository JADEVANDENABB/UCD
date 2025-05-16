#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11); // RX, TX (you can change pins)

const int clkPin = 2;
const int dtPin  = 3; 
volatile int position = 80;
int laatste;

void setup() {
  pinMode(clkPin, INPUT);
  pinMode(dtPin, INPUT);

  Serial.begin(9600);     
  bluetooth.begin(9600);     

  laatste = digitalRead(clkPin);
}

void loop() {
  int status = digitalRead(clkPin);

  if (status != laatste) {
    if (digitalRead(dtPin) != status) {
      position++; 
    } else {
      position--;
    }

    String data = "{\"encoder\":" + String(position) + "}";
    Serial.println(data); 
    bluetooth.println(data);
  }

  laatste = status;
  delay(2);
}