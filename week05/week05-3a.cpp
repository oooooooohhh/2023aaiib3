#include <stdio.h> // so we can use scanf()
#include <iostream> // cout
#include <string> //tolower().find()

using namespace std;
int main()
{
	string s = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'";		
	char c; //step: input
	while(scanf("%c", &c) == 1 ){
		c = tolower(c); // step3: tolower(c)
		if(c==' ' || c=='\n') cout << c; // step2: output
		else{
			int i = s.find(c); //step04: find()
			cout << s[i-2]; //step5: output s[i-2]
		
		
		
		}
	}



}