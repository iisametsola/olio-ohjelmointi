#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{


    Car *objectCar1=new Car("Toyota", "Corolla", 2020);
   objectCar1->display();
    delete objectCar1;
   objectCar1=nullptr;


    double w,h;

    Rectangle* rect = new Rectangle(10.5, 5.2);

    rect->display();

    cout << "Pinta-ala = " << rect->getArea() << endl;
    cout << "Ymparysmitta = " << rect->getCircum() << endl;
    cout<<"_________________"<<endl;


    delete rect;
    rect = nullptr;

    unique_ptr<Student> student =make_unique<Student>();
    student->setName("Iisa");
    student->setStudentNumber(250601);
    student->setAverage(4.1);

    cout<< "Nimi: " << student->getName() <<endl;
    cout<< "Opiskelijanumero: " << student->getStudentNumber() <<endl;
    cout<< "Keskiarvo: " << student->getAverage() << endl;
    return 0;
}
