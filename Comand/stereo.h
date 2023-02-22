#ifndef STEREO_H
#define STEREO_H

#include <string>
#include <iostream>

using namespace std;

class Stereo {
public:
    Stereo(string location);
    string location;
    void on();
    void off();
    void setCD();
    void setDVD();
    void setRadio();
    void setVolume(int volume);
};

#endif // STEREO_H
