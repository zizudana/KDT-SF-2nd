#include "Weapon.h"
#include "Gun.h"

Gun::Gun()
{
    this->power = 10;
    this->num = 1;
}
void Gun::attack()
{
    this->num -= 1;
    cout << "총쏘기!!" << endl;
}
Gun::~Gun() {}