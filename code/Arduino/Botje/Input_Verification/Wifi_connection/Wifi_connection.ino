#include <WiFiNINA.h>

char ssid[] = "A35 van Hailey";              
char pass[] = "*******";            
int status = WL_IDLE_STATUS; 
int ledState = LOW;                       
unsigned long previousMillisInfo = 0;     
unsigned long previousMillisLED = 0;      
const int intervalInfo = 5000;           

void setup() {
  Serial.begin(9600);
  while (!Serial);

  pinMode(LED_BUILTIN, OUTPUT);

  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to network: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);

    delay(10000);
  }

  Serial.println("You're connected to the network");
  Serial.println("---------------------------------------");
}

void loop() {
  unsigned long currentMillisInfo = millis();

  if (currentMillisInfo - previousMillisInfo >= intervalInfo) {
    previousMillisInfo = currentMillisInfo;

    Serial.println("Board Information:");
    IPAddress ip = WiFi.localIP();
    Serial.print("IP Address: ");
    Serial.println(ip);

    Serial.println();
    Serial.println("Network Information:");
    Serial.print("SSID: ");
    Serial.println(WiFi.SSID());

    long rssi = WiFi.RSSI();
    Serial.print("signal strength (RSSI):");
    Serial.println(rssi);
    Serial.println("---------------------------------------");
  }
  
  unsigned long currentMillisLED = millis();
  
  int intervalLED = WiFi.RSSI() * -10;
 
  if (currentMillisLED - previousMillisLED >= intervalLED) {
    previousMillisLED = currentMillisLED;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(LED_BUILTIN, ledState);
  }
}