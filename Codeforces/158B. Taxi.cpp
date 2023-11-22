/**
 *    author: life adventurer
 *    created: 16.06.2022 21:43:13
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define pi 3.1415926535 

int cnt[5];

int main() {
	int n;
	cin >> n;
	int s;
	for(int i=0; i<n; i++){
		cin >> s;
		cnt[s]++;
	}
	int ans = 0;
	ans += cnt[4];
	ans += cnt[2]/2;
	ans += cnt[3];
	cnt[1] -= cnt[3];
	if(cnt[2]%2 == 1){
		ans++;
		cnt[1] -= 2;
	}
	if(cnt[1] > 0){
		ans += cnt[1]/4;
		if(cnt[1]%4 != 0){
			ans++;
		} 
	}
	cout << ans << '\n';
	
	
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
   
