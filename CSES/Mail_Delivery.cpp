/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.09.2023 22:18:25
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
  vector<set<int>> G(n);
  for(int i = 0; i < m; ++i){
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].insert(b);
    G[b].insert(a);
  }

  for(int i = 0; i < n; ++i){
    if(G[i].size() & 1){
      cout << "IMPOSSIBLE\n";
      return 0;
    }
  }

  vector<int> ans;
  function<void(int)> Dfs = [&](int x){
    while(G[x].size()){
      int v = *G[x].begin();
      G[x].erase(v);
      G[v].erase(x);
      Dfs(v);
    }
    ans.push_back(x);
  };

  Dfs(0);

  if((int) ans.size() != m + 1){
    cout << "IMPOSSIBLE\n";
    return 0;
  }

  for(int i = 0; i < m + 1; ++i){
    cout << ans[i] + 1 << " \n"[i == m];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/