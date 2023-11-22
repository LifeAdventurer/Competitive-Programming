/**
 *    author: life adventurer
 *    created: 18.06.2022 19:11:22
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

char c[200];

int main() {
	
	Sabrina_is_so_cute;
	string s;
	bool ok;
	while(getline(cin, s)){
		ok = true;
		int y = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				c[y] = (char)((int)s[i]-32);
				y++;
			}
			if(s[i] >= 'A' && s[i] <='Z'){
				c[y] = s[i];
				y++;
			}
		}
		for(int i=0; i<y/2; i++){
			if(c[i] != c[y-i-1]){
				ok = false;
			}
		}
		if(ok){
			cout << "SETUP! ";
		}
		cout << s << '\n';
	}
}
