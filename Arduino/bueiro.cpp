#include "bueiro.h"

#define DIVISOR 27.6233/2
#define ESCALA

#define ARCH_ESPRESSIF (defined(ARDUINO_ARCH_ESP8266) || defined(ARDUINO_ARCH_ESP32))


Bueiro(int trgr, int echo, int dt, int sck, char tipo, byte times)
{
    pinoTrigger = trgr;
    pinoEcho = echo;
    pinoDT = dt;
    pinoSCK = sck;

    pinMode(trgr, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(sck, OUTPUT);
    pinMode(dt, INPUT);

    long somatorio = 0;

    for(byte i = 0; i < times; i++)
    {
        somatorio += read();
        delay(0);
    }

    tara = somatorio / times;
}

void atualizarMedicao(byte times)
{
    digitalWrite(_trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(_trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trigPin, LOW);

    long periodoUltrassonico = pulseIn(pinoEcho, HIGH);

    float distancia = periodoUltrassonico / DIVISOR;

    nivel = alturaDoCesto - distancia;

    long somatorio = 0;

    for(byte i = 0; i < times; i++)
    {
        somatorio += read();
        delay(0);
    }

    long media = (somatorio / times) - tara;

    carga = media / ESCALA;
}

float getNivel
{
    return nivel;
}

float getCarga
{
    return carga;
}