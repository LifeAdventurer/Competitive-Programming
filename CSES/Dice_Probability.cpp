/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 22.09.2023 00:33:02
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
  
  int n, a, b;
  cin >> n >> a >> b;
  vector<vector<double>> dp(n + 1, vector<double>(6 * n + 1)); 
  dp[0][0] = 1.0;
  for(int i = 1; i <= n; ++i){
    for(int j = 0; j <= 6 * n; ++j){
      for(int k = 1; k <= 6; ++k){
        if(j - k >= 0) dp[i][j] += dp[i - 1][j - k] * (1.0 / 6);
      }
    }
  }

  double ans = 0;
  for(int i = a; i <= b; ++i){
    ans += dp[n][i];
  }
  cout << fixed << setprecision(6) << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/