/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.07.2023 16:14:32
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long n, m, k, g[40][40] = {}, ans = 0;
  cin >> n >> m >> k;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; ++i){
    cin >> a[i];
  }
  while(m--){
    int x, y;
    cin >> x >> y;
    g[a[x]][a[y]]=1;
    g[a[y]][a[x]]=1;
  }
  vector<int> c(n + 1);
  for(int i = 1; i <= n; ++i){
    cin >> c[i];
  }
  vector<int> v;
  for(int i = 0; i < (1 << k); ++i){
    v.clear();
    for(int j = 0; j < k; ++j){
      if(i & (1 << j)){
        v.push_back(j + 1);
      }
    }
    bool ok = true;
    for(int j = 0; j < v.size(); ++j){
      for(int k = j + 1; k < v.size(); ++k){
        if(g[v[j]][v[k]]) ok = false;
      }
    }
    if(ok){
      int cnt = 0;
      for(int j = 0; j < v.size(); ++j){
        cnt += c[v[j]];
      }
      ans = max(ans, cnt);
    }
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
