#include <WiFiNINA.h>

char ssid[] = "A35 van Hailey";    
char pass[] = "24Maart2006";        
int status = WL_IDLE_STATUS;

WiFiServer server(80);

bool motorsAan = false; 
unsigned long motorsStart = 0;
unsigned long motorsTijd = 60000;

int motor1Pin1 = 18;
int motor1Pin2 = 17;
int speedPin1 = 5;

int motor2Pin1 = 20;
int motor2Pin2 = 19;
int speedPin2 = 3;

void setup() {
  Serial.begin(9600);        

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(speedPin1, OUTPUT);

  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(speedPin2, OUTPUT);

  while (status != WL_CONNECTED) 
  {
    Serial.print("Connecteren met WiFi: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass); 
    delay(10000);
  }
  Serial.println("Geconnecteerd met WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.begin();
}

void startMotors() {
  analogWrite(speedPin1, 200);
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);

  analogWrite(speedPin2, 200);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void stopMotors() {
  analogWrite(speedPin1, 0);
  analogWrite(speedPin2, 0);
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}

void loop() {
  WiFiClient client = server.available();
  if (client) 
  {
    String request = client.readStringUntil('\n');
    client.flush();  // Clear out anything else

    Serial.println("Request: " + request);

    if (request.indexOf("/toy_extend") != -1) {
      int durationStart = request.indexOf("duration=");
      if (durationStart != -1) {
        String durationStr = request.substring(durationStart + 9);
        unsigned long extraTime = durationStr.toInt();

        if (extraTime > 0) 
        {
          motorsAan = true;
          motorsStart = millis();
          motorsTijd = extraTime;
          startMotors();
        }
      }
    } 

    if (request.indexOf("/toy_off") != -1)
    {
      stopMotors();
      motorsAan = false;
    }
    else if (request.indexOf("/toy") != -1) 
    {
      motorsAan = true;
      motorsStart = millis();            
      startMotors();
    }
    
      client.println("HTTP/1.1 200 OK");           
      client.println("Content-Type: text/html");
      client.println("Connection: close");
      client.println();
      client.println("<html><body><h1>Toy Command Received</h1></body></html>");
      delay(1);
      client.stop();
  }
  if (motorsAan && (millis() - motorsStart >= motorsTijd)) 
  {
    stopMotors();
    motorsAan = false;
  }
}
