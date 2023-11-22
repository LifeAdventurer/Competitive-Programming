/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.08.2023 01:29:33
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

  queue<int> q;
  for(int i = 0; i < n; ++i){
    if(deg[i] == 0){
      q.push(i);
    }
  }

  vector<int> ans;
  while(!q.empty()){
    int u = q.front();
    q.pop();
    ans.push_back(u);
    for(int v : G[u]){
      deg[v]--;
      if(deg[v] == 0){
        q.push(v);
      }
    }
  }
  
  if(ans.size() < n){
    cout << "IMPOSSIBLE\n";
    return 0;
  }

  for(int i = 0; i < n; ++i){
    cout << ans[i] + 1 << " \n"[i == n - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/