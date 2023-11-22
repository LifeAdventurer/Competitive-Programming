#include <iostream>
using namespace std;
int a[100000];

int main(){
	int n,x,b;
	cin >> n;
	b=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[b]<=a[i]){	
		}
		else{
			b=i;
		}
	}
	cout << b; 
	return 0; 
}
