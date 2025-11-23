#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(std::string n);
    ~ItalianChef();

    void makePasta();
};

#endif

