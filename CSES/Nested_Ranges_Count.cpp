/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.09.2023 13:29:33
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

class BIT {
 public:
  vector<long long> bit;

  void init(int n) {
    bit.assign(n, 0);
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> X(n);
  vector<array<int, 3>> v(n);
  for(int i = 0; i < n; ++i){
    int x, y;
    cin >> x >> y;
    v[i] = {x, y, i};
    X[i] = x;
  }
  sort(v.begin(), v.end(), [&](auto A, auto B){
    return (A[1] == B[1] ? A[0] < B[0] : A[1] > B[1]);
  });
  sort(X.begin(), X.end());
  X.erase(unique(X.begin(), X.end()), X.end());

  vector<vector<int>> ans(2, vector<int>(n));
  BIT bit;
  bit.init(n + 1);
  for(int i = 0; i < n; ++i){
    auto [x, y, t] = v[n - i - 1];
    x = lower_bound(X.begin(), X.end(), x) - X.begin() + 1;
    ans[0][t] = i - bit.query(x - 1); // be careful of the x - 1
    bit.modify(x, 1);
  }
  bit.init(n + 1);
  for(int i = 0; i < n; ++i){
    auto [x, y, t] = v[i];
    x = lower_bound(X.begin(), X.end(), x) - X.begin() + 1;
    ans[1][t] = bit.query(x);
    bit.modify(x, 1);
  }

  for(int i = 0; i < 2; ++i){
    for(int j = 0; j < n; ++j){
      cout << ans[i][j] << " \n"[j == n - 1];
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/