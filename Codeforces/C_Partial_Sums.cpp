/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.07.2023 23:59:46
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

long long fastpow(long long x, long long y, int m){
  x %= m;
  long long res = 1;
  while(y){
    if(y & 1) res = res * x % m;
    y >>= 1;
    x = x * x % m;
  }
  return res;
}

const int mod = 1000000007;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;
  vector<int> v(n), ans(n), inv(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
    inv[i] = fastpow(i, mod - 2, mod);
  }
  for(int i = 0; i < n; ++i){
    long long cur = 1, p = 1;
    for(int j = i; j < n; ++j, ++p){
      ans[j] = (ans[j] + (cur * v[i]) % mod) % mod;
      cur = cur * (k + p - 1) % mod * inv[p] % mod;
    }
    cout << ans[i] << " \n"[i == n - 1];
  }

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
