/**
 *    author: life adventurer
 *    created: 22.06.2022 19:34:48
**/

#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int a[25];

int main() {
	
	Sabrina_is_so_cute;
	int n;
	while(cin >> n && n != 0){
		string s;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		getline(cin, s);
		getline(cin, s);
		string ans = "";
		for(int i=0; i<s.size()%n; i++){
			s += " ";
		}
		for(int i=0; i<s.size()/n; i++){
			for(int j=1; j<=n; j++){
				ans += s[i*n+a[j]-1];
			}
		}
		cout << "'" << ans << "'\n";
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
  
  
/**
 *   _         ___                       _ 
 *  | |    _  /  _|                     | |                        _
 *  | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *  | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	life is an adventure. Be adventurous.
 *	
**/ 

  // I <3 Sabrina
  // I will fulfill my dreams!
  
