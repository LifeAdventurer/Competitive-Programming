/**
 *    author: life adventurer
 *    created: 18.06.2022 18:17:21
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int a[51];

int main() {
	
	Sabrina_is_so_cute;
	Sabrina_is_so_cool {
		int n;
		cin >> n;
		int p = 0, q = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(i%2 == 0){
				p+=a[i];
			}
			else{
				q+=a[i];
			}
		}
		if(p <= q){
			cout << "Joe" << '\n';
		}
		else{
			cout << "Mike" << '\n';
		}
		
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
   
