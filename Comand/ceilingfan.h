#ifndef CEILINGFAN_H
#define CEILINGFAN_H

#include <string>
#include <iostream>

using namespace std;

class CeilingFan {
protected:
    int level;
    static const int HIGH = 2;
    static const int MEDIUM = 1;
    static const int LOW = 0;
public:
    CeilingFan(string location);
    string location;
    void high();
    void medium();
    void low();
    void off();
    int getSpeed();
};

#endif // CEILINGFAN_H
