#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "aa";
    vector<int> v;
    vector<string> v;
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v(4); //크기 4, 값을 모두 0으로 초기화 {0, 0, 0, 0}
    vector<int> v(4, 1); //크기 4, 값을 모두 1로 초기화 {1, 1, 1, 1}

    vector<int> v;
    v.assign(5,2); //크기 5, 모든 값을 2로 초기화

    vector<int> v(6); //이미 크기가 할당된 경우에도
    v.assign(5,2); //벡터 초기화 {2, 2, 2, 2, 2}

    v.size(); // 벡터 v의 사이즈를 반환
    for(int i=0;i<v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << endl;
    }
    //인덱스 범위가 벗어났을 때 런타임 오류가 발생, v.at()을 사용하면 오류를 잡아줌

    v.push_back(6); //{2, 2, 2, 2, 2, 6}
    v.pop_back(); // 제일 마지막 원소를 꺼낸다 {2, 2, 2, 2, 2}
    v.begin(); //vector의 시작 주소 반환, index 0
    v.insert(v.begin(), 5); //첫번째 자리 {5, 2, 2, 2, 2}
    v.insert(v.begin()+1, 5); //두번째 자리
    v.erase(v.begin(), v.begin()+3); //index 0, 1, 2를 지움
    v.clear(); //벡터 초기화 {}

    vector<vector<int>> v2 = {{1,2},{3,4}};
    for(int i=0; i<v2.size(); i++)
    {
        for (int j=0; i<v2.at(i).size(); j++)
        {
            cout << v2.at(i).at(j) << " ";
        }
        cout << endl;
    }
}

