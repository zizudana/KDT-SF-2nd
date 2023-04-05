#include <iostream>
using namespace std;

class Shape {
protected:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "원" << endl;
    }
};

class Rect : public Shape {
public:
    void draw() {
        cout << "사각형" << endl;
    }
};

class Tria : public Shape {
public:
    void draw() {
        cout << "삼각형" << endl;
    }
};

int main() 
{
    Circle c = Circle();
    Rect r = Rect();
    Tria t = Tria();
    c.draw();
    r.draw();
    t.draw();

}