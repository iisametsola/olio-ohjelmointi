#include "chef.h"
#include <iostream>

Chef::Chef(std::string n) : name(n) {
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}
std::string Chef::getName() const
{
    return name;
}

void Chef::setName(const std::string &newName)
{
    name = newName;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
