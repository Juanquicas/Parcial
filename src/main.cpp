// este programa tiene 10 objetos de los cuales 3 son disparadores laser 
// que se prenden cuando ciertos protocolos de seguridad son traspasados:

// que la puerta photosensrial este abierta
// que la distancia sea menor a 30 cm por todos los lados
// y que haya ruido de "pasos"

#include <Arduino.h>
#include <Ultra.h>
#include <Photo.h>
#include <Laser.h>
#include <Sonido.h>
// esto es para el sensor de temp
#include "DHT.h"
#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

Ultra u(1,2); //1
Photo p(3); //2
Laser la(4); //3
Laser la1(8); // 4
Laser la2(9); // 5
Sonido s(6); //6
// 7 temperatura
Ultra u2(10,11);//8
Photo p2(12);//9
Sonido s2(13);
void disparar();
void getTemp();


void setup()
{
u.init();
p.init();
la.init();
s.init();
Serial.begin(9600);
dht.begin();



}

void loop()
{
    
if(u.read()>10 || s.read()== true  || p.read()>0 || u2.read()>10 || s2.read()== true  || p2.read()>0)
{
    Serial.println("NOS ESTAN RABANDO");
    disparar();

}
else
{
    Serial.println("No nos estan robando");
    int t=dht.readTemperature();
    Serial.print("la temp de hoy es de:");
    Serial.println(t);
 

}
delay(500);
}


void disparar(){
    la.read();
    la1.read();
    la2.read();
}

