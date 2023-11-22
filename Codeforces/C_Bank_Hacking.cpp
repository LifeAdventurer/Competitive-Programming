/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.07.2023 16:29:25
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> v(n);
  multiset<int> ms;
  for(int i = 0; i < n; ++i){
    cin >> v[i];
    ms.insert(v[i]);
  }
  vector<vector<int>> G(n);
  for(int i = 0; i < n - 1; ++i){
    int u, v;
    cin >> u >> v;
    --u; --v;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  int ans = 2e9;
  for(int i = 0; i < n; ++i){
    int mx = v[i];
    ms.erase(ms.find(v[i]));
    for(int x : G[i]){
      mx = max(mx, v[x] + 1);
      ms.erase(ms.find(v[x]));
    }
    if(!ms.empty()) mx = max(mx, *ms.rbegin() + 2);
    ms.insert(v[i]);
    for(int x : G[i]){
      ms.insert(v[x]);
    }

    ans = min(ans, mx);
  }
  cout << ans << '\n';

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
