/**
 *    author: life adventurer
 *    created: 16.06.2022 21:34:00 
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define pi 3.1415926535 

int main() {
	bool ok = true;
	string a, b;
	cin >> a >> b;
	for(int i=0; i<a.size(); i++){
		if(a[i] != b[a.size()-i-1]){
			ok = false;
		}
	}
	if(ok) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	Sabrina_is_so_cute;
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
   
