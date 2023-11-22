/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.09.2023 01:56:52
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

inline const int read(){
  int ret{0}, f{1};
  char ch = getchar_unlocked();
  while (ch < '0' || ch > '9'){
    if (ch == '-')
      f = -1;
    ch = getchar_unlocked();
  }
  while (ch >= '0' && ch <= '9')
    ret = (ret << 3) + (ret << 1) + (ch ^ 48), ch = getchar_unlocked();
  return ret * f;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n = read(), m = read();
  //cin >> n >> m;
  vector<int> deg(n, 0);
  vector<vector<int>> G(n);
  for(int i = 0; i < m; ++i){
    int a = read() - 1, b = read() - 1;
    //cin >> a >> b;
    //a--; b--;
    G[a].push_back(b);
    deg[b]++;
  }
  deg[0]++;
  deg[n - 1]--;

  for(int i = 0; i < n; ++i){
    if(deg[i] != G[i].size()){
      cout << "IMPOSSIBLE\n";
      return 0;
    }
  }

  vector<int> ans;

  function<void(int)> Dfs = [&](int x){
    while(G[x].size()){
      int v = G[x].back();
      G[x].pop_back();
      Dfs(v);
    }
    ans.push_back(x);
  };

  Dfs(0);
  if(ans.size() != m + 1){
    cout << "IMPOSSIBLE\n";
    return 0;
  }
  //reverse(ans.begin(), ans.end());
  for(int i = m; i >= 0; --i){
    cout << ans[i] + 1 << " \n"[i == 0];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/