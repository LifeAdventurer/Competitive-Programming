/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.06.2023 23:50:07
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
  vector<int> v(m + 1);
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  vector<int> l(m + 1, 0), r(m + 1, 0);
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> v[j];
      if(j == 1) l[j] = dp[i - 1][j] + v[j];
      else l[j] = max(dp[i - 1][j], l[j  - 1]) + v[j];
    }
    for(int j = m; j >= 0; --j){
      if(j == m) r[j] = dp[i - 1][j] + v[j];
      else r[j] = max(dp[i - 1][j], r[j + 1]) + v[j];
      dp[i][j] = max(l[j], r[j]);
    }
  }

  cout<< *max_element(all(dp[n])) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
