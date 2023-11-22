/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 26.08.2023 23:08:58
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("popcnt")
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
  const int N = (int) 5e4 + 5;
  vector<bitset<N>> ans(n); 
  vector<vector<int>> G(n);
  vector<int> deg(n, 0);
  while(m--){
    int a, b;
    cin >> a >> b;
    a--; b--;
    //debug(a, b);
    G[b].push_back(a);
    deg[a]++;
  }
  
  queue<int> q;
  for(int i = 0; i < n; ++i){
    if(deg[i] == 0){
      q.push(i);
      ans[i].set(i);
    } 
  }
  while(!q.empty()){
    int u = q.front();
    //debug(u);
    q.pop();
    for(int v : G[u]){
      deg[v]--;
      ans[v] |= ans[u];
      if(deg[v] == 0){
        q.push(v);
        ans[v].set(v);
      }
    }
  }

  for(int i = 0; i < n; ++i){
    cout << (int) ans[i].count() << " \n"[i == n - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/