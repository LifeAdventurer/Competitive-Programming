/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.07.2023 23:48:38
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int dp[55][55][55][55];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      char c;
      cin >> c;
      dp[i][j][i][j] = (c == '#');
    }
  }
  for(int h = 1; h <= n; ++h){
    for(int w = 1; w <= n; ++w){
      for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
          int k = i + h - 1, l = j + w - 1;
          if(k >= n || l >= n) continue;
          if((i == k && j == l)) continue;
          int x = max(h, w);
          for(int p = i; p < k; ++p){
            x = min(x, dp[p + 1][j][k][l] + dp[i][j][p][l]);
          }
          for(int p = j; p < l; ++p){
            x = min(x, dp[i][p + 1][k][l] + dp[i][j][k][p]);
          }
          dp[i][j][k][l] = x;
        }
      }
    }
  }
  cout << dp[0][0][n - 1][n - 1] << '\n';
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
