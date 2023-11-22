/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.09.2023 19:05:38
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
  vector<int> ans(n);
  vector<set<int>> s(n);
  vector<vector<int>> G(n);
  for(int i = 0; i < n; ++i){
    int x;
    cin >> x;
    s[i].insert(x);
  }
  for(int i = 1; i < n; ++i){
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }


  function<void(int, int)> Dfs = [&](int u, int p){
    for(int v : G[u]){
      if(v != p){
        Dfs(v, u);
        if(s[u].size() < s[v].size()){
          swap(s[u], s[v]);
        }
        for(int x : s[v]){
          s[u].insert(x);
        }
      }
    }
    ans[u] = s[u].size();
  };

  Dfs(0, 0);

  for(int i = 0; i < n; ++i){
    cout << ans[i] << " \n"[i == n - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/