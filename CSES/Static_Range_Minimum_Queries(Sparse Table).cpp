/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.08.2023 01:11:50
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
  vector<vector<int>> v(n, vector<int>(__lg(n) + 1));
  for(int i = 0; i < n; ++i){
    cin >> v[i][0];
  }
  for(int i = 1; i <= __lg(n); ++i){
    for(int j = 0; j <= n - (1 << i); ++j){
      v[j][i] = min(v[j][i - 1], v[j + (1 << (i - 1))][i - 1]);
    }
  }
  //debug(v);

  while(q--){
    int a, b;
    cin >> a >> b;
    a--, b--;
    int k = __lg(b - a + 1);
    cout << min(v[a][k], v[b - (1 << k) + 1][k]) << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/