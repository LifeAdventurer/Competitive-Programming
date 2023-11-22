#include <iostream>
using namespace std;
int a[5][5];
int main(){
	int r, c;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				r=i;
				c=j;
			}
		}
	}
	if(r>2){
		r-=2;
	}
	else{
		r=2-r;
	}
	if(c>2){
		c-=2;
	}
	else{
		c=2-c;
	}
	cout << r + c << '\n';
	return 0;
}
