/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 25.09.2023 16:08:23
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int N = (int) 1e5 + 5;

map<int, int> m;

int phi(int x){
  if(m.find(x) != m.end()) return m[x];
  int cur = x, p = x;
  for(int i = 2; i * i <= x; ++i){
    if(x % i == 0){
      cur -= cur / i;
      while(x % i == 0) x /= i;
    }
  }
  if(x != 1){
    cur -= cur / x;
  }
  return m[p] = cur;
}

int Mod(long long x, int mod){
  if(x < mod) return x;
  return x % mod + mod;
}

int fastpow(int x, int y, int mod){
  int res = 1;
  while(y){
    if(y & 1) res = Mod(1LL * res * x, mod);
    y >>= 1;
    x = Mod(1LL * x * x, mod);
  }
  return res;
}

int w[N];

int solve(int l, int r, int mod){
  if(l == r || mod == 1) return Mod(w[l], mod);
  return fastpow(w[l], solve(l + 1, r, phi(mod)), mod);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, mod;
  cin >> n >> mod;
  for(int i = 1; i <= n; ++i){
    cin >> w[i];
  }
  int q;
  cin >> q;
  while(q--){
    int l, r;
    cin >> l >> r;
    cout << solve(l, r, mod) % mod << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/