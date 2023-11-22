/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.08.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define inout freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main() {
	
	u_ying_u_with_whale;
	inout;
	int n, a, b, c, ans = 0, sum;
	cin >> n >> a >> b >> c;
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= n; ++j){
			if(a * i + b * j > n){
				continue;	
			} 
			sum = n - a * i - b * j;
			if(sum % c == 0){
				ans = max(ans, i + j + sum / c);
			}
		}
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

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  

*/    

  // Be awesome ! 
  // Sabrina <3
  // u ying u <3
  // seorina julie <3
  // NJ <3 
  // fighting~ 
  // I will fulfill my dreams!
