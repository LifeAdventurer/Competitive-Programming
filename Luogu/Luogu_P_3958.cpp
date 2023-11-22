/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.08.2023 23:24:03
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
  
  int t;
  cin >> t;
  while(t--){
    int n, h, r;
    cin >> n >> h >> r;
    DSU dsu(n + 2);
    vector<tuple<int, int, int>> v;
    for(int i = 1; i <= n; ++i){
      int x, y, z;
      cin >> x >> y >> z;
      if(z <= r) dsu.unite(0, i);
      if(h - z <= r) dsu.unite(i, n + 1);
      if(i != 1){
        for(int j = 1; j <= (int) v.size(); ++j){
          auto [_x, _y, _z] = v[j - 1];
          long long dist = 1LL * (x - _x) * (x - _x) + 1LL * (y - _y) * (y - _y) + 1LL * (z - _z) * (z - _z);
          //debug(dist);
          if(dist <= 4LL * r * r) dsu.unite(i, j);
        }
      }
      v.push_back({x, y, z});
    }
    cout << (dsu.same(0, n + 1) ? "Yes\n" : "No\n");
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/