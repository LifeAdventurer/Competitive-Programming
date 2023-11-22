/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 10.09.2023 15:28:23
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

struct Segtree {
  int n;
  vector<long long> tree;
  Segtree(int _n) : tree(2 * _n, 0), n(_n) {}
  
  void modify(int pos, long long val) {
    for (tree[pos += n] = val; pos > 1; pos >>= 1) {
      tree[pos >> 1] = max(tree[pos], tree[pos ^ 1]);
    }
  }
  
  int query(int x) {
    int p = 1;
    while (p < n) {
      if (tree[p << 1] >= x) p <<= 1;
      else p = p << 1 | 1;
    }
    return p;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  int k = 1 << (__lg(n - 1) + 1);
  Segtree st(k);
  for(int i = 0; i < n; ++i){
    int x;
    cin >> x;
    st.modify(i, x);
  }
  
  vector<int> ans;
  for(int i = 0; i < m; ++i){
    int x;
    cin >> x;
    if(x > st.tree[1]){
      ans.push_back(0);
    }
    else{
      int p = st.query(x);
      st.modify(p - k, st.tree[p] - x);
      ans.push_back(p - k + 1);
    }
  }

  for(int i = 0; i < m; ++i){
    cout << ans[i] << " \n"[i == m - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/