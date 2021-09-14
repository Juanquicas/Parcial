# ifndef LASER_H
# define LASER_H 
# include <Arduino.h>

class Laser
{
    private: 
    byte pinLa;

    public:
    Laser(byte pinLa);
    void init();
    void read();


};
#endif