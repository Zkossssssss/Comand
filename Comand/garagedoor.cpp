#include "garagedoor.h"

GarageDoor::GarageDoor(string location) {
    this->location = location;
}

void GarageDoor::up() {
    cout << location.c_str() << " garage Door is Open" << endl;
}

void GarageDoor::down() {
    cout << location.c_str() << " garage Door is Closed" << endl;
}

void GarageDoor::stop() {
    cout << location.c_str() << " garage Door is Stopped" << endl;
}

void GarageDoor::lightOn() {
    cout << location.c_str() << " garage light is on" << endl;
}

void GarageDoor::lightOff() {
    cout << location.c_str() << " garage light is off" << endl;
}
