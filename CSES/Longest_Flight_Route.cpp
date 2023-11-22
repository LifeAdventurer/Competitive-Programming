/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.09.2023 22:17:42
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
  vector<int> deg(n, 0);
  while(m--){
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
    deg[b]++;
  }

  vector<int> dis(n, (int) -1e9);
  vector<int> p(n);
  queue<int> q;
  for(int i = 0; i < n; ++i){
    if(!deg[i]) q.push(i);
  }
  dis[0] = 0;

  while(!q.empty()){
    int u = q.front();
    q.pop();
    for(int v : G[u]){
      if(dis[v] < dis[u] + 1){
        dis[v] = dis[u] + 1;
        p[v] = u;
      }
      deg[v]--;
      if(!deg[v]) q.push(v);
    }
  }
  if(dis[n - 1] < 0){
    cout << "IMPOSSIBLE\n";
    return 0;
  }

  vector<int> ans = {n - 1};
  while(ans.back() != 0){
    ans.push_back(p[ans.back()]);
  }
  reverse(ans.begin(), ans.end());
  int len = ans.size();
  cout << len << '\n';
  for(int i = 0; i < len; ++i){
    cout << ans[i] + 1 << " \n"[i == len - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/