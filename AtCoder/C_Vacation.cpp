/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.Mar.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, a, b, c;
  cin >> n;
  
  vector<vector<int>> dp(n, vector<int>(3));
  cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
  for(int i = 1; i < n; ++i){
    cin >> a >> b >> c;
    dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a;
    dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b;
    dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c;
  }

  cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << '\n';

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

