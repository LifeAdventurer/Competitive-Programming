/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.09.2023 13:39:26
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
  vector<vector<int>> G(n + 1);
  vector<vector<int>> dp(n + 1, vector<int>(k, 0));
  for(int i = 2; i <= n; ++i){
    cin >> dp[i][0];
    G[dp[i][0]].push_back(i);
  }
  for(int i = 1; i < k; ++i){
    for(int j = 1; j <= n; ++j){
      dp[j][i] = dp[dp[j][i - 1]][i - 1];
    }
  }
  
  vector<int> depth(n + 1);
  function<void(int, int)> Dfs = [&](int u, int p){
    for(int v : G[u]){
      depth[v] = depth[u] + 1;
      Dfs(v, u);
    }
  };

  Dfs(1, 1);

  while(q--){
    int a, b;
    cin >> a >> b;
    if(depth[a] > depth[b]) swap(a, b);
    int diff = depth[b] - depth[a];
    for(int i = 0; i < k; ++i){
      if(diff & (1 << i)) b = dp[b][i];
    }
    if(a == b){
      cout << a << '\n';
      continue;
    }
    for(int i = k - 1; i >= 0; --i){
      if(dp[a][i] != dp[b][i]){
        a = dp[a][i];
        b = dp[b][i];
      }
    }
    cout << dp[a][0] << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/