/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *    created: 23.06.2022 12:21:37 
 *
 *	  mood: ^_^ 
 *
**/
 
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;while(tt--)
#define ll long long
#define F first
#define S second

string d[100];

int main() {
	Sabrina_is_cool;
	string s;
	getline(cin, s);
	int cnt = 0;
	bool ok = true;
	for(int i=0; i<s.size(); i++){
		if(s[i] != ' '){
			d[cnt] += s[i];	
		}
		else{
			cnt++;
		}
	}
	for(int i=0; i<cnt+1; i++){
		for(int j=0; j<cnt+1; j++){
			if(d[i] == d[j] && i != j){
				ok = false;
			}
		}
	}
	if(ok){
		cout << "yes" << '\n';
	}
	else{
		cout << "no" << '\n';
	}
} 
/** 
 * common bugs
 * - int overflow
 * - forgot to initialize data (is 0 the right value? -1, inf, -inf?)
 * - array bounds (indices bigger than MAXN?)
 * - special cases (n=1? graph not connected?)
 * - re-initialize efficiently between test cases
**/ 

/* __  __
  //\\//\\
  \\\\////    
   \\\///    Coding ~
    \\//
     \/  
*/

  // I <3 Sabrina
  // Binary Love ~ ~ ~
  // I will fulfill my dreams!
