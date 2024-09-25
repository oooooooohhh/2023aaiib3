///week03-1.cpp 考試題目:除惡務盡 但是無法執行
///因為 range-based for 迴圈 必須在 c++11 (2011之後)才能用
///如果使用 c++98 (1988年版c++) 會無法正確編譯 執行會出錯迴圈出不來
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
	if(c != '2')
	cout << c;



	}
cout << '\n';



}
