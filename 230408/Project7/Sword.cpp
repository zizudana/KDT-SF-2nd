#include "Weapon.h"
#include "Sword.h"

Sword::Sword()
{
    this->power = 5;
    this->num = 3;
}
void Sword::attack()
{
    this->num -= 1;
    cout << "찌르기!!" << endl;
}
Sword::~Sword(){}
