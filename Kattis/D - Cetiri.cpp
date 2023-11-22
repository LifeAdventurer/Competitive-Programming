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

int n[3];

int main() {
	
	Sabrina_is_so_cute;
	for(int i=0; i<3; i++) {
		cin >> n[i];	
	}
	sort(n, n+3);
	if(n[2]-n[1] == n[1]-n[0]) cout << n[2] + n[1] - n[0];
	else if(n[2] - n[1] == 2*(n[1]-n[0])) cout << (n[2]+n[1])/2;
	else cout << (n[1]+n[0])/2;
	cout << '\n';
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
   
