/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.08.2023 00:25:48
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
  map<string, int> mp;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    mp[s] = i;
  }
  while (m--) {
    string a, b;
    cin >> a >> b;
    dsu.unite(mp[a], mp[b]);
  }
  int k;
  cin >> k;
  while (k--) {
    string a, b;
    cin >> a >> b;
    cout << (dsu.same(mp[a], mp[b]) ? "Yes.\n" : "No.\n");
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/