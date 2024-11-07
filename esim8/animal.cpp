#include "animal.h"

int animal::getWeight() const
{
    return weight;
}

void animal::setWeight(int newWeight)
{
    weight = newWeight;
}

string animal::getColor() const
{
    return color;
}

void animal::setColor(const string &newColor)
{
    color = newColor;
}

animal::~animal()
{
 cout<<"Animal olio tuhottiin"<<endl;
}

animal::animal() {

    cout<<"Animal olio luotiin"<<endl;
}
