/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.08.2023 21:25:14
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int n;
vector<int> ans;
vector<vector<int>> G((int)2e5 + 5);
vector<bool> vis((int)2e5 + 5, false);

void dfs(int u){
  vis[u] = true;
  if(G[u].size() == 0) ans.push_back(u);
  else{
    for(int v : G[u]){
      if(!vis[v]){
        dfs(v);
        ans.push_back(v);
      } 
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n;
  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    for(int j = 0; j < x; ++j){
      int x;
      cin >> x;
      G[i].push_back(x);
    }  
  }
  
  dfs(1);
  set<int> s;
  for(int x : ans){
    if(!s.count(x)) cout << x << " ";
    s.insert(x);
  }
  cout << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/