#include <iostream>
using namespace std;
int main(){
	int n, a = 0, b = 1, c = 1, x;
	cin >> n;
	for(int i=0;i<n-1;i++){
		x=a+b+c;
		a=b;
		b=c;
		c=x;
	}
	cout << c << '\n'; 
	return 0;	
} 
