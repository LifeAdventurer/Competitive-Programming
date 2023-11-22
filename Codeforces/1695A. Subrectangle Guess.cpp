/**
 *    author: life adventurer
 *    created: 18.06.2022 22:35:00 
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_so_cool  int tt;cin>>tt;while(tt--)
#define ll long long

int ary[45][45];

int n, m;

int main() {
	
	Sabrina_is_so_cute;
	Sabrina_is_so_cool {
		
		cin >> n >> m;
		int a, b;
		int maxi = -2e9, ans = m*n;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> ary[i][j];
				if(ary[i][j] > maxi){
					maxi = ary[i][j];
					a = max(n-i, i+1);
					b = max(m-j, j+1);	
				}
			}
		}
		ans = a*b;
		cout << ans << '\n';
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
   
