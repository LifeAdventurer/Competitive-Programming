/**
 *    author: life adventurer
 *    created: 22.06.2022 16:30:17
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int main() {
	
	Sabrina_is_so_cute;
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t--){
		for(int i=1; i<n; i++){
			if(s[i] == 'G' && s[i-1] == 'B'){
				swap(s[i], s[i-1]);
				i++;
			}
		}
	}
	
	cout << s << '\n';
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
  
  
/**  _         ___                       _ 
 *  | |    _  /  _|                     | |                        _
 *  | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *  | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
**/ 
