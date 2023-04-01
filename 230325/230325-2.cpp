#include <iostream>
using namespace std;

int main()
{
    int result;

    //실습 1
    string city[] = {"Korea", "China", "Japan", "America", "Canada"};
    for (auto &name : city)
    {
        cout << name << " ";
    }
    cout << endl;

    //실습2
    string city2[5];
    for (auto &name : city2)
    {
        cin >> name;
    }
    for (auto &name : city2)
    {
        cout << name << " ";
    }
    cout << endl;

    //실습3
    int grade[5];
    for (int i=0; i<5;i++)
    {
        cout << i+1 << "번 학생의 성적을 입력하세요 : ";
        cin >> grade[i];
    }
    result = 0;
    for (auto &num : grade)
    {
        result += num;
    }
    cout << "성적 평균 : " << result/5.0;

    //추가실습
    int grade2[3][2];
    for (int i=0; i<3; i++)
    {
        cout << "학생 " <<i+1<<"의 국어성적과 수학성적을 입력하세요 : ";
        cin >> grade2[i][0] >> grade2[i][1];
    }
    cout << "국어 성적 평균 : ";
    result = 0;
    for (int i=0; i<3; i++)
    {
        result += grade2[i][0];
    }
    cout << result/3.0 << endl;
    cout << "수학 성적 평균 : ";
    result = 0;
    for (int i=0; i<3; i++)
    {
        result += grade2[i][1];
    }
    cout << result /3.0 << endl;

    //추가실습 숫자 맞추기 게임
    int correct[3] = { 1, 8, 5 };
    int user[3];
    cout << "1~9사이의 숫자 3개를 입력하세요 : ";
    cin >> user[0] >> user[1] >> user[2];
    int cnt = 0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (user[i] == correct[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << "출력 : " << cnt <<"개 맞춤!";
}