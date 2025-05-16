#include <WiFiNINA.h>

char ssid[] = "A35 van Hailey";    
char pass[] = "********";        
int status = WL_IDLE_STATUS;

WiFiServer server(80);

bool ledAan = false; 
unsigned long ledStart = 0;
const unsigned long ledTijd = 10000;

void setup() {
  Serial.begin(9600);
  while (!Serial);         

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

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

void loop() {
  WiFiClient client = server.available();
  if (client) 
  {
    String request = client.readStringUntil('\r');
    client.flush();  // Clear out anything else

    Serial.println("Request: " + request);

    if (request.indexOf("/led") != -1) 
    {
      ledAan = true;
      ledStart = millis();            
      digitalWrite(LED_BUILTIN, HIGH);
    }

      client.println("HTTP/1.1 200 OK");           
      client.println("Content-Type: text/html");
      client.println("Connection: close");
      client.println();
      client.println("<html><body><h1>LED Command Received</h1></body></html>");
      delay(1);
      client.stop();
  }
  if (ledAan && (millis() - ledStart >= ledTijd)) 
  {
    digitalWrite(LED_BUILTIN, LOW);  // Turn off LED
    ledAan = false;
  }
}
