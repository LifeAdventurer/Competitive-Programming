/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 25.Dec.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int mod = 1000000007;

int check(int x){
  if(x == -1) return 0;
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, q;
  cin >> n >> m >> q;
  
  vector<vector<int>> dp(n, vector<int>(m, 0));

  dp[0][0] = 1;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      bool ok;
      cin >> ok;
      if(ok) dp[i][j] = -1;
      else if(i && j){
        dp[i][j] = check(dp[i][j - 1]) + check(dp[i - 1][j]);
      }
      else if(i){
        dp[i][j] = check(dp[i - 1][j]);
      }
      else if(j) dp[i][j] = check(dp[i][j - 1]);
      dp[i][j] %= mod; 
    }
  }

  while(q--){
    int x, y;
    cin >> x >> y;
    cout << dp[x][y] << '\n';
  }

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
