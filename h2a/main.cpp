#include "car.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{


    Car *objectCar1=new Car("Toyota", "Corolla", 2020);
   objectCar1->display();
    delete objectCar1;
   objectCar1=nullptr;

    unique_ptr<Car> objectCar2 =make_unique<Car>("Volvo", "V60", 2019);
   objectCar2->display();

    return 0;
}
