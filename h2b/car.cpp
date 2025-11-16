#include "car.h"

using namespace std;

Car::Car(string b, string m, int v)
{
    brand=b;
        model=m;
            yearModel=v;
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

void Car::tulostaTiedot()
{
    cout<<"Brandi:" << brand <<" Malli:" << model <<" Vuosimalli:" << yearModel<< endl;
}

