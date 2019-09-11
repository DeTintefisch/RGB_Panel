#include <ESP8266WiFi.h>
#include <WebSocketsServer.h>
#include <Adafruit_NeoPixel.h>



#define PIN  2
#define NUMPIXELS 45

#ifndef STASSID
#define STASSID "yourssid"
#define STAPSK  "yourpassword"
#endif


const char* ssid = STASSID;
const char* password = STAPSK;

IPAddress ip      (192, 168,   1, 200);
IPAddress gateway (192, 168,   1,   1);   
IPAddress subnet  (255, 255, 255,   0);
IPAddress dns     (192, 168,   1,   1);


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
WebSocketsServer webSocket = WebSocketsServer(81);
WiFiServer server(80);
WiFiClient client;



void setup() 
{
  // start serial
  Serial.begin(115200);
  
  Serial.println("Booting");
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }

  Serial.println("Ready");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

   // prepare GPIO2
  pinMode(2, OUTPUT);
  digitalWrite(2, 0);
  

  
  // inital connect
  WiFi.mode(WIFI_STA);
  WiFiStart();

  webSocket.begin();
  webSocket.onEvent(webSocketEvent);

  pixels.begin(); // Initialisierung der NeoPixel
  Serial.println("Neopixel running");
}



void loop() 
{ 
 
  webSocket.loop();
  if(HandleClient())
  {
    return;
  }
  
  String sResponse,sHeader;
 
    sHeader  = "HTTP/1.1 200 OK\r\n";
    sHeader += "Content-Length: ";
    sHeader += website.length();
    sHeader += "\r\n";
    sHeader += "Content-Type: text/html\r\n";
    sHeader += "Connection: close\r\n";
    sHeader += "\r\n";
  // Send the response to the client
  client.print(sHeader);
  client.print(website);
  
  // and stop the client
  client.stop();
  Serial.println("Client disonnected");
}
