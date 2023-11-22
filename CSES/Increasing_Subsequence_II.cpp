/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.09.2023 20:04:20
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

class BIT {
 public:
  int n;
  vector<long long> bit;

  BIT(int _n) : n(_n) {
    bit.resize(n);
  }

  void init() {
    fill(bit.begin(), bit.end(), 0);
  }

  int lowbit(int x) {
    return x & -x;
  }

  void modify(int x, long long val) {
    for(; x < (int)bit.size(); x += lowbit(x)){
      bit[x] = (bit[x] + val) % mod;
    }
  }

  long long query(int x) {
    long long ans = 0;
    for(; x > 0; x -= lowbit(x)){
      ans = (ans + bit[x]) % mod;
    }
    return ans;
  }
};


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  map<int, int> m;
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
    m[v[i]];
  }

  int p = 1;
  for(auto [x, _] : m){
    m[x] = p++;
  }
  BIT bit(n + 1);
  long long ans = 0;
  for(int i = 0; i < n; ++i){
    int x = m[v[i]];
    long long cnt = bit.query(x - 1) + 1;
    ans = (ans + cnt) % mod;
    bit.modify(x, cnt);
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/