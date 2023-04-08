//Project5. 야구게임
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int user[3]; //사용자가 입력한 숫자
    int baseball[3]; //컴퓨터가 생성한 정답 숫자
    //int num, i, j;
    //bool is_in;
    int cnt = 0;

    //야구게임 번호 생성
    srand(time(NULL));
    while (cnt < 3)
    {
        int num = rand()%9 + 1;
        bool is_in = false;
        for (int i=0;i<cnt;i++)
        {
            if(baseball[i] == num)
                is_in = true;
        }
        if (is_in == false)
        {
            baseball[cnt] = num;
            cnt++;
        }
    }

    cout << "야구 게임" << endl;
    int strike;
    int ball;
    cnt = 1; //입력횟수
    while (1)
    {
        strike = 0;
        ball = 0;
        cout << "1 ~ 9 사이의 숫자 3개를 입력 하시오 (이외의 숫자: 종료)"<< endl;
        cin >> user[0] >>user[1] >>user[2];
        if ( user[0]<1|| user[1]<1|| user[2]<1 || user[0]>9|| user[1]>9|| user[2]>9 ){
            cout << "게임을 종료하였습니다." << endl;
            return 0;
        }
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (baseball[i] == user[j])
                    (i==j) ? strike++ : ball++;
            }
        }
        cout << "Strike : "<<strike << "     Ball : "<< ball << endl;
        if (strike == 3){
            cout << cnt <<"번 만에 맞췄습니다."<<endl;
            break;
        }
        cnt++;
    }
    
    
    
}