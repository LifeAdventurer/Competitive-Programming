/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 24.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)
#define int long long
const long long MOD = 998244353;

long long fact[1000005], inv[1000005], finv[1000005];

long long C(long long x, long long y){
	if(x < 0 || y > x){
		return 0;
	}
	return fact[x] * finv[y] % MOD * finv[x - y] % MOD;
}

signed main() {
	
	u_ying_u_with_whale;
	fact[0] = inv[0] = inv[1] = finv[0] = finv[1] = 1;
	for(long long i = 1; i <= 1000000; ++i){
		fact[i] = fact[i - 1] * i % MOD;
	}
	for(long long i = 2; i <= 1000000; ++i){
		inv[i] = MOD - MOD / i * inv[MOD % i] % MOD;
	}
	for(long long i = 2; i <= 1000000; ++i){
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
	int tt;
	cin >> tt;
	while(tt--){
		int n, x, c0 = 0, c1 = 0, t = 0;
		cin >> n;
		for(int i = 1; i <= n; ++i){
			cin >> x;
			c0 += (x == 0);
			c1 += (x == 1);
		}
		for(int i = 0; i <= c1; ++i){
			t = (t + i * C(c1 + c0 - i, c0)) % MOD;
		}
		cout << (((t * (c0 + 1) - C(c1 + c0 - 2, c0 - 1)) % MOD + MOD) % MOD + C(c1 + c0 - 2, c0 - 1)) * fact[c1] % MOD * fact[c0] % MOD << '\n';
	}
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/* __  __
  //\\//\\
  \\\\////    
   \\\///    passionate positive  
    \\//
     \/  
*/

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  
	 
	           __   __
              __ \ / __
             /  \ | /  \
                 \|/
            _,.---v---._
   /\__/\  /            \
   \_  _/ /              \
     \ \_|           @ __|
      \                \_
       \     ,__/       /
     ~~~`~~~~~~~~~~~~~~/~~~~
*/    

  // Be awesome ! 
  // Sabrina<3
  // u ying u <3 
  // fighting~ 
  // I will fulfill my dreams!
