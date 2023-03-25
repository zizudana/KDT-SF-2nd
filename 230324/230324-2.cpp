#include <iostream>
using namespace std;

int main() {
    int i, j, num, result;

    //구구단 만들기
    //5단 출력
    cout << "5단 출력" << endl;
    for (i=1; i<10; i++)
    {
        cout << "5 * " << i << " = " << 5*i << endl;
    }

    //1~9단 출력
    cout << "1~9단 출력" << endl;
    for (j=1; j<10; j++){
        cout << "----" << j << "단----" << endl;
        for (i=1; i<10; i++){
            cout << j << " * " << i << " = " << i*j << endl;
        }
    }
    //1부터 n까지의 합 구하기
    cout << "1부터 n까지의 합 구하기\n\n";
    result = 0;
    cout << "숫자(양의 정수)를 입력하세요 : ";
    cin >> num;
    for (i=1; i<=num; i++)
    {
        result += i;
    }
    cout << "1부터 " << num << "까지의 합은 : " << result << endl;

    //while문 사용해보기
    //1~9단 출력
    cout << "1~9단 출력" << endl;
    j=1;
    while (j<10)
    {
        cout << "----" << j << "단----" << endl;
        i=1;
        while (i<10)
        {
            cout << j << " * " << i << " = " << i*j << endl;
            i++;
        }
        j++;
    }

    //1부터 n까지의 합 구하기
    cout << "1부터 n까지의 합 구하기\n\n";
    result = 0;
    cout << "숫자(양의 정수)를 입력하세요 : ";
    cin >> num;
    i=1;
    while (i <= num)
    {
        result += i;
        i++;
    }
    cout << "1부터 " << num << "까지의 합은 : " << result << endl;

    //사용자가 입력한 숫자 더하기
    result = 0;
    cout << "사용자가 입력한 숫자 더하기\n\n";
    while (1){
        cout << "숫자를 입력하세요 (0: exit) : ";
        cin >> num;
        if (num == 0) break;
        result += num;
    }
    cout << "사용자가 입력한 숫자의 합은 : " << result << endl;

    // 입력한 숫자만큼 별 찍기
    int input;
    cout << "입력한 숫자만큼 별 찍기\n\n";
    cout << "input : ";
    cin >> input;
    cout << "output : \n";
    for (i=1; i<=input; i++)
    {
        for (j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
