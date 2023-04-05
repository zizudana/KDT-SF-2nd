//Project 3. 랜덤 숫자 맞추기
#include <iostream>
#include <cstdlib>
using namespace std;
#include <ctime>

int main()
{
    int lotto[6];
    int num;
    srand(time(NULL));
    int cnt = 0;
    bool is_in = false; //중복체크용
    //로또번호생성
    while (cnt < 6)
    {
        num = rand()%25 + 1;
        is_in = false;
        for (int i=0;i<cnt;i++)
        {
            if(lotto[i] == num)
                is_in = true;
        }
        if (is_in == false)
        {
            lotto[cnt] = num;
            cnt++;
        }
    }
    
    //사용자 입력받기
    cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다." << endl;
    cnt = 0; //입력한 숫자 개수
    int user_num;
    int user_numbers[6];
    while (cnt<6)
    {
        cout << cnt+1<<"번째 번호를 입력하세요: ";
        cin >> user_num;
        if (user_num < 1 || user_num > 25)
        {
            cout << "잘못된 숫자입니다. 다시 입력해주세요." << endl;
            continue;
        }
        is_in = false;
        for (int i=0; i<cnt; i++)
        {
            if (user_num == user_numbers[i])
            {
                is_in = true;
                break;
            }
        }
        if(is_in)
        {
            cout <<"이미 입력된 숫자입니다." << endl;
            continue;
        }
        user_numbers[cnt++] = (user_num);
    }
    cout << "당첨번호 공개!" << endl;
    for (int i=0; i<6; i++)
    {
        cout << lotto[i] << " ";
    }
    //두 배열 비교해서 몇등인지 출력하기
    int answer = 0; //맞춘개수
    for (int i=0;i<6;i++)
    {
        for(int j=0; j<6;j++)
        {
            if(lotto[i] == user_numbers[j])
                answer++;
        }
    }
    cout << "\n1~7등까지 결과가 나올 수 있습니다." << endl;
    cout << "결과 : "<< 7-answer << "등입니다!";
}