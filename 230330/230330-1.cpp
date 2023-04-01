#include <iostream>
using namespace std;

class Cat {
    //속성
    string name;
    int age;
    //생성자
    public:
        Cat(string name, int age) {
            this->name = name;
            this->age = age;
            cout << name << "고양이가 태어났습니다!" << endl;
        }
        //메소드
        void mew(){
            cout << "냐옹" << endl;
        }
};

class Rectangle {
    double width;
    double height;
    public:
        Rectangle(double w, double h) {
            this->width = w;
            this->height = h;
        }
        Rectangle() {}

        // getter 함수
        double getWidth() {
            return width;
        }
        double getHeight() {
            return height;
        }
        //setter 함수
        void setWidth(double w){
            this->width = w;
        }
        void setHeight(double h){
            this->height = h;
        }

        double area() {
            return this->width * this->height;
        }
};

class Character {
    string name;
    int level;
    int item_num;
    int hp;
    public:
        Character (string name){
            this->name = name;
            this->level = 0;
            this->item_num = 0;
            this->hp = 10;
            cout << name << " 캐릭터가 생성 되었습니다.\n";
        }
        string getName() {
            return name;
        }
        int getLevel() {
            return level;
        }
        int getItemNum() {
            return item_num;
        }
        int getHp() {
            return hp;
        }
        void setName(string new_name){
            this->name = new_name;
        }
        void levelUp() {
            level+=1;
            cout << "level up!!" << endl;
        }
        void itemUp() {
            item_num += 1;
            cout << "아이템을 얻었습니다!" << endl;
        }
        void itemDown() {
            if (item_num == 0)
                cout << "아이템이 없어서 사용할 수 없습니다" << endl;
            else {
                item_num -= 1;
                cout << "아이템을 사용했습니다!" << endl;
            }
        }
        void printCharacter() {
            cout << "이름 : " << name << endl;
            cout << "레벨 : " << level << endl;
            cout << "현재 아이템 개수 : " << item_num << endl;
            cout << "현재 체력(기본 10) : " << hp << endl; 
        }
        void hpDown() {
            hp -= 1;
        }
};

int main()
{
    /*
    Cat cat1("나비", 5);
    cat1.mew();

    double width, height;
    cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
    cin >> width >> height;
    //Rectangle r(width, height);
    Rectangle r;
    r.setWidth(width);
    r.setHeight(height);
    cout << "넓이는 : " << r.area();
    */

    string name1, name2;
    cout << "1번 캐릭터의 이름을 입력해주세요 : ";
    cin >> name1;
    Character c1(name1);
    cout << "2번 캐릭터의 이름을 입력해주세요 : ";
    cin >> name2;
    Character c2(name2);
    int cnum, num;
    string new_name, attack;
    while(1)
    {
        cout << "\n>> 어떤 동작을 실행하시겠습니까? (0: 종료) ";
        cin >> num;
        if (num == 0)
            break;
        switch (num)
        {
            case 1:
                cout << "이름을 변경할 캐릭터 번호를 입력해주세요 ";
                cin >> cnum;
                cout << "새 이름을 입력해주세요: ";
                cin >> new_name;
                cout << "이름이 변경되었습니다." << endl;
                if (cnum == 1) {
                    c1.setName(new_name);
                    cout << "1번 캐릭터 new name : " << c1.getName() << endl;
                }
                else {
                    c2.setName(new_name);
                    cout << "2번 캐릭터 new name : " << c2.getName() << endl;
                }
                break;
            case 2:
                cout << "level up할 캐릭터 번호를 입력해주세요 ";
                cin >> cnum;
                if (cnum == 1){
                    c1.levelUp();
                    cout << "1번 캐릭터 현재 레벨 : " << c1.getLevel() << endl;
                }
                else {
                    c2.levelUp();
                    cout << "2번 캐릭터 현재 레벨 : " << c2.getLevel() << endl;
                }
                break;
            case 3:
                cout << "item을 주울 캐릭터 번호를 입력해주세요 ";
                cin >> cnum;
                if (cnum == 1){
                    c1.itemUp();
                    cout << "1번 캐릭터 현재 아이템 개수 : " << c1.getItemNum() << endl;
                }
                else {
                    c2.itemUp();
                    cout << "2번 캐릭터 현재 아이템 개수 : " << c2.getItemNum() << endl;
                }
                break;
            case 4:
                cout << "item을 사용할 캐릭터 번호를 입력해주세요 ";
                cin >> cnum;
                if (cnum == 1) {
                    c1.itemDown();
                    cout << "1번 캐릭터 현재 아이템 개수 : " << c1.getItemNum() << endl;
                }
                else {
                    c2.itemDown();
                    cout << "2번 캐릭터 현재 아이템 개수 : " << c2.getItemNum() << endl;
                }
                break;
            case 5:
                cout << "1번 캐릭터 정보" << endl;
                c1.printCharacter();
                cout << "------------------------------\n";
                cout << "2번 캐릭터 정보" << endl;
                c2.printCharacter();
                break;
            case 6:
                cout << "공격할 캐릭터의 이름을 입력해주세요 ";
                cin >> attack;
                if (c1.getName() == attack){
                    cout << "1번 캐릭터 " << c1.getName() << "가 공격당했습니다." << endl;
                    c1.hpDown();
                    cout << "1번 캐릭터 현재 체력 : " << c1.getHp() << endl;
                }
                else if (c2.getName() == attack) {
                    cout << "2번 캐릭터 " << c2.getName() << "가 공격당했습니다. " << endl;
                    c2.hpDown();
                    cout << "2번 캐릭터 현재 체력 : " << c2.getHp() << endl;
                }
                else {
                    cout << attack << " 캐릭터가 존재하지 않습니다." << endl;
                }
                break;
            default:
                cout << "0~6 값을 입력하세요" << endl;
        }
        
    }
}