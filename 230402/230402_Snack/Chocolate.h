#ifndef __CHOCOLATE_H__
#define __CHOCOLATE_H__

#include "Snack.h"

class Chocolate : public Snack {
    std::string shape;
public:
    Chocolate();
    void setShape(std::string shape);
    void printInfo();
    
};

#endif