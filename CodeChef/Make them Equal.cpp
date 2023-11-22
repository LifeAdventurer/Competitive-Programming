/**
 *    author: life adventurer
 *    created: 15.06.2022 14:00:00 
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define pi 3.1415926535 

int main() {
	
	int tt;
	cin >> tt;
	
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		if(a < b){
			swap(a, b);
		}
		if(a < c){
			swap(a, c);
		}
		if(b < c){
			swap(b, c);
		}
		int s;
		s = a*2-b-c;
		int cnt = 1;
		while(s > 0){
			s -= pow(2, cnt-1);
			cnt++;
		}
		if(s == 0){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	} 
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
   
