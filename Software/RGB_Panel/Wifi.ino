
void WiFiStart()
{
  Serial.print("Verbinden zu: ");
  Serial.println(ssid);
  WiFi.config(ip, gateway, subnet, dns);
  delay(200);
  WiFi.begin(ssid, password);
  Serial.print("Verbinden ");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi verbunden");
  
  // Start the server
  server.begin();
  Serial.println("Server online");

  // Print the IP address
  Serial.println(WiFi.localIP());
}

bool HandleClient()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    WiFiStart();
  }
  
  client = server.available();
  if (!client) 
  {
    return true;
  }
  webSocket.disconnect();
  Serial.println("new client");
  return false;
}




int16_t thisRead = 0; // The current pot value
int16_t lastRead = 0; // The last pot value (this is used to prevent sending duplicate values)
uint8_t counter = 0;  // Used to limit how often we send pot updates via websockets^
String Pfad = "",Parameter = "", Befehl = "";

unsigned int iRed = 0, iGreen = 0, iBlue = 0;
unsigned char Red = 0, Green = 0, Blue = 0, Socket_counter = 0;

void webSocketEvent(uint8_t num, WStype_t type, uint8_t * payload, size_t lenght) {

  switch(type) {

    // Runs when a user disconnects
    case WStype_DISCONNECTED: {
      Serial.printf("User #%u - Disconnected!\n", num);
      break;
    }
    
    // Runs when a user connects
    case WStype_CONNECTED: {
      IPAddress ip = webSocket.remoteIP(num);
      Serial.printf("--- Connection. IP: %d.%d.%d.%d Namespace: %s UserID: %u\n", ip[0], ip[1], ip[2], ip[3], payload, num);
      
      // Send last pot value on connect
      String message = String(lastRead);
      webSocket.broadcastTXT(message);
      break;
    }

    // Runs when a user sends us a message
    case WStype_TEXT: {
      String incoming = "";
      char Data[50];
      int value;
      for (int i = 0; i < lenght; i++) {
        incoming.concat((char)payload[i]);
      }
     // Serial.println(incoming);
      //Serial.println();
     
      switch(Socket_counter)
      {
        case 0:
          iRed = incoming.toInt();
          Red = char(iRed);
        break;
        case 1:
          iGreen = incoming.toInt();
          Green = char(iGreen);
        break;
        case 2:
          iBlue = incoming.toInt();
          Blue = char(iBlue);
          for(int i = 0; i < 45;i++)
          {
            pixels.setPixelColor(i,pixels.Color(Red,Green,Blue));
          }
          Serial.print("R: ");
          Serial.print(Red);
          Serial.print(", G: ");
          Serial.print(Green);
          Serial.print(", B: ");
          Serial.print(Blue);
          Serial.println();
          pixels.show(); // Durchführen der Pixel-Ansteuerung
        break;
      }

      Socket_counter++;
      if(Socket_counter == 3)
      {
        Socket_counter = 0;
      }
      
      break;
    }
    
  }

}
