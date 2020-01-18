#ifndef BUEIRO_h
#define BUEIRO_h

#include <Arduino.h>
#include <HX711.h>
#include <Ultrassonic.h>
#include <stdlib.h>
#include <string.h>

class Bueiro{

    private:

    string id, bairro, rua;
    char tipoDeBueiro;

    long tara;

    float nivel;
    float carga;
    
    int pinoTrigger;
    int pinoEcho;
    int pinoDT;
    int pinoCSK;

    public:

    Bueiro(int trgr, int echo, int dt, int sck);

    void atualizarMedicao();

    float getNivel;
    float getCarga;
}

#endif
