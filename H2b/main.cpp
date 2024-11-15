#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{

    vector<Car>carList;

    Car objectCar0("Audi","A3",2014);
    Car objectCar1("BMW","330e",2021);
    Car objectCar2("Mercedes-Benz","CLK",2018);


    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    //tulostetaan toisen alkion tiedot
    objectCar1.printData();

    //tulostetaan kaikkien autojen tiedot
    cout<<endl;
    cout<<"Tulostetaan kaikkien autojen tiedot:"<<endl;
    cout<<endl;

    for(int x=0; x<=2; x++){
        carList[x].printData();
    }





    return 0;
}
