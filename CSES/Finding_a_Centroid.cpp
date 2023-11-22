/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.08.2023 11:57:17
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
  for(int i = 0; i < n - 1; ++i){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> size(n + 1);
  auto Dfs = [&](int u, int p, auto Dfs) -> void{
    size[u] = 1;
    for(int v : G[u]){
      if(v == p) continue;
      Dfs(v, u, Dfs);
      size[u] += size[v];
    }
  };

  auto Centroid = [&](int u, int p, auto Centroid) -> int{
    for(int v : G[u]){
      if(v == p) continue;
      if(size[v] * 2 > n) return Centroid(v, u, Centroid);
    }
    return u;
  };

  Dfs(1, 1, Dfs);
  cout << Centroid(1, 1, Centroid) << '\n';


  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/