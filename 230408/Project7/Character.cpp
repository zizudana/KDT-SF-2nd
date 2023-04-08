#include "Character.h"
#include "Gun.h"
#include "Sword.h"
using namespace std;

bool Character::is_die = false;

Character::Character(string name)
{
    this->name = name;
    this->hp = 30;
}
Character::~Character()
{
    //new_weapon으로 생성한 동적메모리 해제하기
    for(int i=0;i<this->weapons.size();i++){
        delete this->weapons[i];
    }
    this->weapons.clear();
}
void Character::pickUpWeapon(int n)
{
    Weapon* new_weapon;
    if (n==1)
        new_weapon = new Sword();
    else
        new_weapon = new Gun();
    this->weapons.push_back(new_weapon);
}
void Character::attack(Character* c) {
    if (this->weapons.empty()){
        cout << "무기가 없습니다." <<endl;
    }
    else {
        this->weapons.back()->attack();
        c->downHp(this->weapons.back()->power);
        cout << this->getName() << " ---> " << c->getName() << " 공격"<<endl;
        cout << c->getName() << "의 HP가 " << this->weapons.back()->power << "만큼 감소합니다" << endl;
        if (c->getHp() <= 0)
        {
            Character::is_die = true;
            cout << c->getName() <<" 죽었습니다." << endl;
            cout << this->getName() << " 승리!" << endl;
        }
        if (this->weapons.back()->num <= 0)
        {
            //메모리 해제 후 삭제하기
            delete weapons.back();
            this->weapons.pop_back();
        }
    }
}
void Character::downHp(int n)
{
    this->hp -= n;
}

string Character::getName(){
    return name;
}
int Character::getHp(){
    return this->hp;
}
void Character::printInfo() {
    cout << "이름 : " << name << "HP: " << hp << endl;
}

