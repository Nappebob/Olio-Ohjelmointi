#ifndef CAR_H
#define CAR_H

#include<iostream>
#include <vector>
#include "Engine.h"
#include "Wheel.h"

using namespace std;

class Car {
private:
    string brand;
    string model;
    Engine engine;
    vector<Wheel> wheels;

public:
    Car(const string& b, const string& m);
    void setEngine(int hp, double disp);
    void setWheels(int size, const string& type);
    void printDetails() const;
};

#endif

