/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.Mar.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m, 0)), dp(n, vector<int>(m, 0));
  dp[0][0] = 1;
  for(int i = 0; i < n; ++i){
    string s;
    cin >> s;
    for(int j = 0; j < m; ++j){
      v[i][j] = s[j] - '0';
    }
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(i > 0 && abs(v[i][j] - v[i - 1][j]) == 1) dp[i][j] += dp[i - 1][j];
      if(j > 0 & abs(v[i][j] - v[i][j - 1]) == 1) dp[i][j] += dp[i][j - 1];
    }
  }

  cout << dp[n - 1][m - 1] << '\n';

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
