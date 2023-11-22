/**
 *    author: life adventurer
 *    created: 21.06.2022 13:10:00
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int main() {
	
	Sabrina_is_so_cute;
	int y;
	cin >> y;
	y++;
	while(y/1000 == y/100%10 || y/1000 == y%100/10 || y/1000 == y%10 || y/100%10 == y%100/10 || y/100%10 == y%10 || y%100/10 == y%10){
		y++;
	}
	cout << y << '\n';
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
   
