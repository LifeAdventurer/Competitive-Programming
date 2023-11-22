/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.08.2023 16:52:57
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  vector<bool> vis(n + 1, false);
  vector<int> p(n + 1);
  vector<vector<int>> G(n + 1);
  while(m--){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> ans;
  auto dfs = [&](int u, int pre, auto dfs){
    vis[u] = true;
    for(int v : G[u]){
      if(v == pre) continue;
      if(p[v]){
        ans.push_back(v);
        ans.push_back(u);
        while(ans.back() != v){
          ans.push_back(p[ans.back()]);
        }
        cout << ans.size() << '\n';
        for(int i = 0; i < (int)ans.size(); ++i){
          cout << ans[i] << " \n"[i == (int)ans.size() - 1];
        }
        exit(0);
      }
      p[v] = u;
      dfs(v, u, dfs);
    }
  };

  for(int i = 1; i <= n; ++i){
    if(!p[i]){
      p[i] = i;
      dfs(i, i, dfs);
    }
  }
  cout << "IMPOSSIBLE\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/