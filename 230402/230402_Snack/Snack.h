#ifndef __SNACK_H__
#define __SNACK_H__

#include <iostream>

class Snack {
protected:
    int price;
    std::string name;
    std::string company;
public:
    static int num;
    std::string getName();
    virtual void printInfo();
};

#endif