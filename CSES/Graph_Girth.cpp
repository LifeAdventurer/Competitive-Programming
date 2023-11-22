/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 04.09.2023 20:22:06
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
    G[b].push_back(a);
  }
  
  auto Bfs = [&](int x) -> int{
    int len = (int) 1e9;
    vector<int> dis(n, -1);
    dis[x] = 0;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
      int u = q.front();
      q.pop();
      for(int v : G[u]){
        if(dis[v] == -1){
          dis[v] = dis[u] + 1;
          q.push(v);
        }
        else if(dis[v] >= dis[u]){
          len = min(len, dis[v] + dis[u] + 1);
        }
      }
    }
    return len;
  };

  int ans = (int) 1e9;
  for(int i = 0; i < n; ++i){
    ans = min(ans, Bfs(i));
  }
  cout << (ans == (int) 1e9 ? -1 : ans) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/