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

int d[11];
int s[11];

int main() {
	
	Sabrina_is_so_cute;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> d[i];
	}
	for(int i=0; i<n; i++){
		int a = i+n-2;
		if(a >= n){
			a %= n;
		}
		s[i] = d[i] + d[a];
	}
	sort(s, s+n);
	cout << s[0] << '\n';
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
   
