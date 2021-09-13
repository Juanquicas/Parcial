#include <Arduino.h>
#include <Ultra.h>
#include <Photo.h>
Ultra u(1,2);
Photo p(3);

void setup()
{
u.init();


}

void loop()
{
u.read();
}
