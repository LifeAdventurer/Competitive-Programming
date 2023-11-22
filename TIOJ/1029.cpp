/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.09.2023 14:02:33
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<long long> v(n + 1), pre(n + 1);
  for(int i = 1; i <= n; ++i){
    cin >> v[i];
  }
  partial_sum(v.begin(), v.end(), pre.begin());

  vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1));
  function<long long(int, int)> Solve = [&](int l, int r){
    if(dp[l][r] != -1) return dp[l][r];
    if(l == r) return v[l];
    dp[l][r] = max(v[l] + pre[r] - pre[l] - Solve(l + 1, r), v[r] + pre[r - 1] - pre[l - 1] - Solve(l, r - 1));
    return dp[l][r];
  };

  long long a = Solve(1, n);
  cout << a << " " << pre[n] - a << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/