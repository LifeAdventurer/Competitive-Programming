/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.08.2023 13:48:10
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int N = 10;
int dp[N][N][N][N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<vector<int>> v(n + 1, vector<int>(n + 1));
  int x, y, c;
  while(cin >> x >> y >> c && x){
    v[x][y] = c;

    for(int i = 1; i <= n; ++i){
      for(int j = 1; j <= n; ++j){
        for(int k = 1; k <= n; ++k){
          for(int l = 1; l <= n; ++l){
            dp[i][j][k][l] = max({dp[i - 1][j][k - 1][l], dp[i - 1][j][k][l - 1], dp[i][j - 1][k - 1][l], dp[i][j - 1][k][l - 1]}) + v[i][j] + (i == k && j == l ? 0 : v[k][l]);
          }
        }
      }
    }
  }

  cout << dp[n][n][n][n] << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/