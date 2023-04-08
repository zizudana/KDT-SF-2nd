#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <iostream>
using namespace std;

class Weapon
{
public:
    int power; //공격력
    int num; //공격가능횟수
    virtual void attack() = 0;
};

#endif