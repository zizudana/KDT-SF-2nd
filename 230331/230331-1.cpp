#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//private 자기 자신(해당 클래스 내)에서만 접근 가능
//protected 라는 자료형 : 자기 자신과, 자식 클래스에서 접근 가능
//public 모든곳에서 접근 가능

class Person { //Student의 부모 클래스, 슈퍼 클래스, 상위 클래스
protected:
	string name;
	int age;
	// 필드, 메소드, 생성자
public: // private, protected
    //Person() { return ???; } // 기본 생성자
    Person(string name, int age) { 
		this->name = name;  
		this->age = age;
	}
	Person() {}
	//Person(int age) {}
	//Person p = Person("김소연");
	//Person() {}
	//Person p = Person();
	void sleep() { cout << "잠자기 zzzz"; }
};

class Student : public Person { 
	// 부모 클래스에서 상속받은 멤버들의 접근제어자의 한계를 지정함.
	string stu_id;
protected:
	string name;
	int age;
public:
	//Student 생성자를 작성하지 않은 경우. 기본 형태
    //Student(){ Person(); ~~~~~; return; }
	Student(string name, int age) : Person(name, age) {
		//this->name = name;
		//this->age = age;
		//부모클래스의 생성자를 선택함.
		this->stu_id = "11111111111";
		//return 값;
	}
	void study(){  
		sleep();
		cout << "공부하기"; 
	}
};

int main(){
    //Person p = Person("김소연"); // 객체를 생성하는 순간.
	//Person p = Person();

	//Person p = Person(1,3);
	Student s = Student("김소연", 99);
	s.sleep();
	
	return 0;
}

/*
    클래스
    - 필드 (변수) :
    - 메소드 (클래스 내의 함수를 메소드라고 함) : 
    - 생성자 : 생성자도 메소드의 일종. 리턴 타입이 없는 이유는 여러분들이 리턴타입을 int, string 이런식으로 지정할 수 없어서. 그치만 return은 일어나고 있어요. 객체를 생성할 때 Person의 멤버들을 잘 저장해주는 무언가가 return됨.

    - 생성자는 객체를 생성할 때 꼭 호출해야만 함.
    - 클래스를 정의할 때 생성자를 꼭 정의해줘야 하는 건 아님.
    - 생성자를 정의하지 않을 경우 기본 생성자가 자동으로 만들어짐.

    - 즉, 생성자가 정의되지 않은 클래스로 객체를 만들 때, 기본생성자가 자동으로 호출된다. 기본생성자는 매개변수가 없는 형태.

    - 그렇다면 생성자가 정의가 된다면? -> 기본생성자 만들어주지 않고, 정의된 생성자만 존재함.
*/