/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.09.2023 23:55:30
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
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
  
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<pair<int, int>>> G(n);
  vector<vector<long long>> ans(n);
  while(m--){
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    G[a].push_back({b, c});
  }

  using T = pair<long long, int>;
  priority_queue<T, vector<T>, greater<T>> pq;
  pq.push({0, 0});

  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();
    if((int) ans[u].size() == k) continue;
    ans[u].push_back(du);
    for(auto [v, w] : G[u]){
      if(ans[v].size() < k) pq.push({du + w, v});
    }
  }

  for(int i = 0; i < k; ++i){
    cout << ans[n - 1][i] << " \n"[i == k - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/