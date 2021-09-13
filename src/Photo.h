# ifndef PHOTO_H
# define PHOTO_H
#  include <Arduino.h>

class Photo
{
private: 
    byte pinBut;
    int val;

    public: 
    Photo(byte pinBut);
    void init();
    void read();



};
# endif