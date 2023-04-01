#include <iostream>
using namespace std;

int main()
{
    int x, y, i, j;
    while(1)
    {
        cout << "x를 입력하세요: ";
        cin >> x;
        cout << "y를 입력하세요: ";
        cin >> y;
        if (x<=0 || y<=0)
        {
            cout << "x와 y모두 양수를 입력해주세요." << endl;
        }
        else
            break;
    }
    int** arr = new int* [x];
    for (i=0; i<x; i++)
    {
        arr[i] = new int[y];
    }
    
    int cnt = 0;
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {   
            cnt++;
            arr[i][j] = cnt;
        }
    }

    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (i=0; i<x; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    //번외 실습
    int num, i, j;
    cout << "몇 명의 학생 입력 : ";
    cin >> num;
    int* grade = new int[num];
    for (i=0; i<num; i++)
    {
        cout << i+1 << "번 학생의 성적을 입력하세요 : ";
        cin >> grade[i];
    }
    int sum = 0;
    for (i=0; i<num; i++)
    {
        sum += grade[i];
    }
    cout << "성적 평균 : " << (double)sum/num;

    delete[] grade;

}