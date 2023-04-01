#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // 실습0. hello.txt에 입력된 내용 거꾸로 쓰기
    ifstream file("hello");
    
    string line;
    vector<string> v;
    if (file.is_open())
    {
        while(getline(file, line))
        {
            v.push_back(line);
        }
    }
    file.close();

    ofstream file2("output");

    if (file2.is_open())
    {
        for (int i=0; i<v.size();i++)
        {
            file2 << v.at(v.size()-1-i) << endl;
        }
    }
    file2.close();

    //실습1. 회원 명부 작성하기
    ofstream fin;

	//fin.open("member",ios_base::out | ios_base::app);
    fin.open("member");
    cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요.\n";
    string line;
    for (int i=0; i<3; i++)
    {
        cout << i+1 << "번째 회원 : ";
        getline(cin, line);
        fin << line << endl;
    }
    fin.close();

    cout << "----------회원 명부 파일 읽기----------\n";
    ifstream fout("member");
    if(fout.is_open())
    {
        while(getline(fout, line))
        {
            cout << line << endl;
        }
    }
    fout.close();

    //실습2. 회원 명부를 응용한 로그인 기능
    string name, password;
    cout << "이름을 입력하세요. ";
    cin >> name;
    cout << "비번을 입력하세요. ";
    cin >> password;
    ifstream file("member");
    string fname, fpassword;
    if(file.is_open())
    {
        while(file >> fname >> fpassword)
        {
            if (fname == name && fpassword == password)
            {
                cout << "로그인 성공";
                return 0;
            }
        }
            cout << "로그인 실패";
    }

    //번외 실습3. 로그인 성공 시 전화번호 저장하기
    string name, password, number;
    cout << "이름을 입력하세요. ";
    cin >> name;
    cout << "비번을 입력하세요. ";
    cin >> password;

    ifstream imember("member");
    ifstream imember_tel("member_tel");

    string fname, fpassword; //member파일의 이름, 비번
    string tname, tnumber; //member_tel파일의 이름, 번호

    int is_login = false;
    
    if(imember.is_open())
    {
        while(imember >> fname >> fpassword)
        {
            if (fname == name && fpassword == password)
            {
                is_login = true;
                break;
            }
        }
        if (!is_login)
            cout << "로그인 실패" << endl;
        else //로그인 성공시 전화번호 저장
        {
            cout << "로그인 성공" << endl;
            cout << "전화번호를 입력해 주세요 : ";
            cin >> number;

            vector<string> tel;
            int is_in = false;
            if(imember_tel.is_open())
            {
                while(imember_tel >> tname >> tnumber)
                {
                    if (tname == name)
                    {
                        tel.push_back(tname + ' ' + number);
                        is_in = true;
                    }
                    else
                        tel.push_back(tname + ' ' + tnumber);
                }
                if (!is_in)
                    tel.push_back(name + ' ' + number);
            }
            imember_tel.close();
            ofstream omember_tel;
	        omember_tel.open("member_tel");
            for (int i=0; i<tel.size(); i++)
            {
                omember_tel << tel[i];
                omember_tel << endl;
            }
            omember_tel.close();
        }       
    }
    imember.close();

    //번외실습 정답풀이
    ifstream member("member.txt");
	string name, pw, name_in, pw_in;

	cout << "이름을 입력하세요: ";
	cin >> name_in;

	cout << "비밀번호를 입력하세요: ";
	cin >> pw_in;

	bool is_login = false;

	if (member.is_open()) {
		while (member >> name >> pw) {
			if (name_in == name && pw_in == pw) {
				is_login = true;
				break;
			}
		}

		if (is_login) {
			cout << "로그인 성공\n";

			string num_in, num;

			cout << "전화번호를 입력하세요 : ";
			cin >> num_in;

			ifstream member_tel_r("member_tel.txt");

			bool is_modify = false;
			string member_tel_tmp = "";

			if (member_tel_r.is_open()) {
	
				while (member_tel_r >> name >> num) {
					string line = name + " ";
					if (name_in == name) {
						is_modify = true;
						line += num_in;
					}
					else {
						line += num;
					}
					member_tel_tmp += line + "\n";
				}
			}

			member_tel_r.close();


			ofstream member_tel_w;
			
			if (is_modify) {
				member_tel_w.open("member_tel.txt");
				member_tel_w << member_tel_tmp;
			}
			else {
				member_tel_w.open("member_tel.txt", ios::app);
				if (member_tel_w.is_open()) {
					member_tel_w << name_in << " " << num_in << endl;
				}
			}

			member_tel_w.close();
		} else cout << "로그인 실패\n";
	}
	else cout << "파일을 읽지 못하였습니다.\n";

	member.close();
}