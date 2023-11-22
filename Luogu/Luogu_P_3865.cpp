/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.09.2023 13:13:53
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, q;
  cin >> n >> q;
  int lg = __lg(n) + 1;
  vector<vector<int>> st(n, vector<int>(lg));
  for(int i = 0; i < n; ++i){
    cin >> st[i][0];
  }
  for(int i = 1; i < lg; ++i){
    for(int j = 0; j <= n - (1 << i); ++j){
      st[j][i] = max(st[j][i - 1], st[j + (1 << (i - 1))][i - 1]); 
    }
  }
  while(q--){
    int l, r;
    cin >> l >> r;
    l--; r--;
    int k = __lg(r - l + 1);
    cout << max(st[l][k], st[r - (1 << k) + 1][k]) << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/