/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.08.2023 15:25:38
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
  
  int n, m;
  cin >> n >> m;
  vector<vector<long long>> dp(n, vector<long long>(m + 2, 0));
  int x;
  cin >> x;
  if(x){
    dp[0][x] = 1;
  }
  else{
    for(int i = 1; i <= m; ++i){
      dp[0][i] = 1;
    }
  }
  for(int i = 1; i < n; ++i){
    cin >> x;
    if(x){
      dp[i][x] = (dp[i][x] + dp[i - 1][x - 1] + dp[i - 1][x] + dp[i - 1][x + 1]) % mod;
    }
    else{
      for(int j = 1; j <= m; ++j){
        dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % mod;
      }
    }
  }
  cout << accumulate(dp[n - 1].begin() + 1, dp[n - 1].begin() + m + 1, 0LL) % mod << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/