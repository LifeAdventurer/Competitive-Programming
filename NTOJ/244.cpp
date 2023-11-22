#include <iostream>
using namespace std;
int main(){
	int T;
	string s;
	cin >> T >> s; 
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90){
			cout << char(int(s[i])+32);
		}
		else{
			cout << char(int(s[i])-32);
		}
	}
	cout << '\n';
	return 0;
}
