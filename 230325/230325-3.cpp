#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int* p = &n;

    cout << p << endl;
    cout << *p << endl;
    cout << n << endl;
    cout << &n << endl;

    n = 10;
    
    string str = "abc";
    string* str_p = &str;

    cout << str_p << endl;
    cout << *str_p << endl;
    cout << str << endl;
    cout << &str << endl;

    int& num = n; //참조 변수, 결국 num과 n이 같다.
    cout << num << endl;
    cout << &num << endl;
    cout << &n << endl;

    //동적 메모리 할당
    int* p = new int;
    //동적 메모리 해제
    delete p;

    int num;
    cout << "크기를 입력하세요 : ";
    cin >> num;
    //int arr[num];
    int* arr = new int[num];

    for (int i=0;i<num;i++)
    {
        arr[i] = i+1;
    }

    for (int i=0; i<num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    string* str2 = new string[num];
    for (int i=0;i<num;i++)
    {
        str2[i] = 65+i;
    }

    delete[] str2;

    int* arr1 = new int[num]; // 1차원 동적 배열
    int** arr2 = new int* [num]; //2차원 동적 배열, 행의 개수가 num개

    for (int i=0; i<num; i++)
    {
        arr2[i] = new int[num]; // 열의 개수가 num개
    }

    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num;j++)
        {
            arr2[i][j] = 1;
        }
    }

    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num;j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i=0; i<num; i++)
    {
        delete[] arr2[i];
    }
    delete[] arr2;

    //int*** arr3 = new int** [num];

}