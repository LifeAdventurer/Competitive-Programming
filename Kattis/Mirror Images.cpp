#include <iostream>
using namespace std;
char a[20][20];
int main(){
	int t, r, c;
	cin >> t;
	for(int k=1;k<=t;k++){
		cin >> r >> c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin >> a[r-i-1][c-j-1];
			}
		}
		cout << "Test " << k << '\n';
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout << a[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
} 
