/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 27.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;while(tt--)
#define ll long long
#define F first
#define S second

int main() {
	
	Sabrina_is_cool;
	string s;
	cin >> s;
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			cnt++;
		}
	}
	if(cnt == 0){
		for(int i=0; i<s.size(); i++){
			s[i] += 32;
		}
	}
	else if(cnt == 1 && s[0] >= 'a' && s[0] <= 'z'){
		s[0] -= 32;
		for(int i=1; i<s.size(); i++){
			s[i] += 32;
		}
	}
	cout << s << '\n';
} 

  // I <3 Sabrina
  // I will fulfill my dreams!
