#ifndef CHEF_H
#define CHEF_H

#include <string>


class Chef
{
protected: std::string name;

public:
    Chef(std::string n);
    ~Chef();

    void makeSalad();
    void makeSoup();

    std::string getName() const;
   void setName(const std::string &newName);
};

#endif // CHEF_H
