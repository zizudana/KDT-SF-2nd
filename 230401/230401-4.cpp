#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//클래스는 필드, 메소드, 생성자, 소멸자로 구성됨.
//생성자 : 객체가 생성될 때 자동으로 실행되는 메소드
//소멸자 : 객체가 소멸될 때 자동으로 실행되는 메소드

class Person {
public:
    Person() {
		cout << "Person 생성자 입니다" << endl;
	}
	//가상함수 : 부모클래스에서 정의될 예정. 
	//자식클래스가 재정의(오버라이딩)할 것이라고 기대하는 함수
	//순수 가상함수 : 구현이 안되어 있는 함수 ( = 0)
	//virtual void sleep() = 0;
	virtual void sleep() { //가상 함수 : 동적 바인딩을 하기 위해
		cout << "잠자기" << endl;
	}
    
    virtual ~Person() {
        cout << "Person 소멸자 입니다" << endl;
    }

};

class Student : public Person {
public:
    Student() : Person() {
		cout << "Student 생성자 입니다" << endl;
	}
	void sleep() { //가상 함수를 재정의(오버라이딩)한 것
		cout << "10시에 잠자기" << endl;
	}
    ~Student() {
		cout << "Student 소멸자 입니다" << endl;
	}
};

int main() {
	Student s = Student();
    //Person 생성자 입니다
	//Student 생성자 입니다

    Student* s2 = new Student();
	//Person 생성자 입니다
	//Student 생성자 입니다

    delete s2; 
	//Student 소멸자 입니다
	//Person 소멸자 입니다

    /*
        Person p;
	    정적 메모리
	    스택영역에 저장됨. 해제를 명시적으로 할 필요 X
	    자동으로 해제되는데, main함수가 닫힐 때
	
        Person* p2 = new Person();
	    동적 메모리
	    힙영역에 저장됨. 해제를 명시적으로 할 필요 O
	    언제 ? 필요없을 때 delete
	    delete p2;
    */

	s.sleep(); // 정적 바인딩

	Person* s3 = new Student(); //업캐스팅
	s3->sleep(); // 동적 바인딩

    Person p = Student(); //업캐스팅이 아님
    p.sleep(); // 동적 바인딩이 일어나지 않음

	delete s3; //Person만 소멸, Student 남아있음
    // 업캐스팅시 제대로 메모리를 해제하려면 부모 클래스의 소멸자를 가상함수로 만들어야함
    //Person소멸자 호출-> 가상함수네 -> 자식의 소멸자 기대-> 자식의 소멸자 실행->부모 소멸자 실행

	return 0; 
}