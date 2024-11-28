#include "Engine.h"

using namespace std;

Engine::Engine(int hp, double disp) : horsePower(hp), displacement(disp) {}

void Engine::setEngine(int hp, double disp) {
    horsePower = hp;
    displacement = disp;
}

int Engine::getHorsePower() const {
    return horsePower;
}

double Engine::getDisplacement() const {
    return displacement;
}
