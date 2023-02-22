#ifndef LIGHT_H
#define LIGHT_H

#include <string>
#include <iostream>

using namespace std;

class Light {
public:
    Light(string);
    string location;
    void on();
    void off();
};

#endif // LIGHT_H
