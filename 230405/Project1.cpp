//Project1. 배스킨라빈스 31게임
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int user_num; //사용자가 입력한 숫자
    int com_num; //컴퓨터가 부를 숫자
    int total = 1; //현재까지 부른 수
    int i;
    srand(time(NULL));
    
    while(1)
    {
        cout << "\n개수를 입력하세요: ";
        cin >> user_num;
        if (user_num < 1 | user_num >3)
        {
            cout << "1~3 사이의 수를 입력하세요" << endl;
            continue;
        }
        cout << "사용자가 부른 숫자!" << endl;
        for (i=0;i<user_num;i++)
        {
            cout << total++ << endl;
            if(total > 31)
            {
                cout << "게임 종료! 컴퓨터의 승리입니다." << endl;
                return 0;
            }
        }
        cout << "\n컴퓨터가 부른 숫자!" << endl;
        com_num = rand()%3 + 1;
        for (i=0;i<com_num;i++)
        {
            cout << total++ << endl;
            if(total > 31)
            {
                cout << "게임 종료! 사용자의 승리입니다." << endl;
                return 0;
            }
        }
    }
}