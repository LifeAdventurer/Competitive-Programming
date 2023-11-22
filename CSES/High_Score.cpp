/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.09.2023 22:36:58
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
  
  int n, m;
  cin >> n >> m;
  vector<tuple<int, int, int>> G;
  vector<vector<int>> Adj1(n), Adj2(n);
  while(m--){
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    G.push_back({a, b, -c});
    Adj1[a].push_back(b);
    Adj2[b].push_back(a);
  }

  vector<bool> vis1(n, false), vis2(n, false);
  function<void(int)> Dfs1 = [&](int u){
    vis1[u] = true;
    for(int v : Adj1[u]){
      if(!vis1[v]) Dfs1(v);
    }
  };
  function<void(int)> Dfs2 = [&](int u){
    vis2[u] = true;
    for(int v : Adj2[u]){
      if(!vis2[v]) Dfs2(v);
    }
  };
  Dfs1(0);
  Dfs2(n - 1);

  vector<long long> dis(n, (long long) 1e18);
  dis[0] = 0;
  bool ok = true;
  for(int i = 0; i < n; ++i){
    ok = true;
    for(auto [u, v, w] : G){
      if(dis[v] > dis[u] + w){
        dis[v] = dis[u] + w;
        ok = false;
        if(i == n - 1 && vis1[v] && vis2[v]){
          cout << "-1\n";
          return 0;
        }
      }
    }
    if(ok) break;
  }
  cout << -dis[n - 1] << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/