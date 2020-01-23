#include "bueiro.h"

Bueiro::Bueiro()
{

}

float Bueiro::nivel() const
{
    return _nivel;
}

void Bueiro::setNivel(float nivel)
{
    _nivel = nivel;
}

float Bueiro::carga() const
{
    return _carga;
}

void Bueiro::setCarga(float carga)
{
    _carga = carga;
}

QString Bueiro::tipoDeBueiro() const
{
    return _tipoDeBueiro;
}

void Bueiro::setTipoDeBueiro(QString tipoDeBueiro)
{
    _tipoDeBueiro = tipoDeBueiro;
}

QString Bueiro::id() const
{
    return _id;
}

void Bueiro::setId(const QString &id)
{
    _id = id;
}

QString Bueiro::bairro() const
{
    return _bairro;
}

void Bueiro::setBairro(const QString &bairro)
{
    _bairro = bairro;
}

QString Bueiro::rua() const
{
    return _rua;
}

void Bueiro::setRua(const QString &rua)
{
    _rua = rua;
}
