#include <iostream>
using namespace std;

int main() 
{
    // 일반 변수
    string str = "";
    // 배열
    string fruit[] = {"apple", "banana", "grape"};
    string fruit1[3];
    fruit[0] = "orange";
    fruit1[1] = "apple";
    cout << fruit << endl;
    cout << sizeof(fruit) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(int) << endl;

    int num[2][3] = {{2, 2, 2}, {1, 23, 3}};
    char alpha[2][4] = {{'a','b','c','d'}, {'e','f','g','h'}};

    for (int i = 0;i < 2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    cout << sizeof(num[0]) << " " << sizeof(num[0][0]) << endl;

    int num2[3] = {1, 2, 3};
    // n=1 -> 2 -> 3
    for (int n : num2)
    {
        cout << n << " ";
    }
    cout << endl;
    for (auto n : num2)
    {
        cout << n << " ";
    }
    cout << endl;
    for (auto n : num2)
    {
        cout << n << " ";
    }
    cout << endl;
    for (auto &n : num2)
    {
        cin >> n;
    }
    for (auto n : num2)
    {
        cout << n << " ";
    }
    cout << endl;
    for (auto &n : num2)
    {
        n += 1;
    }
    for (auto n : num2)
    {
        cout << n << " ";
    }
    cout << endl;

    for (auto &arr : alpha)
    {
        for (auto a : arr)
        {
            cout << a << " ";
        }
        cout << endl;
    }

    for (auto &arr : alpha)
    {
        for (auto &a : arr)
        {
            a += 1;
        }
        cout << endl;
    }

        for (auto &arr : alpha)
    {
        for (auto a : arr)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    
}