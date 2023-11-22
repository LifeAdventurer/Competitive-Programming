/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 24.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int mod = 1000000007;

long long fastpow(long long x, long long y, int mod){
  x %= mod;
  long long res = 1;
  while(y){
    if(y & 1) res = res * x % mod;
    y >>= 1;
    x = x * x % mod;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  vector<long long> fact(1e6 + 5);
  fact[0] = 1;
  for(int i = 1; i <= 1e6; ++i){
    fact[i] = fact[i - 1] * i % mod;
  }
  
  vector<long long> inv(1e6 + 5);
  inv[1e6] = fastpow(fact[1e6], mod - 2, mod);
  for(int i = 1e6; i >= 1; --i){
    inv[i - 1] = inv[i] * i % mod; 
  }

  string s;
  cin >> s;

  vector<int> v(26, 0);
  for(char c : s){
    v[c - 'a']++;
  }

  long long ans = fact[s.size()];
  for(int i = 0; i < 26; ++i){
    if(v[i] < 2) continue;
    ans = ans * inv[v[i]] % mod;
  }

  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
