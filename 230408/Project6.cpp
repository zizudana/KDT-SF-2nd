//Project6. 클래스 복습 (계산기 만들기)
#include <iostream>
using namespace std;

class Calculator
{
protected:
    double result;
public:
    char op;
    static int cnt;
    void setOp()
    {
        cout << "연산자를 입력해주세요 : ";
        cin >> this->op;
    }
    virtual void calculate(double num1, double num2)
    {
        this->result = 0;
    }
    double getResult()
    {
        cout << "--------------------------------------------------\n";
        cout << "결과 : " << this->result << endl;
        cout << "--------------------------------------------------\n";
        return this->result;
    }

};

int Calculator::cnt = 0;

class Add : public Calculator {
public:
    void calculate(double num1, double num2)
    {
        this->result =(num1 + num2);
    }
};

class Sub : public Calculator {
public:
    void calculate(double num1, double num2)
    {
        this->result = (num1 - num2);
    }
};

class Mul : public Calculator {
public:
    void calculate(double num1, double num2)
    {
        this->result = (num1 * num2);
    }
};

class Div : public Calculator{
public:
    void calculate(double num1, double num2)
    {
        this->result = (num1 / num2);
    }
};

int main()
{
    Calculator* cal = new Calculator();
    Add* add = new Add();
    Sub* sub = new Sub();;
    Mul* mul = new Mul();;
    Div* div = new Div();;
    
    double num1, num2;
    string flag;

    cout << "숫자를 입력해주세요 : ";
    cin >> num1;
    while (1)
    {
        cout << "연산을 계속 진행하시겠습니까? (Y: 계속, AC: 초기화, EXIT : 종료) ";
        cin >> flag;
        if (flag == "EXIT"){
            cout << Calculator::cnt << "번 계산했습니다" << endl;
            delete add;
            delete sub;
            delete mul;
            delete div;
            break;
        }
        else if (flag == "Y"){ //계속 진행
            cal->setOp();
        }
        else if (flag == "AC"){ //초기화
            cout << "숫자를 입력해주세요 : ";
            cin >> num1;
            cal->setOp();
        }
        switch (cal->op){
            case '+':
                cal = add;
                break;
            case '-':
                cal = sub;
                break;
            case '*':
                cal = mul;
                break;
            case '/':
                cal = div;
                break;
        }
        cout << "숫자를 입력해주세요 : ";
        cin >> num2;
        cal->calculate(num1, num2);
        Calculator::cnt++;
        num1 = cal->getResult();
    }
}
