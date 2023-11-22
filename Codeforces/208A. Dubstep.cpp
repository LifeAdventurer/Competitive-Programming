/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 29.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define F first
#define S second

int main() {
	
	Sabrina_is_cool;
	string s, ans = "";
	cin >> s;
	bool ok = false;
	for(int i=0; i<s.size(); i++){
		if(s[i] != 'W'){
			ans += s[i];
			ok = true;
		}
		else if(s[i+1] == 'U' && s[i+2] == 'B'){
			if(ok && ans.size() != 0){
				ans += ' ';
			}
			i += 2;
			ok = false;
			
		}
		else{
			ans += s[i];
			ok = true;
		}
	}
	cout << ans << '\n';
} 

/* __  __
  //\\//\\
  \\\\////    
   \\\///    Coding ~
    \\//
     \/  
*/

  // I <3 Sabrina
  // I will fulfill my dreams!
