/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.Jun.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int maxn = 100000;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  vector<vector<bool>> dp(n + 1, vector<bool>(maxn + 5));
  dp[0][0] = true;
  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    for(int j = 0; j <= maxn; ++j){
      if(j + x <= maxn){
        if(dp[i - 1][j]){
          dp[i][j] = true;
          dp[i][j + x] = true;
        }
      }
    }
  }
  
  vector<int> ans;
  for(int i = 1; i <= maxn; ++i){
    if(dp[n][i]) ans.push_back(i);
  }

  cout << ans.size() << '\n';
  for(int i = 0; i < (int)ans.size(); ++i){
    cout << ans[i] << " \n"[i == (int)ans.size()];
  }

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
