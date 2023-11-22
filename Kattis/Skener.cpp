#include <iostream>
using namespace std;
char a[50][50];
int main(){
	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<zr;j++){
			for(int k=0;k<c;k++){
				for(int l=0;l<zc;l++){
					cout << a[i][k];
				}
			}
			cout << '\n';
		}		
	}
	return 0;
}
