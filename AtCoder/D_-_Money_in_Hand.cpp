/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int n, x;
vector<int> a(55), b(55);

bool solve(){
  vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));

  dp[0][0] = true;

  for(int i = 1; i <= n; ++i){
    for(int j = 0; j <= x; ++j){
      dp[i][j] = dp[i - 1][j];

      if(j >= a[i - 1]){
        for(int k = 1; k <= b[i - 1]; k++){
          if(j >= k * a[i - 1]){
            dp[i][j] = dp[i][j] || dp[i - 1][j - k * a[i - 1]];
          }
        }
      }
    }
  }

  return dp[n][x];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n >> x;

  for(int i = 0; i < n; ++i){
    cin >> a[i] >> b[i];
  }

  cout << (solve() ? "Yes\n" : "No\n");

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
