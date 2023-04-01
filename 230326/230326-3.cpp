#include <iostream>
using namespace std;

/*
namespace std {
    //어딘가에 정의되어 있다
}
using std::cout; -> cout만 접근
using namespace std;
*/
namespace seoul
{
    int local_number;
    string landmark;
}

namespace busan
{
    int local_number;
    string landmark;
}

using namespace busan;
int main()
{
    seoul::local_number = 2;
    seoul::landmark = "경복궁";
    busan::local_number = 51;
    busan::landmark = "해운대";
    cout << seoul::local_number << endl;
    cout << seoul::landmark << endl;
    cout << local_number << endl;
    cout << landmark << endl;



}