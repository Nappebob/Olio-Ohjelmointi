#include "dog.h"


void Dog::callOut() {
    cout << "Dog is barking" << endl;
}

Dog::~Dog() {
    cout << "Dog destroyed" << endl;
}
