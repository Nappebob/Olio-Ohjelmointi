#include <iomanip>
#include <iostream>
#include "myfunctions.h"
using namespace std;

int main() {
    float a, b;

    // Kysytään käyttäjältä luvut ja tallennetaan ne
    cout << "Give 1st number: ";
    cin >> a;
    cout << "Give 2ns number: ";
    cin >> b;

    // Kutsutaan tulostavia funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan palauttavia funktioita ja tulostetaan niiden palauttamat arvot
    float sum = retSum(a, b);
    float division = retDiv(a, b);

    cout << "retSum sum is: " << fixed << setprecision(2) << sum << endl;
    cout << "retDiv divided: " << fixed << setprecision(2) << division << endl;

    return 0;
}
