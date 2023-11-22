#include <iostream>
using namespace std;
int main(){
	int g;
	string s;
	while(cin >> g >> s && g!=0){
		for(int i=1;i<=g;i++){
			for(int j=0;j<s.size()/g;j++){
				cout << s[i*s.size()/g-j-1];
			}
		}
		cout << '\n';
	}
	return 0;
}  
