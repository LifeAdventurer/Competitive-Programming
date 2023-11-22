/**
 *    author: life adventurer
 *    created: 22.06.2022 14:00:00
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int main() {
	
	Sabrina_is_so_cute;
	ll c, k;
	cin >> c >> k;
	ll up = pow(10, k);
	if(k == 0){
		cout << c << '\n';
		return 0;
	}
	if(k < c){
		if(c%up >= up/2){
			c = (c/up+1)*up;
		}
		else c = c/up*up;
		cout << c << '\n';
	}
	else{
		cout << up << '\n';
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
   
