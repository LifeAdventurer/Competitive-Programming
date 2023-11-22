/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.08.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define inout freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int p[55];

int main() {
	u_ying_u_with_whale;
	int n, ans = 1;
	cin >> n;
	for(int i = 2; i <= n; ++i){
		cin >> p[i];
	}
	int x = n;
	while(p[x] != 1){
		++ans;
		x = p[x];
	}
	cout << ans << '\n';
#ifndef ONLINE_JUDGE 
	cout << "\ntime Elapsed: " << (1000.0 * clock()) / CLOCKS_PER_SEC << " ms \n"; 
#endif
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

  // Be awesome ! 
  // fighting~ 
  // I will fulfill my dreams!
