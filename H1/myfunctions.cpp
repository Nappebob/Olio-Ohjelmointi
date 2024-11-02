#include <iomanip>
#include <iostream>
#include "myfunctions.h"
using namespace std;


void calcSum(float a, float b) {
    cout << "Sum of numbers: " << fixed << setprecision(2) << a + b << endl;
}


void calcDiv(float a, float b) {
    if (b == 0) {
        cout << "Error: divisor cannot be zero." << endl;
    } else {
        cout << "Quotient of numbers: " << fixed << setprecision(2) << a / b << endl;
    }
}


float retSum(float a, float b) {
    return a + b;
}


float retDiv(float a, float b) {
    if (b == 0) {
        cout << "Error: divisor cannot be zero." << endl;
        return 0;
    } else {
        return a / b;
    }
}
