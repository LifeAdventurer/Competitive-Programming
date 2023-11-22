/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.09.2023 14:54:07
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
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n), deg(n, 0), c(n);
    for(int i = 0; i < n; ++i){
      cin >> v[i];
      v[i]--;
      deg[v[i]]++;
    }
    for(int i = 0; i < n; ++i){
      cin >> c[i];
    }
    
    queue<int> q;
    for(int i = 0; i < n; ++i){
      if(deg[i] == 0) q.push(i);
    }
    vector<bool> vis(n, false);
    vector<int> ans;
    while(!q.empty()){
      int u = q.front();
      q.pop();
      ans.push_back(u);
      vis[u] = true;
      deg[v[u]]--;
      if(deg[v[u]] == 0) q.push(v[u]);
    }
    for(int i = 0; i < n; ++i){
      if(vis[i]) continue;
      int x = i, t = -1;
      vector<int> p;
      while(!vis[x]){
        vis[x] = true;
        if(t == -1 || c[p[t]] > c[x]){
          t = p.size();
        }
        p.push_back(x);
        x = v[x];
      }
      for(int i = t + 1; i < p.size(); ++i){
        ans.push_back(p[i]);
      }
      for(int i = 0; i <= t; ++i){
        ans.push_back(p[i]);
      }
    }

    for(int i = 0; i < n; ++i){
      cout << ans[i] + 1 << " \n"[i == n - 1];
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/