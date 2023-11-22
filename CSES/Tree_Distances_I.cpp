/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.09.2023 00:22:09
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
  vector<vector<int>> G(n + 1);
  for(int i = 1; i < n; ++i){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<array<int, 2>> dis(n + 1);
  int node = 1, node2 = 1, mx = 0;
  function<void(int, int, int)> Dfs = [&](int u, int p, int i){
    for(int v : G[u]){
      if(v != p){
        dis[v][i] = dis[u][i] + 1;
        if(dis[v][i] > mx){
          (i ? node : node2) = v;
          mx = dis[v][i];
        } 
        Dfs(v, u, i);
      }
    }
  };

  Dfs(1, 1, 1);
  mx = 0;
  Dfs(node, node, 0);
  mx = 0;
  dis[node2][1] = 0;
  Dfs(node2, node2, 1);

  for(int i = 1; i <= n; ++i){
    cout << max(dis[i][0], dis[i][1]) << " \n"[i == n];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/