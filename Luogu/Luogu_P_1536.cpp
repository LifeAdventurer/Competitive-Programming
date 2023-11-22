/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.08.2023 21:26:15
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
  //vector<int> mn, mx;

  DSU(int _n) : n(_n) {
    e.assign(n, -1);
    //mn.resize(n);
    //mx.resize(n);
    //iota(mn.begin(), mn.end(), 1);
    //iota(mx.begin(), mx.end(), 1);
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

  //inline int Min(int x) {
  //  return (mn[get(x)]);
  //}

  //inline int Max(int x) {
  //  return (mx[get(x)]);
  //}

  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if(x == y) return false;
    if(e[x] > e[y]) swap(x, y);
    e[x] += e[y];
    e[y] = x;
    //mx[x] = max(mx[x], mx[y]);
    //mn[x] = min(mn[x], mn[y]);
    return true;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  while(cin >> n >> m && n){
    DSU dsu(n);
    while(m--){
      int a, b;
      cin >> a >> b;
      //debug(a, b);
      a--; b--;
      dsu.unite(a, b);
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i){
      cnt += (dsu.get(i) == i);
    }
    cout << cnt - 1 << '\n';
  }  

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/