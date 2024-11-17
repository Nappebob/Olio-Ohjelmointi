#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>
using namespace std;

class ItalianChef : public Chef {
public:

    ItalianChef(string name);

    ~ItalianChef();

    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
