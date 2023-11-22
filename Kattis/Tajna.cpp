#include <iostream>
using namespace std;
char a[11][100]; 
int main(){
	string s;
	cin >> s;
	int r, c, k;
	for(int i=1;i<=s.size();i++){
		for(int j=1;j<=s.size();j++){
			if(i*j==s.size() && j>=i){
				r=i;
				c=j;
			}
		}
	}
	k=0;
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			a[j][i]=s[k];
			k++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << a[i][j];
		}
	}	 
	cout << '\n';
	return 0;
} 
