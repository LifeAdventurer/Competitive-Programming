/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.12.2023 20:41:52
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
  
  int n;
  cin >> n;
  DSU dsu(n + 1);
  vector<int> p;
  for(int i = 0, u, v; i < n; ++i){
    cin >> u >> v;
    if(u == 1 || v == 1){
      p.push_back(max(u, v));
    }
    else{
      dsu.unite(u, v);
    }
  }
  int mx = 0;
  for(int x : p){
    mx = max(mx, dsu.size(x));
  }
  cout << n - mx << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/