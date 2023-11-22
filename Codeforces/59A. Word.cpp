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
	int u = 0, l = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			u++;
		}
		else{
			l++;
		}
	}
	if(l >= u){
		for(int i=0; i<s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = (char)((int)s[i]+32);
			}
			cout << s[i];
		}
		cout << '\n';
	}
	else{
		for(int i=0; i<s.size(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] = (char)((int)s[i]-32);
			}
			cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}
