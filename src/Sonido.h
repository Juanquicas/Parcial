#ifndef SONIDO_H
#define SONIDO_H
# include <Arduino.h>

class Sonido 
{
private:
    byte pinSo;
    boolean estado;

public:
Sonido(byte pinSo);
void init();
boolean read();





};
#endif