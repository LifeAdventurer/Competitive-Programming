/**
 *    author: life adventurer
 *    created: 16.06.2022 21:05:47 
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define pi 3.1415926535 

int main() {
	
	int tt;
	cin >> tt;
	int max = 0, sum = 0;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		sum -= a;
		sum += b;
		if(sum > max){
			max = sum;
		}
	} 
	cout << max << '\n';
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
   
