#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Person
{
    string name;
public:
    static int success;
    Person(string name) 
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};

int Person::success = 0;

int main()
{
    vector<Person*> member;
    int i;
    bool is_end = false;
    while(!is_end)
    {
        cout <<"이름 쌓기 ~ 이름 쌓기 ~ : ";
        string line;
        vector<string> names;
        getline(cin, line);
        stringstream ss(line);
        string buf;
        while (getline(ss, buf, ' '))
        {
            names.push_back(buf);
        }
        if(member.size() >= names.size())
            break;
        for (i=0;i<member.size();i++)
        {
            if (member.at(i)->getName() != names.at(i))
            {
                is_end = true;
            }
        }
        member.push_back(new Person(names.at(i)));
        Person::success++;
    }
    cout << "\n게임 종료! " <<Person::success<<"명까지 성공했습니다!" << endl;
}