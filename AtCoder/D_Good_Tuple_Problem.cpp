/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 04.11.2023 20:16:53
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
  vector<pair<int, int>> v(m);
  for(int i = 0; i < m; ++i){
    cin >> v[i].first;
  }
  for(int i = 0; i < m; ++i){
    cin >> v[i].second;
  }
  vector<bool> vis(n, false);
  vector<bool> team(n);
  vector<set<int>> G(n);
  for(int i = 0; i < m; ++i){
    int a = v[i].first;
    int b = v[i].second;
    a--; b--;
    if(a == b){
      cout << "No\n";
      return 0;
    }
    G[a].insert(b);
    G[b].insert(a);
  }

  vector<int> ans;
  function<void(int, bool)> Dfs = [&](int u, bool t){
    vis[u] = true;
    team[u] = t;
    for(int v : G[u]){
      if(!vis[v]){
        Dfs(v, t ^ 1);
      }
      else if(team[v] == team[u]){
        cout << "No\n";
        exit(0);
      }
    }
  };

  for(int i = 0; i < n; ++i){
    if(!vis[i]){
      Dfs(i, 0);
    }
  }
  cout << "Yes\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/