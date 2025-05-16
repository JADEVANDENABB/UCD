#include <IRremote.h>

const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

int motor2Pin1 = 18;
int motor2Pin2 = 17;
int speedPin2 = 6;

int motor1Pin1 = 20;
int motor1Pin2 = 19;
int speedPin1 = 5;

bool motorsOn = false;
unsigned long lastToggleTime = 0;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(speedPin1, OUTPUT);
  pinMode(speedPin2, OUTPUT);

  stopMotors();  // Make sure motors are off at start
}

void loop() {
  if (irrecv.decode(&results)) {
    unsigned long now = millis();
    if (now - lastToggleTime > 2000) {  // Only toggle if 2 sec passed
      motorsOn = !motorsOn;
      lastToggleTime = now;
      Serial.println(motorsOn ? "Motors ON" : "Motors OFF");
    }
    irrecv.resume();  // Ready for next signal
  }

  if (motorsOn) {
    runMotors();
  } else {
    stopMotors();
  }
}

void runMotors() {
  analogWrite(speedPin1, 200);
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);

  analogWrite(speedPin2, 200);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void stopMotors() {
  analogWrite(speedPin1, 0);
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);

  analogWrite(speedPin2, 0);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}