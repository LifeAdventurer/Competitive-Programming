/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 04.09.2023 20:55:12
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
  vector<vector<long long>> dis(n, vector<long long>(n, (long long) 1e18)), mp(n, vector<long long>(n, (long long) 1e18));
  while(m--){
    int u, v;
    long long d;
    cin >> u >> v >> d;
    u--; v--;
    mp[u][v] = mp[v][u] = dis[u][v] = dis[v][u] = min(dis[u][v], d);
  }
  long long ans = (long long) 1e18;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < i; ++j){
      for(int k = j + 1; k < i; ++k){
        ans = min(ans, dis[j][k] + mp[j][i] + mp[i][k]);
      }
    }
    for(int j = 0; j < n; ++j){
      for(int k = 0; k < n; ++k){
        dis[j][k] = min(dis[j][k], dis[j][i] + dis[i][k]);
      }
    }
  }
  cout << (ans == (long long) 1e18 ? "No solution." : to_string(ans)) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/