/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.09.2023 23:14:27
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
  
  int t;
  cin >> t;
  while(t--){
    int n, m, x1, y1, x2, y2, h, w;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2 >> h >> w;
    int ans = (int) 1e9;
    if(x2 - x1 + h <= n){
      ans = min(max(x2 - (n - h), 0), max(h - x1, 0));
    }
    if(y2 - y1 + w <= m){
      ans = min({ans, max(y2 - (m - w), 0), max(w - y1, 0)});
    }
    cout << (ans == (int) 1e9 ? -1 : ans) << '\n'; 
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/