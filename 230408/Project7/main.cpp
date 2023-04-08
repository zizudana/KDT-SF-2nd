#include <iostream>
#include <vector>
#include "Character.h"
#include "Weapon.h"
#include "Sword.h"
#include "Gun.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    string name;
    cout << "캐릭터의 이름을 입력해주세요 : ";
    cin >> name;
    Character user(name);
    Character computer("컴퓨터");

    int n, w;
    string user_input;
    vector<Character*> characters;
    int who=1; //1: user 0: computer
    while(1)
    {
        if(who){
            cout <<"\n[" << user.getName()<< " TURN]" << endl;
            cout << "어떤 동작을 하겠습니까? (1.무기 줍기 2.공격 3.상태보기 0.종료) : ";
            cin >> n;
        }
        else{
            cout <<"\n[" << computer.getName()<< " TURN]" << endl;
            n = rand()%2+1;
            cout << "동작번호 : " << n << endl;
        }
        if (n == 0) break;
        switch (n) {
            case 1: //무기줍기
                if (who){
                    cout <<"어떤 무기를 줍겠습니까? (1.칼 2.총) : ";
                    cin >> w;
                    user.pickUpWeapon(w);
                }
                else{
                    w = rand()%2+1;
                    cout << "무기번호 : "<<w << endl;
                    computer.pickUpWeapon(w);
                }
                break;
            case 2: //공격
                (who) ? user.attack(&computer) : computer.attack(&user);
                if (Character::is_die)
                    return 0;
                break;
            case 3: //상태보기
                cout << "상태보기" << endl;
                user.printInfo();
                computer.printInfo();
                break;
            default:
                cout << "0~2 값을 입력하세요" << endl;
                break;
        }
        (who==1) ? who = 0: who = 1;
    }
}