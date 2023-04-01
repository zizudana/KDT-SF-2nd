#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    //실습 1
    int x, y, i, j;
    while(1)
    {
        cout << "x를 입력하세요: ";
        cin >> x;
        cout << "y를 입력하세요: ";
        cin >> y;
        if (x<=0 || y<=0)
        {
            cout << "x와 y모두 양수를 입력해주세요." << endl;
        }
        else
            break;
    }
    //vector<vector<int>> v2(x, vector<int>(y));
    vector<vector<int>> v2(x);
    int cnt = 0;
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {   
            cnt++;
            //v2[i][j] = cnt;
            v2.at(i).push_back(cnt);
        }
    }

    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cout << v2.at(i).at(j) << " ";
        }
        cout << endl;
    }

    //실습 2
    vector<int> v;
    int num;
    cout << "사용자가 입력한 숫자 더하기\n\n";
    while(1)
    {
        cout << "숫자를 입력하세요 (0: exit) : ";
        cin >> num;
        if (num == 0) break;
        v.push_back(num);
    }
    int sum = 0;
    for (int i=0; i<v.size(); i++)
    {
        sum += v.at(i);   
    }
    cout << "사용자가 입력한 수의 합은 : " << sum;
*/
    //추가실습: 문자열에 사용된 문자의 개수
    string str;
    cout << "입력예시 : ";
    getline(cin, str); //공백 포함 입력받기
    //str.erase(remove(str.begin(), str.end(), ' '), str.end()); 문자열 공백 제거
    vector<char> v;
    int i;
    //for (char s : str)
    for (int j=0; j<str.length(); j++)
    {
        //if (s != ' ')
        if (str[j] != ' ')
        {
            for (i=0; i<v.size();i++)
            {
                //if (v.at(i)==s) break;
                if (v.at(i)==str[j]) break;
            }
            if(i==v.size())
            {
                //v.push_back(s);
                v.push_back(str[j]);
            }
        }
    }
    cout << "출력예시 : "<< v.size() << " 개(";
    for (i=0; i<v.size(); i++)
    {
        cout << v.at(i);
        if (i != v.size()-1)
            cout << ",";
    }
    cout << ")";
}