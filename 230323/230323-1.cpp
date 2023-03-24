#include <iostream>

int main()
{
    /*
    std::string name;
    int age;

    std::cout << "이름을 입력하세요.";
    std::cin >> name;
    std::cout << "나이를 입력하세요.";
    std::cin >> age;
    std::cout << "안녕하세요! " + name + "님(" << age << "세)";
    */

   int a = 5;
    if (a>10){
        std::cout << "a가 10보다 큽니다.";
    }
    else if (a == 5) {
        std::cout << "a는 5입니다.";
    }
    else {
        std::cout << "a는 10보다 크지 않고 5가 아닙니다.";
    }
}