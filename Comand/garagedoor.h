#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <string>
#include <iostream>

using namespace std;

class GarageDoor {
protected:
    string location;
public:
    GarageDoor(string location);
    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();
};

#endif // GARAGEDOOR_H
