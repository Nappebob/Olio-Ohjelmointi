#include "Wheel.h"

using namespace std;

Wheel::Wheel(int s, const string& t) : size(s), type(t) {}

void Wheel::setWheel(int s, const string& t) {
    size = s;
    type = t;
}

int Wheel::getSize() const {
    return size;
}

string Wheel::getType() const {
    return type;
}
