# include "Laser.h"
# include <Arduino.h>

Laser:: Laser(byte pinLa)
{
    this->pinLa= pinLa;

}

void Laser :: init()
{
pinMode(pinLa,OUTPUT);
Serial.begin(9600);
digitalWrite(pinLa,LOW);


}


void Laser:: read()
{
    // esto solo dispara el laser
    digitalWrite(pinLa,HIGH);
    delay(1500);
    digitalWrite(pinLa,LOW);
    delay(1000);
}