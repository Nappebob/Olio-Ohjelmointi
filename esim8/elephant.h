#ifndef ELEPHANT_H
#define ELEPHANT_H


#include "animal.h"

class Elephant : public animal
{
private:
    string zooName;
public:
    Elephant();
    string getZooName() const;
    void setZooName(const string &newZooName);
};

#endif // ELEPHANT_H
