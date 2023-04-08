#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <iostream>
#include "Weapon.h"
using namespace std;

class Character
{
    string name;
    int hp;
public:
    static bool is_die;
    vector<Weapon*> weapons;
    Character(string name);
    void pickUpWeapon(int n);
    void attack(Character* c);
    void downHp(int n);
    string getName();
    int getHp();
    void printInfo();
    
};

#endif