# ifndef LASER_H
# define LASER_H 
# include <Arduino.h>

class Photo
{
    private: 
    byte pinLa;

    public:
    Photo(byte pinLa);
    void init();
    void read();


};
#endif