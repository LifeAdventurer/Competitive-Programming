/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.06.2023 22:06:58
 *
**/
#pragma GCC optimize("unroll-loops,Ofast")
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    
  int n, m;
  cin >> n >> m;
  bool ok = true;
  vector<vector<int>> G(n);
  vector<int> vis(n);
  vector<bool> team(n);

  while(m--){
    int a, b;
    cin >> a >> b;
    --a, --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
    
  auto dfs = [&](int u, bool t, auto&& dfs) -> void{
    vis[u] = true;
    team[u] = t;
    for(int v : G[u]){
      if(!vis[v]){
        dfs(v, t ^ 1, dfs);
      }
      else if(team[v] == team[u]){
        ok = false;
        break;
      }
    }
    return;
  };
    
  for(int i = 0; i < n; ++i){
    if(!vis[i]){
      dfs(i, 0, dfs);
    }
    if(!ok){
      cout << "IMPOSSIBLE\n";
      return 0;
    }
  }
  for(int i = 0; i < n; ++i){
    cout << (team[i] ? 2 : 1) << " \n"[i == n - 1];
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
