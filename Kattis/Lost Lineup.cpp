#include <iostream>
using namespace std;
int a[100];
int main(){
	int n, d;
	cin >> n;
	a[0]=1;
	for(int i=0;i<n-1;i++){
		cin >> d;
		a[d+1]=i+2;
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << '\n';
	return 0;
} 
