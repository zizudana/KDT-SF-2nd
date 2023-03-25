#include <iostream>
using namespace std;

int main() {
    // for(초기값; 조건문; 증감문)
    for (int i=0; i<5; i++){
        std::cout << "aaaa" << std::endl;
    }

    for (int i=9; i>7; i--){
        std::cout << "bbbb\n";
    }

    int i = 0;
    while (i<5){
        i++;
    }

    //1 : true
    //0 : false
    int order;
    while(1) {
        std::cin >> order;
        if(order == 1){
            std::cout << "아메리카노를 성공적으로 주문" << endl;
        }
        else if (order == 2){
            std::cout << "라떼를 성공적으로 주문" << endl;
        }
        else if (order == 3){
            //종료
            break;
        }
        else {
            std::cout << "1~3까지의 수를 입력해 주세요\n";
        }
    }

    int i=0;
    do {
        cout << "안녕하세요" << endl;
        i++;
    } while(i<0);
}