/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 04.08.2023 17:34:29
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
  vector<long long> dist(n + 1, 1e18);
  vector<vector<pair<int, int>>> G(n + 1);
  while(m--){
    int a, b, c;
    cin >> a >> b >> c;
    G[a].push_back({b, c});
  }
  dist[1] = 0;
  using T = pair<long long, int>;
  priority_queue<T, vector<T>, greater<T>> pq;
  pq.push({0, 1});
  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();
    if(du > dist[u]) continue;
    for(auto [v, w] : G[u]){
      if(dist[v] > dist[u] + w){
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }

  for(int i = 1; i <= n; ++i){
    cout << dist[i] << " \n"[i == n];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/