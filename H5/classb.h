#ifndef CLASSB_H
#define CLASSB_H
#include<iostream>
using namespace std;

class ClassB
{
private:
    string info;

public:
    ClassB();

    void setInfo(const string &newInfo);
    string getInfo() const;
};

#endif // CLASSB_H
