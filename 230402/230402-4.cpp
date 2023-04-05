#include <iostream>
#include <vector>
using namespace std;

class Weapon
{
public:
    int power; //공격력
    int num; //공격가능횟수
    Weapon()
    {
        this->power = 100;
        this->num = 10;
    }
    virtual void attack() = 0;
};

class Sword : public Weapon
{
public:
    void attack()
    {
        this->num -= 3;
        cout << "찌르기" << endl;
    }
};

class Gun : public Weapon
{
public:
    void attack()
    {
        this->num -= 1;
        cout << "총쏘기" << endl;
    }
};

class Character
{
    string name;
    int hp;
    int level; 
public:
    Weapon* my_sword;
    Weapon* my_gun;
    Character(string name)
    {
        this->name = name;
        this->hp = 100;
        this->level = 10;
        my_sword = new Sword();
        my_gun = new Gun();
    }
    void downHp(int n)
    {
        this->hp -= n;
    }
    void downLevel(int n)
    {
        this->level -= n;
    }
    string getName(){
        return name;
    }
    void printInfo() {
        cout << "이름 : " << name << endl;
        cout << "공격력 : " << hp << endl;
        cout << "레벨 : " << level << endl;
        cout << "칼 공격력, 공격가능횟수 : " << my_sword->power << " " << my_sword->num << endl;
        cout << "총 공격력, 공격가능횟수 : " << my_gun->power << " " << my_gun->num << endl;
    }
    void attack(Character* c, int n) {
        if (n==1)
        {
            c->downHp(5);
            my_sword->attack();
        }
        else{
            c->downHp(3);
            my_gun->attack();
        }
    }

};

int main(){
    string name;
    cout << "캐릭터의 이름을 입력해주세요 : ";
    cin >> name;
    Character me(name);

    int n, w;
    string user_input;
    vector<Character*> characters;
    Character* new_c;
    Character* user;
    while(1)
    {
        cout << "\n(0: 종료 1: 새 캐릭터 생성 2: 공격 3: 전체 캐릭터 정보 보기) >>";
        cin >> n;
        if (n == 0)
            break;
        switch (n)
        {
            case 1: 
                cout << "생성할 캐릭터 이름을 입력해주세요 ";
                cin >> user_input;
                new_c = new Character(user_input);
                characters.push_back(new_c);
                break;
            case 2:
                cout << "공격할 캐릭터 이름을 입력해주세요 ";
                cin >> user_input;
                for (int i=0; i<characters.size();i++)
                {
                    if (characters.at(i)->getName() == user_input)
                    {
                        user = characters.at(i);
                        cout << "무기를 선택해 주세요(1: 칼 2: 총)" << endl;
                        cin >> w;
                        if (w==1){
                            me.attack(user,1);
                        }
                        else{
                            me.attack(user,2);
                        }
                    }
                }
                break;
            case 3:
                cout << "\n내 캐릭터 정보\n";
                me.printInfo();
                cout << "\n다른 캐릭터들 정보\n";
                for (int i=0;i<characters.size();i++)
                    characters[i]->printInfo();
                break;

            default:
                cout << "0~3 값을 입력하세요" << endl;
                break;
        }
        
    }
}