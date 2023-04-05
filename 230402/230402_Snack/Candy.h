#ifndef __CANDY_H__
#define __CANDY_H__

#include "Snack.h"
class Candy : public Snack::Snack {
    std::string taste;
public:
    Candy();
    void setTaste(std::string taste);
    void printInfo();
};
#endif