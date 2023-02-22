#include "ceilingfan.h"

CeilingFan::CeilingFan(string location) {
    this->location = location;
}

void CeilingFan::high() {
    // turns the ceiling fan on to high
    level = HIGH;
    cout << location.c_str() << " ceiling fan is on high" << endl;

}

void CeilingFan::medium() {
    // turns the ceiling fan on to medium
    level = MEDIUM;
    cout << location.c_str() << " ceiling fan is on medium" << endl;
}

void CeilingFan::low() {
    // turns the ceiling fan on to low
    level = LOW;
    cout << location.c_str() << " ceiling fan is on low" << endl;
}

void CeilingFan::off() {
    // turns the ceiling fan off
    level = 0;
    cout << location.c_str() << " ceiling fan is off" << endl;
}

int CeilingFan::getSpeed() {
    return level;
}
