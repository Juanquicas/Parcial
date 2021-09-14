#include "Sonido.h"
#include <Arduino.h>
Sonido::Sonido(byte pinSo)
{
this->pinSo=pinSo;
}

void Sonido:: init()
{
    pinMode(pinSo,INPUT);
    


}

boolean Sonido:: read()
{
    estado=digitalRead(pinSo);
    return estado;
}