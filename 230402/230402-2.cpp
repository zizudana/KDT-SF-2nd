#include <iostream>
#include <vector>
using namespace std;

class Snack {
protected:
    int price;
    string name;
    string company;
public:
    static int num;
    string getName() {
        return name;
    }
    virtual void printInfo() {
        cout << name << " Snack입니다" << endl;
    }
};

int Snack::num = 0;

class Candy : public Snack {
    string taste;
public:
    Candy() : Snack() {
        this->name = "사탕";
        Snack::num++;
    }
    void setTaste(string taste) {
        this->taste = taste;
    }
    void printInfo() {
        cout << taste << "맛 " << this->name << endl;
    }
};

class Chocolate : public Snack {
    string shape;
public:
    Chocolate() : Snack() {
        this->name = "초콜릿";
        Snack::num++;
    }
    void setShape(string shape) {
        this->shape = shape;
    }
    void printInfo() {
        cout << shape << " " << this->name << "입니다." << endl;
    }
    
};

int main() 
{
    vector<Snack*> snackBasket;
    int n;
    while(1)
    {
        cout << "\n과자 바구니에 추가할 간식을 고르시오.(1: 사탕, 2: 초콜릿, 0: 종료) : ";
        cin >> n;
        if (n==0) break;
        if (n==1)
        {
            string taste;
            cout << "맛을 입력하세요 : ";
            cin >> taste;
            Candy* c = new Candy();
            c->setTaste(taste);
            snackBasket.push_back(c);
        }
        else if (n==2)
        {
            string shape;
            cout << "모양을 입력하세요 : ";
            cin >> shape;
            Chocolate* h = new Chocolate();
            h->setShape(shape);
            snackBasket.push_back(h);
        }
        else
        {
            cout << "0-2 사이의 숫자를 입력하세요." << endl;
            continue;
        }
    }
    cout << "\n과자 바구니에 담긴 간식의 개수는 " << Snack::num << "개 입니다." << endl;
    cout << "\n과자 바구니에 담긴 간식 확인하기!" << endl;
    for (int i=0;i<snackBasket.size();i++)
    {
        snackBasket[i]->printInfo();
    }

}