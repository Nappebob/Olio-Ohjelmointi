#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class animal
{
private:
    int weight;
    string color;

public:
    animal();
    int getWeight() const;
    void setWeight(int newWeight);
    string getColor() const;
    void setColor(const string &newColor);
    ~animal();

protected:
    void Test();
};

#endif // ANIMAL_H
