#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n>0){
		cout<< n%2;
		n /= 2;

	}

	return 0;
}






#include<iostream>
using namespace std;

int main(){
	int n, N=0;
	cin>>n;
	int a[32]; //ans
	while(n>0){
		a[N++] = n%2;
		n /= 2;
	}
	for(int i=N-1; i>=0; i--){
		cout << a[i];
	}

	return 0;
}