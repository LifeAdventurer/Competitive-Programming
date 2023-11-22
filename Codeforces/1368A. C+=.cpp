/**
 *    author: life adventurer
 *    created: 18.06.2022 18:17:21
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int main() {
	
	Sabrina_is_so_cute;
	Sabrina_is_so_cool {
		int a, b, n, cnt = 0;
		cin >> a >> b >> n;
		if(a < b){
			swap(a, b);
		}
		while(a<=n){
			b += a;
			swap(a, b);
			cnt++;	
		}
		cout << cnt << '\n';
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
   
