#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
using namespace std;

class Engine {
private:
    int horsePower;
    double displacement;

public:
    Engine(int hp = 0, double disp = 0.0);
    void setEngine(int hp, double disp);
    int getHorsePower() const;
    double getDisplacement() const;
};

#endif

