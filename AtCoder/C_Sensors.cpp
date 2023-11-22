/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.10.2023 20:08:21
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

class DSU {
 public:
  int n;
  vector<int> e;

  DSU(int _n) : n(_n) {
    e.assign(n, -1);
  }

  inline int get(int x) {
    return (e[x] < 0 ? x : (e[x] = get(e[x])));
  }

  inline bool same(int x, int y) {
    return (get(x) == get(y));
  }

  inline int size(int x) {
    return (-e[get(x)]);
  }

  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if(x == y) return false;
    if(e[x] > e[y]) swap(x, y);
    e[x] += e[y];
    e[y] = x;
    return true;
  }
};


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  vector<vector<char>> mp(n + 1, vector<char>(m + 1));
  vector<pair<int, int>> p;
  int ans = 0;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> mp[i][j];
      if(mp[i][j] == '#'){
        p.push_back({i, j});
        ans++;
      }  
    }
  }

  DSU dsu((n + 1) * (m + 1) + 1);
  for(int i = 0; i < (int) p.size(); ++i){
    for(int j = 0; j < 3; ++j){
      for(int k = 0; k < 3; ++k){
        if(j == 1 && k == 1) continue;
        auto [x, y] = p[i];
        int X = x - 1 + j;
        int Y = y - 1 + k;
        if(X < 1 || Y < 1 || X > n || Y > m || mp[X][Y] != '#') continue;
        if(dsu.unite((x - 1) * m + y, (X - 1) * m + Y)){
          ans--;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/