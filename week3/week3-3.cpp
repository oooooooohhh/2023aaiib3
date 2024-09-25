///week3-3.cpp 要複習 string 及 iostream con cout
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout <<"請輸入一個很長的字串,中間也不要有空格: ";
    cin >> s;
    cout << "字串" << s << "的長度是" << s.length() << "\n";
    for(int i=0; i<s.length(); i++){
        cout << i << ":" << s[i] << endl; ///endl 小寫L就是"\n"

        }

    }


