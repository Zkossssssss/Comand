#include "stereo.h"

Stereo::Stereo(string location) {
    this->location = location;
}

void Stereo::on() {
    cout << location.c_str() << " stereo is on" << endl;
}

void Stereo::off() {
    cout << location.c_str() << " stereo is off" << endl;
}

void Stereo::setCD() {
    cout << location.c_str() << " stereo is set for CD input" << endl;
}

void Stereo::setDVD() {
    cout << location.c_str() << " stereo is set for DVD input" << endl;
}

void Stereo::setRadio() {
    cout << location.c_str() << " stereo is set for Radio" << endl;
}

void Stereo::setVolume(int volume) {
    // code to set the volume
    // valid range: 1-11 (after all 11 is better than 10, right?)
    cout << location.c_str() << " Stereo volume set to " << volume << endl;
}
