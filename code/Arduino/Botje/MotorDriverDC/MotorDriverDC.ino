int motor2Pin1 = 7;
int motor2Pin2 = 8;
int speedPin2 = 10;

int motor1Pin1 = 5;
int motor1Pin2 = 6;
int speedPin1 = 9;

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
