#include "Bueiro.h"

#define DIVISOR 27.6233/2
#define ESCALA 1500
#define ALTURADOCESTO 100
#define FATORCALIBRACAO -4500

#define ARCH_ESPRESSIF (defined(ARDUINO_ARCH_ESP8266) || defined(ARDUINO_ARCH_ESP32))

Bueiro::Bueiro(char tipo)
{
    _tipoDeBueiro = tipo;
}

void Bueiro::start()
{
    _sensorDeCarga.begin(8, 9);
    _sensorDeCarga.tare();
    _sensorDeCarga.set_scale(FATORCALIBRACAO);
}

void Bueiro::atualizarMedicao()
{
    long microsec = _sensorUltrassonico.timing();
    _nivel = _sensorUltrassonico.convert(microsec, Ultrasonic::CM);

    if (_sensorDeCarga.is_ready())
    {
        _carga = _sensorDeCarga.get_units(); //retorna a leitura da variavel escala com a unidade quilogramas
    }
}

float Bueiro::getNivel()
{
    return _nivel;
}

float Bueiro::getCarga()
{
    return _carga;
}
