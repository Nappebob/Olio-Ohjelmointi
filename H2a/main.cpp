#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car objCar_1;

    objCar_1.setBrand("BMW");
    objCar_1.setModel("330e Xdrive");
    objCar_1.setYearModel(2021);

    objCar_1.printData();


    cout<<endl;



    Rectangle* objRectangle = new Rectangle();
    objRectangle->setHeight(32.02);
    objRectangle->setWidth(17.45);
    cout << "--------------------------"<<endl;
    cout << "Pinta-ala: " << objRectangle->getArea() << endl;
    cout << "Suorakulmion ymparysmitta: " << objRectangle->getCircum() << endl;
    cout << "--------------------------"<<endl;
    delete objRectangle;
    objRectangle = nullptr;


    cout<<endl;


    unique_ptr<Student> student_1 = make_unique<Student>();

    student_1->setName("Matti Mainio");
    student_1->setStudentNumber(23);
    student_1->setAverage(7.8);

    cout << "--------------------------"<<endl;
    cout << "Opiskelijan nimi: " << student_1->getName() << endl;
    cout << "Opiskelijanumero: " << student_1->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student_1->getAverage() << endl;
    cout << "--------------------------"<<endl;



    unique_ptr<Student> student_2 = make_unique<Student>();
    student_2->setName("Esa Erikoinen");
    student_2->setStudentNumber(102);
    student_2->setAverage(9.4);

    cout << "--------------------------"<<endl;
    cout << "Opiskelijan nimi: " << student_2->getName() << endl;
    cout << "Opiskelijanumero: " << student_2->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student_2->getAverage() << endl;
    cout << "--------------------------"<<endl;







    return 0;
}
