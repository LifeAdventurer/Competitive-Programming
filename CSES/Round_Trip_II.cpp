/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.09.2023 10:21:12
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
  vector<vector<int>> G(n);
  while(m--){
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
  }

  vector<int> p(n, 0);
  vector<int> vis(n, 0);
  
  function<void(int)> Dfs = [&](int u){
    vis[u] = 1;
    for(int v : G[u]){
      if(vis[v] == 1){
        vector<int> ans = {u};
        while(ans.back() != v){
          ans.push_back(p[ans.back()]);
        }
        ans.push_back(u);
        reverse(ans.begin(), ans.end());
        int len = ans.size();
        cout << len << '\n';
        for(int i = 0; i < len; ++i){
          cout << ans[i] + 1 << " \n"[i == len - 1];
        }
        exit(0);
      }
      if(!vis[v]){
        p[v] = u;
        Dfs(v);
      }
    }
    vis[u]++;
  };

  for(int i = 0; i < n; ++i){
    if(!vis[i]){
      //p[i] = i;
      Dfs(i);
    }
  }

  cout << "IMPOSSIBLE\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/