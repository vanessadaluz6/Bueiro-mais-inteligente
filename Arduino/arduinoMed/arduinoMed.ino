#include <SoftwareSerial.h>

#include "Bueiro.h"
#include <ArduinoJson.h>

SoftwareSerial monitorSerial(11, 10);
 
Bueiro bueiro("Retangular", "BSA001", "Bessa", "Aquela lá");
 
void setup()
{
  Serial.begin(115200);
  Serial.println("Lendo dados do sensor...");

  monitorSerial.begin(115200);
  monitorSerial.println("Teste de mensagem");

}
 
void loop()
{

  bueiro.atualizarMedicao();
  float nivel = bueiro.getNivel();
  float carga = 0;

  StaticJsonDocument<200> root;
  
  root["NIVEL"] = nivel;
  root["CARGA"] = carga;
  root["ID"] = bueiro.getId();
  root["BAIRRO"] = bueiro.getBairro();
  root["RUA"] = bueiro.getRua();
  root["TIPO"] = bueiro.getTipo();
  
  serializeJson(root, monitorSerial);
  serializeJson(root, Serial);

  root.clear();

  Serial.println();
  delay(1000);
  
}
