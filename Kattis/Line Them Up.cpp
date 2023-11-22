#include <iostream>
using namespace std;
string a[20];
int main(){
	int N, x = 0, y = 0;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> a[i];	
	}
	for(int i=0;i<N-1;i++){
		if(a[i]>a[i+1]){
			x++;
		}	
		else{
			y++;
		}
	}
	if(x!=0 && y==0){
		cout << "DECREASING" << '\n';
	}
	else if(x!=0 && y!=0){
		cout << "NEITHER" << '\n';
	}
	else{
		cout << "INCREASING" << '\n';
	}
	return 0;
}
