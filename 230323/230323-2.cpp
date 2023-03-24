#include <iostream>

int main()
{
    std::string name;
    int age;
    int number;
    int num1, num2;
    char op;

    std::cout << "------실습1------\n";
    std::cout << "나이를 입력하세요.";
    std::cin >> age;
    //1~7 유아 8~13 초등학생 14~16 중학생 17~19 고등학생
    //20~ 대학생 200~ 나이가 너무 많습니다..!
    if (age <= 7){
        std::cout << "유아";
    } else if (age <= 13) {
        std::cout << "초등학생";
    } else if (age <= 16) {
        std::cout << "중학생";
    } else if (age <= 19) {
        std::cout << "고등학생";
    } else if (age < 200) {
        std::cout << "대학생";
    } else {
        std::cout << "나이가 너무 많습니다..!";
    }
    std::cout << "\n\n";

    std::cout << "------실습2------\n";
    std::cout << "이름을 입력하세요.";
    std::cin >> name;
    //홍길동:남자 성춘향:여자 그외:모르겠어요
    if (name == "홍길동") {
        std::cout << "남자";
    } else if (name == "성춘향"){
        std::cout << "여자";
    } else {
        std::cout << "모르겠어요.";
    }
    std::cout << "\n\n";

    std::cout << "------실습3------\n";
    std::cout << "숫자를 입력하세요.";
    std::cin >> number;
    //5의배수인지,삼항연산자
    number % 5 == 0 ? std::cout << number << "은 5의 배수입니다." : std::cout << number << "은 5의 배수가 아니네요ㅜㅜ";
    std::cout << "\n\n";

    std::cout << "------실습4------\n";
    std::cout << "연산할 정수 두 개를 입력하세요.";
    std::cin >> num1 >> num2;
    std::cout << "연산자를 입력하세요.(+ - * /)";
    std::cin >> op;
    //연산결과
    std::cout << "연산결과--> ";
    switch (op){
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            std::cout << "몫:" << num1 / num2 << " 나머지:" << num1 % num2 << "입니다.";
    }
    std::cout << "\n\n";
}
