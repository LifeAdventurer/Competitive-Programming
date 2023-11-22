/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 22.09.2023 21:06:33
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

  vector<int> sz(n + 1);
  vector<long long> ans(n + 1);

  function<void(int, int, int)> Dfs = [&](int u, int p, int depth){
    sz[u] = 1;
    ans[1] += depth;
    for(int v : G[u]){
      if(v != p){
        Dfs(v, u, depth + 1);
        sz[u] += sz[v];
      }
    }
  };
  function<void(int, int)> Dfs2 = [&](int u, int p){
    for(int v : G[u]){
      if(v != p){
        ans[v] = ans[u] + n - sz[v] * 2;
        Dfs2(v, u);
      }
    }
  };

  Dfs(1, 1, 0);
  Dfs2(1, 1);

  for(int i = 1; i <= n; ++i){
    cout << ans[i] << " \n"[i == n];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/