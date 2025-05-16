#include <Stepper.h>

int fullRotation=2038;
int rpm=10;
Stepper turner(fullRotation,8,10,9,11);
void setup() {
  Serial.begin(9600);
  turner.setSpeed(rpm);
  
}

void loop() {
  turner.step(10);
}
