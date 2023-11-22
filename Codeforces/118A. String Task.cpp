/**
 *    author: life adventurer
 *    created: 05.06.2022 14:42:14   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = (char)((int)s[i]+32);
		}
		if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
			cout << "." << s[i];
		}
	}
	cout << '\n';
	return 0;
}
