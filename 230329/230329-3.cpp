#include <iostream>
using namespace std;

struct Rectangle {
    double width;
    double height;
};

int main()
{
    Rectangle r;
    cout << "가로, 세로 길이를 입력하세요. ";
    cin >> r.width >> r.height;
    cout << "넓이는 : " << r.width * r.height;
}