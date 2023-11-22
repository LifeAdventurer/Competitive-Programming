/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.08.2023 14:49:34
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
  
  int n;
  cin >> n;
  vector<vector<int>> G(n);
  for(int i = 0; i < n - 1; ++i){
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<int> dist(n, 0);
  auto dfs = [&](int u, int p, auto dfs) -> void{
    for(int v : G[u]){
      if(v == p) continue;
      dist[v] = dist[u] + 1;
      dfs(v, u, dfs);
    }
  };

  dfs(0, 0, dfs);
  int node = 0, mx = -1;
  for(int i = 0; i < n; ++i){
    if(dist[i] > mx){
      mx = dist[i];
      node = i;
    }
  }
  dist[node] = 0;
  dfs(node, node, dfs);
  for(int i = 0; i < n; ++i){
    mx = max(mx, dist[i]);
  }
  cout << mx << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/