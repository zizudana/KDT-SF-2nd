#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream file;
    string word1, word2;
    file.open("hello");

    /*
    if (file.is_open())
    {
        cout << "success\n";
        file >> word1 >> word2;
        cout << word1 << word2;
    }
    else
        cout << "fail\n";
    file.close();
    */

    string line;
    if (file.is_open())
    {
        while(getline(file, line))
        {
            cout << line << endl;
        }
    }
    file.close();

    ofstream file2("bye");
    if(!file2.fail())
    {
        file2 << "bye world\n" << "bye bye\n";
    }
    else
        cout << "fail to open file\n";
}