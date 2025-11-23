#include "chef.h"
#include "italianchef.h"
#include <iostream>


int main()
{
    {
    Chef objectChef("Gordon Ramsay");


    objectChef.makeSalad();
    objectChef.makeSoup();

}
    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    std::cout << "ItalianChef name: " << italianChef.getName() << std::endl;

    return 0;
}
