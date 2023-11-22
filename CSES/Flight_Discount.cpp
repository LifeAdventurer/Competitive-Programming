/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.09.2023 12:24:49
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
  vector<vector<pair<int, int>>> G(n);
  vector<array<long long, 2>> dis(n, {(long long) 1e18, (long long) 1e18});
  while(m--){
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    G[a].push_back({b, c});
  }

  dis[0][0] = dis[0][1] = 0;
  using T = tuple<long long, int, bool>;
  priority_queue<T, vector<T>, greater<T>> pq;
  pq.push({0, 0, false});
  while(!pq.empty()){
    auto [du, u, ok] = pq.top();
    pq.pop();
    if(du > dis[u][ok]) continue;
    for(auto [v, w] : G[u]){
      if(dis[v][ok] > dis[u][ok] + w){
        dis[v][ok] = dis[u][ok] + w;
        pq.push({dis[v][ok], v, ok});
      }
      if(!ok){
        if(dis[v][ok | 1] > dis[u][ok] + w / 2){
          dis[v][ok | 1] = dis[u][ok] + w / 2;
          pq.push({dis[v][ok | 1], v, ok | 1});
        }
      }
    }
  }

  cout << dis[n - 1][1] << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/