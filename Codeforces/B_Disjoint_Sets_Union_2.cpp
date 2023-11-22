/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.08.2023 00:59:52
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
  vector<int> e, mx, mn;

  DSU(int _n) : n(_n) {
    e.assign(n, -1);
    mx.resize(n);
    mn.resize(n);
    iota(mx.begin(), mx.end(), 1);
    iota(mn.begin(), mn.end(), 1);
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

  inline int Max(int x) {
    return (mx[get(x)]);
  }

  inline int Min(int x) {
    return (mn[get(x)]);
  }

  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if(x == y) return false;
    if(e[x] > e[y]) swap(x, y);
    e[x] += e[y];
    mx[x] = max(mx[x], mx[y]);
    mn[x] = min(mn[x], mn[y]);
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
  while(m--){
    string s;
    cin >> s;
    if(s == "union"){
      int a, b;
      cin >> a >> b;
      a--; b--;
      dsu.unite(a, b);
    }
    else{
      int x;
      cin >> x;
      x--;
      cout << dsu.Min(x) << " " << dsu.Max(x) << " " << dsu.size(x) << '\n';
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/