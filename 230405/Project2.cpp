// Project2. 타임어택 끝말잇기 게임
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main(void) 
{
    vector<string> words; //입력한 단어를 담을 벡터
    words.push_back("airplane"); //첫 단어 넣어두고 시작
    string user_word; //사용자가 입력한 단어
    time_t startTime, endTime;
    double totalTime; //사용자가 입력하는데 걸린 시간
    while(1){
        cout << endl;
        for (int i=0; i<words.size(); i++)
            cout << "->" << words.at(i);
        cout << "\n다음 단어를 입력하세요 : ";
        //시간체크
        startTime = time(NULL);
        cin >> user_word;
        endTime = time(NULL);
        totalTime = (double)(endTime - startTime);
        if(totalTime > 30) //30초 제한
        {
            cout << "타임 오버!" << endl;
            cout << "게임 종료!" << endl;
            cout << "총 입력한 단어 개수 : " << words.size() << endl;
            return 0;
        }

        //끝문자가 이어지는지 확인
        int n = words.back().size();
        if (user_word[0] != words.back()[n-1])
        {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }

        //중복 확인
        bool is_in = false; 
        for (int i=0; i<words.size();i++)
        {
            if (words.at(i) == user_word)
            {
                is_in = true;
                break;
            }
        }
        if(is_in) 
        {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }
        words.push_back(user_word);
    }
}