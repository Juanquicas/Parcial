// definiciones
// que sea el nombre del sensor , con "_" H
#ifndef ULTRA_H 
#define ULTRA_H
#include <Arduino.h>
// puede tener diferente nombre 
class Ultra 
{
    private:
    byte pinTrigger;
    byte pinEcho;
    int dist;

    public:
    Ultra(byte pinTrigger, byte pinEcho);
    void init();
    int read();

    // lo que diferencia es los pines 




};
#endif