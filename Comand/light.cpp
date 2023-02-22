#include "light.h"

Light::Light(string location) {
    this->location = location;
}

void Light::on() {
        cout << location.c_str() << " light is on" << endl;
}

void Light::off() {
    cout << location.c_str() << " light is off" << endl;
}
