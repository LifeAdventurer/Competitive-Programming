/**
 *    author: life adventurer
 *    created: 19.06.2022 14:00:00
**/
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int main() {
	
	Sabrina_is_so_cute;
	string s;
	cin >> s;
	bool ok = false;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			ok = true;
		}
	}
	if(ok){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
} 
/** 
 * common bugs
 * - fastio
 * - int overflow
 * - forgot to initialize data (is 0 the right value? -1, inf, -inf?)
 * - array bounds (indices bigger than MAXN?)
 * - special cases (n=1? graph not connected?)
 * - re-initialize efficiently between test cases
**/ 
  
  // I <3 Sabrina
   
