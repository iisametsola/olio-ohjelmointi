#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"

using namespace std;


int main()
{
    int a=5;
    int b=6;
    int *pointer_a=&a;
    cout << "a:n arvo on: " <<a << endl;
    cout << "ja osoite on: " <<pointer_a << endl;

    cout << "---------------------------" << endl;

    int *pointer_A=&b;
    cout << "Pointterin osoittama osoite on: " <<pointer_A << endl;
    cout << "Pointterin osoittama muistipaikan arvo on: " <<*pointer_A << endl;

    cout << "---------------------------" << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " <<&refA << endl;
    cout << "refA:n osoittama muistipaikan arvo on: " <<refA << endl;

    cout << "---------------------------" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    cout << "---------------------------" << endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
