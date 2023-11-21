/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 26.08.2023 15:53:03
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

bool covered(int x, int y, int x1, int y1, int x2, int y2) {
  return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifndef LOCAL
  setIO("billboard");
#endif
  
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  int cnt = 0;

  cnt += (covered(x1, y1, x3, y3, x4, y4));
  cnt += (covered(x1, y2, x3, y3, x4, y4));
  cnt += (covered(x2, y1, x3, y3, x4, y4));
  cnt += (covered(x2, y2, x3, y3, x4, y4));

  if (cnt <= 1){
    cout << (x2 - x1) * (y2 - y1) << '\n';
  } else if (cnt == 4) {
    cout << 0 << '\n';
  } else {
    x3 = max(x1, x3);
    x4 = min(x2, x4);
    y3 = max(y1, y3);
    y4 = min(y2, y4);
    cout << (x2 - x1) * (y2 - y1) - (x4 - x3) * (y4 - y3) << '\n';
  }


  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 