/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.Feb.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

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

bool cmp(pair<int, int> a, pair<int, int> b){
  if(a.first == b.first) return a.second > b.second;
  else return a.first < b.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> a(n), t(n);
  vector<pair<int, int>> v;
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    v.emplace_back(a[i], 1);
  }
  for(int i = 0; i < n; ++i){
    cin >> t[i];
    v.emplace_back(a[i] + t[i] - 1, -1);
  }
  sort(all(v), cmp);
  
  int ans = 0, cur = 0;
  for(auto x : v){
    cur += x.second;
    ans = max(ans, cur);
  }

  cout << ans << '\n';
  

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
