#ifndef __SWORD_H__
#define __SWORD_H__
#include <iostream>
using namespace std;

class Sword : public Weapon
{
public:
    Sword();
    void attack();
    ~Sword();
};

#endif