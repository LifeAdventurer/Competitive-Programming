/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.01.2024 20:05:06
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
  vector<pair<int, int>> v(n);
  for (int i = 1; i <= n; i++) {
    v[i - 1] = {i, 0};
  }
  reverse(v.begin(), v.end());
  while (q--) {
    int cmd;
    cin >> cmd;
    if (cmd == 1) {
      char c;
      cin >> c;
      auto [x, y] = v.back();
      if (c == 'U') {
        v.push_back({x, y + 1});
      } else if (c == 'D') {
        v.push_back({x, y - 1});
      } else if (c == 'R') {
        v.push_back({x + 1, y});
      } else {
        v.push_back({x - 1, y});
      }
    } else {
      int p;
      cin >> p;
      auto [x, y] = *(v.end() - p);
      cout << x << " " << y << '\n';
    }
  } 

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/