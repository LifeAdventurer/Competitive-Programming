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
	cout << fixed << setprecision(5);
	double a, b, c;
	while(cin >> a >> b >> c){
		cout << a/(a+b)*b/(a+b-c-1) + b/(a+b)*(b-1)/(a+b-c-1) << '\n';
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
   
