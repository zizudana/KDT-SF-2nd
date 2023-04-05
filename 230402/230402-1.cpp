// 멤버 : 변수(필드), 메소드들을 통틀어서 멤버

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Person {
    static int cnt;
    string name;
public:
    Person(string name)
    {
        this->name = name;
        plusCnt();
    }
    static int getCnt() {
        return cnt;
    }
    void plusCnt() {
        cnt++;
    }
	static int static_var;

	void sleep() {
		name = "aaaa";
		//static_var = 5;
	}
	static void static_method() {
		//name = "aaaaa"; // 일반 필드이기 때문에 접근 X
		static_var = 10;
		cout << "static_method" << endl;
	}
};

int Person::static_var = 0;
int Person::cnt = 0;

int main() {
	Person::static_var = 5;
	cout << Person::static_var << endl;
	Person::static_method();
	cout << Person::static_var << endl;


	//Person p;
	//p.name = "홍길동";
	//p.static_var = 2;
	//p.sleep();
	//p.static_method();

	//cout << p.static_var << endl;
	//
	//Person p2;
	//p2.name = "성춘향";
	//p2.static_var = 5;

	//cout << p.name << " " << p2.name << endl;
	//cout << p.static_var << " " << p2.static_var << endl;

    /*
        일반 멤버들은 어느 순간에 메모리가 잡히냐?
        객체가 생성될 때 메모리가 잡힘. -> 객체 없이는 멤버에 접근할 수 없었음.
        static 멤버는 언제 메모리가 잡히냐?
        클래스가 다 읽히는 순간에 메모리가 잡힘.
    */

	return 0;
}