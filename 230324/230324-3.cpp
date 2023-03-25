#include <iostream>
using namespace std;

//1. 두 개의 정수를 매개 변수로 받아 그 합을 리턴하는 add함수
int add(int a, int b)
{
    return a+b;
}

//2. 두 개의 정수를 매개 변수로 받아 그 차를 리턴하는 minus함수
int _minus(int a, int b)
{
    if (a<b) return (b-a);
    return(a-b);
}

//3. 두 개의 정수를 매개 변수로 받아 그 곱을 리턴하는 multiple함수
int multiple(int a, int b)
{
    return a*b;
}

//4. 두 개의 정수를 매개 변수로 받아 그 나눗셈을 리턴하는 divide함수
//실수형으로 강제형변환
double divide(int a, int b)
{
    return (double)a/b;
}

// 짝수인지 홀수인지
void is_even_odd(int num)
{
    if (num % 2 == 0)
    {
        cout << "짝수\n";
    }
    else
    {
        cout << "홀수\n";
    }
}

// 가장 큰 수 반환
int max_num(int a, int b, int c)
{
    int num=0;
    if (a>num)
    {
        num = a;
    }
    if (b > num)
    {
        num = b;
    }
    if (c > num)
    {
        num = c;
    }
    return num;
}

int main() { 

    cout << add(3, 5) << endl;
    cout << _minus(3, 5) << endl;
    cout << multiple(3, 5) << endl;
    cout << divide(37, 5) << endl;

    is_even_odd(8);
    is_even_odd(133);

    cout << max_num(24, 38, 17) << endl;
    
}