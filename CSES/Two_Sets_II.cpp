/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.09.2023 18:58:57
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
  
  int n;
  cin >> n;
  int target = n * (n + 1) / 2;
  if(target & 1){
    cout << 0 << '\n';
    return 0;
  }

  vector<vector<int>> dp(n + 1, vector<int>(target / 2 + 1, 0));
  dp[0][0] = 1;
  for(int i = 1; i <= n; ++i){
    for(int j = 0; j <= target / 2; ++j){
      dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
      if(j >= i) dp[i][j] = (dp[i][j] + dp[i - 1][j - i]) % mod;
    }
  }

  cout << dp[n][target / 2] * 500000004LL % mod << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/