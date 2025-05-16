int motor1Pin1 = 3;
int motor1Pin2 = 4;
int speedPin1 = 2;

int motor2Pin1 = 5;
int motor2Pin2 = 6;
int speedPin2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(speedPin1, OUTPUT);
  pinMode(speedPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(speedPin1,200);
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  delay(1000);

  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  delay(1000);

  analogWrite(speedPin2,200);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  delay(1000);

  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  delay(1000);
}
