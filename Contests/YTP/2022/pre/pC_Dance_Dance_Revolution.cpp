/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.07.2023 21:07:09
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<vector<int>> G;
vector<bool> check;
vector<bool> vis;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  G.resize(n + 1);
  check.resize(n + 1);
  vis.resize(n + 1);
  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    check[i] = (x == 1);
  }
  map<pair<int, int>, int> mp;
  for(int i = 1; i <= m; ++i){
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    mp[{a, b}] = i;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int cnt;
  auto dfs = [&](int u, auto&& dfs) -> void{
    cnt += check[u];
    vis[u] = true;
    for(auto v : G[u]){
      if(!vis[v]){
        dfs(v, dfs);
      }
    }
  };

  bool ok = true;
  for(int i = 1; i <= n; ++i){
    if(!vis[i]){
      cnt = 0;
      dfs(i, dfs);
      if(cnt & 1) ok = false;
    } 
  }
  
  if(ok){
    cout << "Yes\n";
    vector<int> chain;
    auto dfs2 = [&](int u, auto&& dfs2) -> void{
      chain.push_back(u);
      vis[u] = true;
      for(auto v : G[u]){
        if(!vis[v]){
          dfs2(v, dfs2);
        }
      }
    };

    int start = 1;
    vis = vector<bool> (n + 1, false);
    for(int i = 1; i <= n; ++i){
      if(G[i].size() == 1) start = i;
    }
    dfs2(start, dfs2);
    vector<int> ans;
    for(int i = 0; i < n - 1; ++i){
      if(check[chain[i]]){
        int x = chain[i], y = chain[i + 1];
        if(x > y) swap(x, y);
        ans.push_back(mp[{x, y}]);
        if(check[chain[i + 1]]) check[chain[i + 1]] = false;
        else check[chain[i + 1]] = true;
      }
    }

    int p = ans.size();
    cout << p << '\n';
    for(int i = 0; i < p; ++i){
      cout << ans[i] << " \n"[i == p - 1];
    }
  }
  else{
    cout << "No\n";
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
