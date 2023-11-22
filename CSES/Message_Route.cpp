/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.07.2023 01:40:55
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
  vector<int> G[n + 1];
  vector<bool> vis(n + 1, false);
  vector<int> path(n + 1), dist(n + 1, 0);
  while(m--){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  
  queue<int> q;
  q.push(1);
  vis[1] = true;
  while(!q.empty()){
    int u = q.front();
    q.pop();
    for(int v : G[u]){
      if(!vis[v]){
        vis[v] = true;
        dist[v] = dist[u] + 1;
        path[v] = u;
        q.push(v);
      }
    }
  }

  if(!vis[n]){
    cout << "IMPOSSIBLE\n";
    return 0;
  } 

  int k = dist[n], u = n;
  vector<int> ans(k + 1);
  for(int i = k; i >= 0; --i){
    ans[i] = u;
    u = path[u];
  }
  cout << k + 1 << '\n';
  for(int i = 0; i <= k; ++i){
    cout << ans[i] << " \n"[i == k];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
