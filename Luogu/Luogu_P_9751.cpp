/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.10.2023 14:33:16
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int INF = (1 << 30);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<pair<int, int>>> G(n);
  for(int i = 0; i < m; ++i){
    int u, v, w;
    cin >> u >> v >> w;
    u--; v--;
    G[u].push_back({v, w});
  }
  vector<vector<int>> dis(n, vector<int>(k, INF));
  using T = tuple<int, int, int>;
  priority_queue<T, vector<T>, greater<T>> pq;
  pq.push({dis[0][0] = 0, 0, 0});
  while(!pq.empty()){
    auto [d, u, i] = pq.top();
    pq.pop();
    if(dis[u][i] == INF) continue;
    for(auto [v, w] : G[u]){
      int j = (i + 1) % k, t = dis[u][i];
      if(t < w) t += (w - t + k - 1) / k * k;
      if(dis[v][j] > t + 1) pq.push({dis[v][j] = t + 1, v, j});
    }
  }
  cout << (dis[n - 1][0] == INF ? -1 : dis[n - 1][0]) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/