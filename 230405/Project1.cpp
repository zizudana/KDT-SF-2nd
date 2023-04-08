//Project1. 배스킨라빈스 31게임
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int total = 1; //현재까지 부른 수

int baskin_game(int num, int who) //who : 사용자 1 컴퓨터 0
{
    for (int i=0;i<num;i++)
    {
        cout << total++ << endl;
        if(total > 31)
        {
            (who == 1) ? cout << "게임 종료! 컴퓨터의 승리입니다." : cout << "게임 종료! 사용자의 승리입니다.";
            cout << endl;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num; //부를 개수
    srand(time(NULL));

    while(1)
    {
        cout << "\n개수를 입력하세요: ";
        cin >> num;
        if (num < 1 || num >3)
        {
            cout << "1~3 사이의 수를 입력하세요" << endl;
            continue;
        }
        cout << "사용자가 부른 숫자!" << endl;
        if (baskin_game(num, 1)==1) return 0;
        cout << "\n컴퓨터가 부른 숫자!" << endl;
        num = rand()%3 + 1;
        if (baskin_game(num, 0)==1) return 0;
    }
}