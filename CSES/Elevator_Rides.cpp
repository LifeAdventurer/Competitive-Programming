/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.09.2023 00:47:27
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
  
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  vector<pair<int, int>> dp(1 << n, {1e9, 0});
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  
  dp[0] = {1, 0};
  for(int i = 0; i < (1 << n); ++i){
    for(int j = 0; j < n; ++j){
      if(i & (1 << j)){
        auto cur = dp[i ^ (1 << j)];
        if(cur.second + v[j] <= x){
          cur.second += v[j];
        }
        else{
          cur = {cur.first + 1, v[j]};
        }
        dp[i] = min(dp[i], cur);
      }
    }
  }

  cout << dp[(1 << n) - 1].first << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/