//프로젝트4. 마방진 만들기
#include <iostream>
using namespace std;

int main()
{
    int number = 1; //채워줄 숫자
    int n; //n*n 마방진 
    int i,j;
    cout <<"마방진의 행 혹은 열의 수를 홀수로 입력해주세요 : ";
    cin >> n;
    //2차원 동적배열 선언 후 0으로 초기화
    int **magic_square = new int*[n];
    for (i=0;i<n;i++)
    {
        //magic_square[i] = new int[n];
        //0으로 초기화
        magic_square[i] = new int[n] {};
    }
    /*for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            magic_square[i][j] = 0;
        }
    }*/

    //1) 1은 첫 행의 가운데에 위치한다.
    int x = 0;
    int y = n/2;
    while (number < n*n)
    {   
        if (x >= 0 && x < n && y >= 0 && y < n) {
            if (magic_square[x][y] != 0) {
                //3) 우상단으로 이동하는 도중 이미 칸이 채워져 있으면 바로 아래 칸에 다음 숫자가 채워진다.
                x += 2;
                y -= 1;
            }
        }
        else if (x==-1 && y==n) {
            //6) 첫번째 행의 마지막 열에서는 우상단으로 이동하는 것이 아니라 바로 아래칸으로 이동
            x += 2;
            y -= 1;
        }
        else if (x==-1 && y<n) {
            //4) 첫번째 행에서 우상단으로 이동할 때는 마지막 행의 다음 열로 이동한다
            x += n;
        }
        else if (x>=0 && y==n) {
            //5) 마지막 열에서 우상단으로 이동할 때는 첫번째 열의 이전 행으로 이동한다
            y -= n;
        }
        //2) 우상단으로 갈수록 숫자가 1씩 늘어난다.
        magic_square[x][y] = number++;
        x -= 1;
        y += 1;
    }

    //결과 출력
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout << magic_square[i][j] << " ";
        }
        cout << endl;
    }

    //동적 메모리 해제
    for(int i=0;i<n;i++)
    {
        delete[] magic_square[i];
    }
    delete[] magic_square;

}