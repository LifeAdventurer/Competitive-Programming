/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 04.09.2023 00:19:16
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define UL Solve(a + l - 1, b + l - 1, a, b, l)
#define UR Solve(a + l - 1, b + l, a, b + l, l)
#define DL Solve(a + l, b + l - 1, a + l, b, l)
#define DR Solve(a + l, b + l, a + l, b + l, l)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int k, p, q;
  cin >> k >> p >> q;

  function<void(int, int, int, int, int)> Solve = [&](int x, int y, int a, int b, int l){
    //debug(x, y, a, b, l);
    if(l == 1) return;
    l >>= 1;
    if(x - a < l && y - b < l){
      cout << a + l << " " << b + l << " 1\n";
      Solve(x, y, a, b, l);
      UR; DL; DR;
    }
    else if(x - a >= l && y - b >= l){
      cout << a + l - 1 << " " << b + l - 1 << " 4\n";
      Solve(x, y, a + l, b + l, l);
      UL; UR; DL;
    }
    else if(x - a >= l){
      cout << a + l - 1 << " " << b + l << " 3\n";
      Solve(x, y, a + l, b, l);
      UL; UR; DR;
    }
    else{
      cout << a + l << " " << b + l - 1 << " 2\n";
      Solve(x, y, a, b + l, l);
      UL; DL; DR;
    }
  };

  Solve(p, q, 1, 1, (1 << k));

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/