#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {
}

void Animal::callOut() {
    cout << "Animal makes a sound" << endl;
}

Animal::~Animal() {
    cout << "Animal destroyd" << endl;
}

