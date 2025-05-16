#include <Stepper.h>

int fullRotation=2038;
int rpm=10;

Stepper turner(fullRotation,8,10,9,11);

struct MessageValue {
  String message;
  String value;
};


struct MessageValue getMessage(String inputtedStr) {
  struct MessageValue result;
  char charArr[50];
  inputtedStr.toCharArray(charArr, 50);
  char* ptr = strtok(charArr, "||");
  result.message = String(ptr);
  ptr = strtok(NULL, "||");
  if (ptr == NULL) {
    result.value = String("");
    return result;
  }
  result.value = String(ptr);
  return result;
}


struct MessageValue receivedData;



void setup() {
  Serial.begin(9600);
  turner.setSpeed(rpm);
}


void loop() {
  while (Serial.available() > 0) {
    String receivedString = Serial.readStringUntil('\0');  
    receivedData = getMessage(receivedString);
  }

  if (receivedData.message.equals("snoepje")) {
    if (receivedData.value.equals("1")) {
      Serial.println("motor");
      turner.step(fullRotation/10);
    }
  }
}