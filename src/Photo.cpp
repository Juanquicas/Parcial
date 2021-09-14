# include "Photo.h"
# include <Arduino.h>

Photo::Photo(byte pinBut)
{
    this->pinBut=pinBut;
}


void Photo :: init()
{
    Serial.begin(9600);
    pinMode(pinBut,INPUT);
    
}

int Photo :: read()
{
    val=digitalRead(pinBut);
    return val;
}