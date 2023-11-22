/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.09.2023 22:45:20
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

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
      bit[x] += val;
    }
  }

  long long query(int x) {
    long long ans = 0;
    for(; x > 0; x -= lowbit(x)){
      ans += bit[x];
    }
    return ans;
  }
};

const int N = (int) 1e5 + 5;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, cases = 1;
  BIT bit(N);
  while(cin >> n && n){
    long long ans = 0;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
      cin >> a[i];
    }
    vector<int> v = a;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    bit.init();
    for(int i = 0; i < n; ++i){
      int x = lower_bound(v.begin(), v.end(), a[i]) - v.begin() + 1;
      ans += i - bit.query(x);
      bit.modify(x, 1);
    }
    cout << "Case #" << cases++ << ": " << ans << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/