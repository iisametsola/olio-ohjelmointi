#include "car.h"
#include <iostream>

#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("Volvo", "V60", 2019);
    carList.emplace_back("Toyota", "Corolla", 2020);
    carList.emplace_back("Mitsubishi", "Outlander", 2021);
    cout<<"Toinen alkio:\n";
    carList[1].tulostaTiedot();
    cout<<"Kaikki alkiot:\n";

    for(int x=0; x<=2; x++){
      carList[x].tulostaTiedot();
    }

    return 0;
}
