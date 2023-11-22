/**
 *    author: life adventurer
 *    created: 16.06.2022 22:35:00
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long

int p[105];

int main() {
	Sabrina_is_so_cute;
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> p[i];
	}	
	for(int i=1; i<=n; i++){
		for(int j=0; j<n; j++){
			if(p[j] == i){
				cout << j+1 << " ";
			}
		}
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
   
