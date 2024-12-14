#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int* myPointer = &a;
    int* myPointer2 = &b;
    int& refA = a;




    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;
    cout << "Pointterin osoittama osoite on: " << myPointer2 << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer2 << endl;
    cout << endl;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;
    cout <<"**************************************************"<< endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
