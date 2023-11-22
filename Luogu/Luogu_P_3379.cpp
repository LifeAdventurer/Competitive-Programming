/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.10.2023 13:31:07
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
  
  int n, q, s;
  cin >> n >> q >> s;
  vector<vector<int>> G(n + 1);
  for(int i = 1; i < n; ++i){
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  int k = __lg(n) + 1;
  vector<int> depth(n + 1);
  vector<vector<int>> p(n + 1, vector<int>(k));
  function<void(int, int)> Dfs = [&](int u, int par){
    for(int v : G[u]){
      if(v == par) continue;
      depth[v] = depth[u] + 1;
      p[v][0] = u;
      Dfs(v, u);
    }
  };

  Dfs(s, 0);
  for(int i = 1; i < k; ++i){
    for(int j = 1; j <= n; ++j){
      p[j][i] = p[p[j][i - 1]][i - 1];
    }
  }
  while(q--){
    int a, b;
    cin >> a >> b;
    if(depth[a] > depth[b]) swap(a, b);
    int diff = depth[b] - depth[a];
    for(int i = 0; i < k; ++i){
      if(diff & (1 << i)){
        b = p[b][i];
      }
    }
    if(a == b){
      cout << a << '\n';
      continue;
    }
    for(int i = k - 1; i >= 0; --i){
      if(p[a][i] != p[b][i]){
        a = p[a][i];
        b = p[b][i];
      }
    }
    cout << p[a][0] << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/