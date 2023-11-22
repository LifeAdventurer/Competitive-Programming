/**
 *    author: life adventurer
 *    created: 18.06.2022 18:17:21
**/
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int n[105];

int main() {
	
	Sabrina_is_so_cute;
	
	int t, ans = 0;
	cin >> t;
	for(int i=1; i<=t; i++){
		cin >> n[i];
	}
	int cnt = 0;
	for(int i=0; i<t; i++){
		cnt += n[t-i];
		if(cnt >= 4){
			ans++;
		}
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
   
