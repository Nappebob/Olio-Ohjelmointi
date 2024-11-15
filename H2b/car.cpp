#include "car.h"

Car::Car(string b, string m, int y){
    this->setBrand(b);
    this->setModel(m);
    this->setYearModel(y);
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year model: " << yearModel << endl;
    cout << "--------------------------"<<endl;
}

Car::Car() {}
