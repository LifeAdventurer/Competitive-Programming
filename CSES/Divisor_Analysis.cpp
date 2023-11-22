/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.07.2023 00:14:09
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int MOD = 1000000007;

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

long long inverse(long long x){
  return fastpow(x, MOD - 2, MOD);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  long long cnt = 1, sum = 1, product = 1, mul = 1;
  vector<long long> a(n), b(n);
  for(int i = 0; i < n; ++i){
    long long x, k;
    cin >> x >> k;
    //a[i] = x;
    //b[i] = k;
    cnt = cnt * (k + 1) % MOD;
    sum = sum * (fastpow(x, k + 1, MOD) - 1) % MOD * fastpow(x - 1, MOD - 2, MOD) % MOD;
    product = fastpow(product, k + 1, MOD) * fastpow(fastpow(x, k * (k + 1) / 2, MOD), mul, MOD) % MOD;
    mul = mul * (k + 1) % (MOD - 1);
  }
  //for(int i = 0; i < n; ++i){
  //  product = product * fastpow(a[i], fastpow(b[i] * mul % (MOD - 1) / 2, MOD - 1, MOD), MOD) % MOD;
  //}
  cout << cnt << " " << sum << " " << product << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/