/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.09.2023 13:07:43
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int mod = 1000000007;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  long long n;
  cin >> n;
  if(n == 0){
    cout << "0\n";
    return 0;
  }
  map<long long, int> m;
  function<int(long long)> F = [&](long long x){
    if(m.count(x)) return m[x];
    long long k = x / 2;
    if(x & 1) return m[x] = (1LL * F(k) * F(k + 1) + 1LL * F(k - 1) * F(k)) % mod;
    return m[x] = (1LL * F(k) * F(k) + 1LL * F(k - 1) * F(k - 1)) % mod;
  };

  m[0] = m[1] = 1;

  cout << F(n - 1) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/