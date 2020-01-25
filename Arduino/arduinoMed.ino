#include <SoftwareSerial.h>

#include "Bueiro.h"
#include <ArduinoJson.h>

SoftwareSerial monitorSerial(11, 10);
 
//Define os pinos para o trigger e echo
 
//Inicializa o sensor nos pinos definidos acima
//Ultrasonic ultrasonic(pino_trigger, pino_echo);
//Bueiro baleia(pino_trigger, pino_echo, pino_dt, pino_sck, 'a');
Bueiro bueiro("Retangular", "BSA001", "Bessa", "Aquela lá");
 
void setup()
{
  Serial.begin(115200);
  Serial.println("Lendo dados do sensor...");

  monitorSerial.begin(115200);
  monitorSerial.println("Teste de mensagem");
  //carga = 0;

}
 
void loop()
{
  //Le as informacoes do sensor, em cm e pol

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

  Serial.println();
  delay(1000);
  
}
