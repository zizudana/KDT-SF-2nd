#include <iostream>
using namespace std;

class Animal {
    string name;
    int age;
    string food;
public:
    Animal(string name, int age, string food) {
        this->name = name;
        this->age = age;
        this->food = food;
    }
    void sleep() {
        cout << name << " 잔다 zzzz" << endl;
    }
    void roam() {
        cout << name << " 돌아다닌다" << endl;
    }
    void eat() {
        cout << name<< "은 " << food << "동물이다." << endl;
    }
};

class Cow : public Animal {
    string sound = "음메~";
public:
    Cow(string name, int age) : Animal(name, age, "초식") {}
    void makeNoise() {
        cout << sound << endl;
    }
};

class Dog : public Animal {
    string sound = "멍멍~";
public:
    Dog(string name, int age) : Animal(name, age, "잡식") {}
    void makeNoise() {
        cout << sound << endl;
    }
};

class Rion : public Animal {
    string sound = "어흥~";
public:
    Rion(string name, int age) : Animal(name, age, "육식") {}
    void makeNoise() {
        cout << sound << endl;
    }
};

int main() {
    Animal a1 = Animal("동물1", 5, "초식");
    Cow c1 = Cow("소1", 3);
    Cow c2 = Cow("소2", 5);
    Dog d1 = Dog("개1", 5);
    Rion r1 = Rion("사자1", 4);

    a1.eat();
    a1.roam();
    a1.sleep();
    c1.eat();
    c2.makeNoise();
    c1.makeNoise();
    d1.eat();
    r1.roam();
    d1.roam();
    r1.sleep();
    r1.eat();
    c2.sleep();
}