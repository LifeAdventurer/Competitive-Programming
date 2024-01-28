/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.01.2024 20:53:10
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
  
  int n;
  cin >> n;
  vector<pair<int, int>> v(n * 2 + 1);
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (x > y) 
      swap(x, y);
    v[x] = {0, i};
    v[y] = {1, i};
  }

  stack<int> st;
  for (int i = 1; i <= n * 2; i++) {
    auto [_, id] = v[i];
    if (_) {
      if (st.top() != id) {
        cout << "Yes\n";
        return 0;
      }
      st.pop();
    } else {
      st.push(id);
    }
  }
  cout << "No\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/