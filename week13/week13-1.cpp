#include <iostream>
using namespace std;
int helper(int a, int b){ //step3: helper() funcrion

	return 3;

}
int main()
{
	int a,b; // step 1: input
	while( cin >> a >> b ){
	
		if(a==0 && b==0) break;
		
		int ans = helper(a, b); // step3: he;per()
		
		if(ans==0) cout << "No carry operation.\n";
		else if(ans==1) cout << "1 carry operation.\n";
		else cout << ans << " carry operation.\n";
	}	//step2: output



}