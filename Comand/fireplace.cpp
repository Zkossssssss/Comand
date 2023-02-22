#include "fireplace.h"

Fireplace::Fireplace(string location)
{
    this->location = location;
}

void Fireplace::on() {
        cout << location.c_str() << " fire is on" << endl;
}

void Fireplace::off() {
    cout << location.c_str() << " fire is off" << endl;
}
