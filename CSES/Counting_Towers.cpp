/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.08.2023 00:45:39
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
  
  vector<vector<long long>> dp(1000005, vector<long long>(2));
  dp[1][0] = 1;
  dp[1][1] = 1;
  for(int i = 2; i <= (int)1e6; ++i){
    dp[i][0] = (dp[i - 1][0] * 2 + dp[i - 1][1]) % mod;
    dp[i][1] = (dp[i - 1][0] + dp[i - 1][1] * 4) % mod;
  }
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << (dp[n][0] + dp[n][1]) % mod << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/