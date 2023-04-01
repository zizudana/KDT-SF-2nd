#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Person { // 
	int age;
	string name;
public:
	Person(int age, string name) {
		this->age = age;
		this->name = name;
	}
	void sleep() { // 부모에서 정의한 메소드를 자식에서 다시 정의하는 것
		cout << "7시에 잠자기" << endl;
	}
	int override_test(int num) {
		return num; 
		//1. Student에서 오버라이딩 하기 
		//2. num에 age를 더해서 return 하는 함수만들기
	}
	int getAge() {
		return age;
	}
};

class Student : public Person {
	string stu_id;
public:
	Student(int age, string name, string stu_id) : Person(age, name) {
		this->stu_id = stu_id;
	}
	// 메소드 오버라이딩?? x -> 그냥 student의 메소드
	void study() {
		cout << "공부하기" << endl;
	}
	// 메소드 오버라이딩이 일어남.
	void sleep() {
		cout << "10시에 잠자기" << endl;
	}
	// 함수(메소드)의 원형이 같다. 함수 이름, 매개변수 종류, 개수까지 다 같음.
	int override_test(int num) {
		//num에 age를 더해서 return 하는 함수만들기
		//return num + age;
		return num + getAge();
		// getter 만들거나
		// 접근제어자를 protected로 바꾸거나
	}
};

int main() {
	Student s = Student(99, "홍길동", "11111111111");
	s.sleep(); // 잠자기
	cout << s.override_test(1) << endl;
	return 0;
}

/*
    오버라이딩
    - 상속 관계
    - 부모에 있는 메소드가 자식에게서 다시 정의되는 것.
    - 함수의 원형이 완전히 같아야 함(이름, 매개변수 개수, 매개변수의 자료형

    오버로딩
    - 기본 문법 (클래스에 국한된 개념이 아님)
    - 함수의 이름이 같고, 원형이 다른 함수가 여러개 있는 것
*/