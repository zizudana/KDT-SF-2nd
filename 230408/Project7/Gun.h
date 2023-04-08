#ifndef __GUN_H__
#define __GUN_H__
#include <iostream>
using namespace std;

class Gun : public Weapon
{
public:
    Gun();
    void attack();
};

#endif