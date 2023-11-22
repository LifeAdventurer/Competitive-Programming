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
	int g, s, c;
	bool ok = false;
	cin >> g >> s >> c;
	int power = g*3+s*2+c;
	if(power >= 2) ok = true;
	if(power >= 8) cout << "Province";
	else if(power >= 5) cout << "Duchy";
	else if(power >= 2)cout << "Estate";
	if(ok) cout << " or ";
	if(power >= 6) cout << "Gold";
	else if(power >= 3) cout << "Silver";
	else cout << "Copper";
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
   
