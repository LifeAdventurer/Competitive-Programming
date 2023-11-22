/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.09.2023 00:43:31
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
  vector<vector<int>> Adj1(n + 1), Adj2(n + 1);
  while(m--){
    int a, b;
    cin >> a >> b;
    Adj1[a].push_back(b);
    Adj2[b].push_back(a);
  }

  vector<bool> vis1(n + 1, false), vis2(n + 1, false);
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
  Dfs1(1);
  Dfs2(1);
  for(int i = 2; i <= n; ++i){
    if(!vis1[i]){
      cout << "NO\n";
      cout << 1 << " " << i << '\n';
      return 0;
    }
    if(!vis2[i]){
      cout << "NO\n";
      cout << i << " " << 1 << '\n';
      return 0;
    }
  }

  cout << "YES\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/