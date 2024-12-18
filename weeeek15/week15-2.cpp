#include <iostream>
#include <string>//<==step3: string
using namespace std;

int main()
{
	string hello; // step 3 : string
	int t = 1;
	while (cin >> hello){ //step1 : input
		if(hello=="#") break;
		cout << "Case " << t << ": ";
		if(hello=="HELLO") cout << "ENGLISH\n";
		else if(hello=="HOLA") cout << "SPANISH\n";
		else if(hello=="HALLO") cout << "GERMAN\n";
		else if(hello=="BONJOUR") cout << "FRENCH\n";
		else if(hello=="CIAO") cout << "ITALIAN\n";
		else if(hello=="ZDRAVSTVUJTE") cout << "RUSSIAN\n";
		else cout << "UNKNOWN\n";
		t++;	

	}
}