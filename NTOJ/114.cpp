#include <iostream>
using namespace std;
int r[6][7];
int main(){
	bool ok=true;
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			cin >> r[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(r[i][j]==r[i][j+1] && r[i][j+1]==r[i][j+2]){
				ok=false;
				break;
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<6;j++){
			if(r[i][j]==r[i+1][j] && r[i+1][j]==r[i+2][j]){
				ok=false;
				break;
			}
		}
	} 
	if(ok){
		cout << "No" << '\n';
	}
	else{
		cout << "Yes" << '\n';
	}
	return 0;
}
