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

int ary1[15], ary2[15];

int main() {
	
	Sabrina_is_so_cute;
	ll n, k;
	cin >> n >> k;
		
	int ans = 0;
	if(n > k){
		ans++;
	}
	while(n%10 == 0){
		n /= 10;
	}
	if(n > k){
		ans++;
	}
	
	cout << ans << '\n';
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
   
