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
	int n;
	cin >> n;
	if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%447 == 0 || n%474 == 0 || n%477 == 0 || n == 747 || n == 774){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
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
   
