#include "ItalianChef.h"
#include <iostream>
using namespace std;


ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}


ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() {
    return name; //
}
