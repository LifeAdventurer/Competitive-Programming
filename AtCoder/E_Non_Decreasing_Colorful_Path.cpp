/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.01.2024 20:29:00
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
  vector<int> s(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> s[i];
  }
  vector<vector<int>> G(n + 1);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  vector<int> dp(n + 1, 0);
  vector<bool> vis(n + 1, false);
  
  using T = tuple<int, int, int>;
  priority_queue<T, vector<T>, greater<T>> pq;
  pq.push({s[1], dp[1] = 1, 1});

  while (!pq.empty()) {
    auto [val, du, u] = pq.top();
    pq.pop();
    if (du > dp[u]) continue;
    for (int v : G[u]) {
      if (s[v] >= s[u]) {
        int tmp = dp[u] + (s[v] > s[u]);
        if (tmp > dp[v]) {
          pq.push({s[v], dp[v] = tmp, v});
        }
      }
    }
  }

  cout << dp[n] << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/