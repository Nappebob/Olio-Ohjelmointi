#ifndef WHEEL_H
#define WHEEL_H

#include<iostream>
using namespace std;

class Wheel {
private:
    int size;
    std::string type;

public:
    Wheel(int s = 0, const std::string& t = "");
    void setWheel(int s, const std::string& t);
    int getSize() const;
    std::string getType() const;
};

#endif
