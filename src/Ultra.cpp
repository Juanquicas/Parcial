#include "Ultra.h"
#include <Arduino.h>
// diferentes instancias de un mismo objeto

Ultra::Ultra(byte pinEcho, byte pinTrigger)
{
// "this-> hace la diferencia entre el atributo pin de la clase y la variable local pin creada desde el parametro
this->pinTrigger = pinTrigger;
this->pinEcho= pinEcho;

}

// init , inicializacion de los sensores 
// si se t
void Ultra:: init()
{
  pinMode(pinTrigger, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(pinEcho, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // solo si se inprime por medio de la consola serial

    // esto puede ir abajo
    // Clears the trigPin condition
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(10);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
}
int Ultra:: read()
{
  
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger,LOW);
  int time =pulseIn(pinEcho, HIGH, 5000);
  dist = time*0.1715;
  return dist;
  //Serial.println(dist);
  //delay(500);
}