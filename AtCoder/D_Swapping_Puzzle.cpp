/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.01.2024 17:47:10
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
  
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> b[i][j];
    }
  }
  int ans = (int) 1e9;
  vector<int> row(h);
  iota(row.begin(), row.end(), 0);
  do {
    vector<int> col(w);
    iota(col.begin(), col.end(), 0);
    do {
      bool match = true;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          match &= a[row[i]][col[j]] == b[i][j];
        }
      }
      if (match) {
        int inv = 0;
        for (int i = 0; i < h; i++) {
          for (int j = i + 1; j < h; j++) {
            inv += row[i] > row[j];
          }
        }
        for (int i = 0; i < w; i++) {
          for (int j = i + 1; j < w; j++) {
            inv += col[i] > col[j];
          }
        }
        ans = min(ans, inv);
      }
    } while (next_permutation(col.begin(), col.end()));
  } while (next_permutation(row.begin(), row.end()));
  cout << (ans == (int) 1e9 ? -1 : ans) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/