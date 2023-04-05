#include <iostream>
using namespace std;

class Snack {
protected:
    int price;
    string name;
    string company;
public:
    string getName() {
        return name;
    }
    virtual void printInfo() {
        cout << name << " Snack입니다" << endl;
    }
};

class Candy : public Snack {
    string taste;
public:
    Candy(string name) : Snack() {
        this->name = name;
        this->taste = "오렌지맛";
    }
    string getTaste() {
        return taste;
    }
    void printInfo() {
        cout << taste << " " << this->name << "입니다." << endl;
    }
};

class Chocolate : public Snack {
    string shape;
public:
    Chocolate(string name) : Snack() {
        this->name = name;
        this->shape = "별모양";
    }
    string getShape() {
        return shape;
    }
    void printInfo() {
        cout << shape << " " << this->name << "입니다." << endl;
    }
    
};

int main() 
{
    Snack snackBasket[4] = {Candy("사탕1"), Candy("사탕2"), Chocolate("초콜릿1"), Chocolate("초콜릿2")};
    for (int i=0; i<4; i++){
        cout << snackBasket[i].getName() << endl;
    }
    //cout << snackBasket[0].getTaste(); 불가능하다

    //포인터 변수로 만들어서 처리하기
    Snack *pSnackBasket[4] = {new Candy("사탕1"), new Candy("사탕2"), new Chocolate("초콜릿1"), new Chocolate("초콜릿2")};
    for (int i=0; i<4; i++) 
    {
        //cout << pSnackBasket[i]->getName() << endl;
        pSnackBasket[i]->printInfo();
    }
    
    //다운캐스팅
    Candy* c1 = (Candy*)pSnackBasket[0];
    Candy* c2 = (Candy*)pSnackBasket[1];
    Chocolate* h1 = (Chocolate*)pSnackBasket[2];
    Chocolate* h2 = (Chocolate*)pSnackBasket[3];
    
    cout << ((Candy*)pSnackBasket[0])->getTaste() << endl;
    cout << ((Candy*)pSnackBasket[1])->getTaste() << endl;
    cout << ((Chocolate*)pSnackBasket[2])->getShape() << endl;
    cout << ((Chocolate*)pSnackBasket[3])->getShape() << endl;

    //dynamic casting
    //dynamic_case<바꾸려는 새로운 타입>(대상)
    //dynamic_cast<childClass*>(pParent*);
}