#include <iostream>
using namespace std;
char r[25][25];
int main(){
	int n, w, b;
	bool ok=true;
	cin >> n;
	for(int i=0;i<n;i++){
		w = 0, b =0;
		for(int j=0;j<n;j++){
			cin >> r[i][j];
			if(r[i][j]=='W'){
				w++;
			}
			else{
				b++;
			}
		}
		if(w!=b){
			ok=false;
		}
	}
	for(int i=0;i<n;i++){
		w = 0, b =0;
		for(int j=0;j<n;j++){
			if(r[j][i]=='W'){
				w++;
			}
			else{
				b++;
			}
		}
		if(w!=b){
			ok=false;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((r[i][j]==r[i+1][j] && r[i+1][j]==r[i+2][j]) || (r[i][j]==r[i][j+1] && r[i][j+1]==r[i][j+2])){
				ok=false;
			}
		}
	}
	if(ok){
		cout << "1" << '\n';
	}
	else{
		cout << "0" << '\n';
	}
	return 0;
} 
