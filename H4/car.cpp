#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(const string& b, const string& m) : brand(b), model(m), engine(0, 0.0), wheels(4) {}

void Car::setEngine(int hp, double disp) {
    engine.setEngine(hp, disp);
}

void Car::setWheels(int size, const string& type) {
    for (auto& wheel : wheels) {
        wheel.setWheel(size, type);
    }
}

void Car::printDetails() const {
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << engine.getHorsePower() << " hp, " << engine.getDisplacement() << " L" << endl;
    for (size_t i = 0; i < wheels.size(); ++i) {
        cout << "Rengas " << (i + 1) << ": " << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
    }
}

