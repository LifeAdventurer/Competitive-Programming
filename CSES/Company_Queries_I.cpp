/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.09.2023 00:36:25
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
  
  int n, q;
  cin >> n >> q;
  int k = __lg(n) + 1;
  vector<vector<int>> dp(n + 1, vector<int>(k));
  for(int i = 2; i <= n; ++i){
    cin >> dp[i][0];
  }

  for(int i = 1; i < k; ++i){
    for(int j = 1; j <= n; ++j){
      dp[j][i] = dp[dp[j][i - 1]][i - 1];
    }
  }

  while(q--){
    int a, b;
    cin >> a >> b; 
    for(int i = 0; i < k; ++i){
      if(b & (1 << i)) a = dp[a][i];
    }
    cout << (!a ? -1 : a) << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/