#ifndef BUEIRO_h
#define BUEIRO_h

// #define pino_trigger 4
// #define pino_echo 5
// #define pino_DT 8
// #define pino_SCK 9

#include "Arduino.h"
#include "Ultrasonic.h"
#include <HX711.h>
#include <stdlib.h>
#include <string.h>

class Bueiro{

    private:

    String _id, _bairro, _rua;
    char _tipoDeBueiro;
    
    Ultrasonic _sensorUltrassonico;
    HX711 _sensorDeCarga;

    float _nivel;
    float _carga;

    public:

    Bueiro(char tipo);

    void atualizarMedicao();

    void start();

    float getNivel();
    float getCarga();
};

#endif