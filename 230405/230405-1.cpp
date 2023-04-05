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
    while (cnt < 6)
    {
        num = rand()%45 + 1;
        int flag = false; //중복인지
        for (int i=0;i<cnt;i++)
        {
            if(lotto[i] == num)
                flag = true;
        }
        if (flag == false)
        {
            lotto[cnt] = num;
            cnt++;
        }
    }
    cout << "로또 당첨번호" << endl;
    for (int i=0; i<6; i++)
    {
        cout << lotto[i] << " ";
    }
}