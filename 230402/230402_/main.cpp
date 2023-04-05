// 멤버 : 변수(필드), 메소드들을 통틀어서 멤버

//#include <iostream>
#include "Person.h"
#include "Student.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	Person p("김소연");
	Person p2("채동현");

	cout << "인원 : " << Person::getCnt() << endl;
	
	Student p3("채동현");

	cout << "인원 : " << Person::getCnt() << endl;
	return 0;
}