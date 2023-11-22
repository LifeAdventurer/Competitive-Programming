/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 26.08.2023 23:09:56
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
  DSU dsu(n);
  vector<tuple<int, int, int>> v;
  while (m--) {
    int x, y, t;
    cin >> x >> y >> t;
    x--; y--;
    v.push_back({t, x, y});
  }
  sort(v.begin(), v.end());
  int ans = 0;
  for (auto [t, x, y] : v) {
    //debug(x, y, t);
    if (dsu.unite(x, y)) {
      ans = t;
      n--;
    }
    if (n == 1) {
      cout << ans << '\n';
      return 0;
    }
  }
  cout << -1 << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/