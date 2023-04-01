#include <iostream>
using namespace std;

class Shape {
protected:
    int num; //변의 개수
    int width; // 밑변의 길이

public:
    Shape(int num, int width) {
        this->num = num;
        this->width = width;
    }
    void printInfo() {
        cout << "변의 개수 : " << num << " 밑변의 길이 : " << width << endl;
    }
};

class Rectangle : public Shape {
    int length; //세로 길이

public:
    Rectangle(int length, int width) : Shape(4, width) {
        this->length = length;
        this->width = width;
    }
    // 다른 방법
    //Rectangle(int length, int heigth) : Shape(){
	//	this->line_num = 4;
	//	this->length = length;
	//	this->heigth = heigth;
	//}
    void area() {
        cout << "직사각형 넓이 : " << this->length * this->width << endl;
    }
};

class Triangle : public Shape {
    int height; // 높이 길이

public:
    Triangle(int height, int width) : Shape(3, width) {
        this->height = height;
        this->width = width;
    }
    void area() {
        cout << "삼각형 넓이 : " << this->height * this->width / 2 << endl;
    }
};

//오버라이딩 이해하기
class Student {
protected:
    string name;
    string school;
    int age;
    int number;
public:
    Student() {}
    void lunch() {
        cout << "점심은 학식" << endl;
    }
};
class Kim : public Student {
public:
    Kim(string name, string school, int age, int number): Student() {
        this->name = name;
        this->school = school;
        this->age = age;
        this->number = number;
    }
    void lunch() {
        cout << "점심은 김가네 김밥" << endl;
    }
};

class Baek : public Student {
public:
    Baek(string name, string school, int age, int number): Student() {
        this->name = name;
        this->school = school;
        this->age = age;
        this->number = number;
    }
    void lunch() {
        cout << "점심은 백종원 피자" << endl;
    }
};

int main() 
{
    /*Triangle t = Triangle(3, 4);
    t.printInfo();
    t.area();
    Rectangle r = Rectangle(3, 4);
    r.printInfo();
    r.area();*/

    Kim k = Kim("김씨", "학교1", 25, 18);
    Baek b = Baek("백씨", "학교2", 28, 16);
    k.lunch();
    b.lunch();
}