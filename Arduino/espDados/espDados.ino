#include "Bueiro.h"
#include <ArduinoJson.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* SSID = "L. Veloso";
const char* PASS = "krxr8572";
HTTPClient http;

String local = "http://bueiro-verde.herokuapp.com/";
String upload = "upload";
 
void setup()
{
  Serial.begin(115200);
  //while(!Serial) continue;

  WiFi.begin(SSID, PASS);

  while(WiFi.status() != WL_CONNECTED){

    delay(500);
    http.begin(local + upload);
    http.addHeader("Content-Type", "application/json");
    http.end();
    Serial.println("Espere");
    delay(2000);
  }
 
}
 
void loop()
{
  
  StaticJsonDocument<200> doc;

 deserializeJson(doc, Serial);


  float carga = doc["CARGA"];
  float nivel = doc["NIVEL"];
  String id = doc["ID"];
  String bairro = doc["BAIRRO"];
  String rua = doc["RUA"];
  String tipo = doc["TIPO"];
  String json = String("{") +
            "\"CARGA\":" + String(carga) + "," +
            "\"NIVEL\":"+ String(nivel) + "," +
            "\"ID\":"+ "\"" + id + "\"" + "," +
            "\"BAIRRO\":"+ "\"" + bairro + "\"" + "," +
            "\"RUA\":"+ "\"" + rua + "\"" + "," +
            "\"TIPO\":"+ "\"" + tipo + "\"" + "}";

  Serial.println(String(carga) + " " + nivel + " " + id + " " + bairro + " " + rua + " " + tipo);
  Serial.println();

  http.begin("http://bueiro-verde.herokuapp.com/upload");
  http.addHeader("Content-Type", "application/json");
  http.POST(json);
  http.end();
  
  delay(500);
}
