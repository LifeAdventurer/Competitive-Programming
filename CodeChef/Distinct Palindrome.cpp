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
		int n, x;
		cin >> n >> x;
		if((n/2 + n%2) < x){
			cout << -1 << '\n';
		}
		else{
			if(n%2 == 0){
				for(int i=0; i<x/2+x%2; i++){
					cout << char(97+i%26);
				}
				for(int i=0; i<n/2-x/2+x%2; i++){
					cout << char(97+(x/2+x%2)%26);
				}
				for(int i=n/2; i>0; i--){
					cout << char(123-i%26);
				}
				cout << '\n';
			}
			else{
				for(int i=0; i<x; i++){
					cout << char(97+i%26);
				}
				cout << char(65);
				for(int i=; i>0; i--){
					cout << char(123-i%26);
				}
				cout << '\n';
			}
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
   
