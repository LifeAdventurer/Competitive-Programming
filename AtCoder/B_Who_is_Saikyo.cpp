/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.08.2023 20:04:17
 *
**/
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

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
  ///*
  vector<bool> vis(n + 1, false);
  vector<vector<int>> G(n + 1);
  while(m--){
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
  }

  auto dfs = [&](int u, auto dfs) -> void{
    for(int v : G[u]){
      if(!vis[v]){
        vis[v] = true;
        dfs(v, dfs);
      } 
    }
  };

  for(int i = 1; i <= n; ++i){
    if(!vis[i]){
      dfs(i, dfs);
    }
  }
  int cnt = 0, ans;
  for(int i = 1; i <= n; ++i){
    if(!vis[i]){
      cnt++;
      ans = i;
    }
    //debug(cnt);
  }
  cout << (cnt == 1 ? ans : -1) << '\n';
  //*/
  //better method instead of dfs
  /*
  set<int> s;
  for(int i = 1; i <= n; ++i){
    s.insert(i);
  }
  while(m--){
    int a, b;
    cin >> a >> b;
    s.erase(b);
  }
  cout << (s.size() > 1 ? -1 : *s.begin()) << '\n';
  */


  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/