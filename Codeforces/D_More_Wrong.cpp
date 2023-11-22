/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.08.2023 19:50:35
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
    int n;
    cin >> n;

    auto Query = [&](int l, int r) -> int{
      if(l == r) return 0;
      cout << "? " << l << " " << r << endl;
      int x;
      cin >> x;
      return x;
    };

    auto Solve = [&](int l, int r, auto Solve) -> int{
      if(l == r) return l;
      int mid = (l + r) >> 1;
      int ll = Solve(l, mid, Solve);
      int rr = Solve(mid + 1, r, Solve);
      
      int x = Query(ll, rr - 1);
      int y = Query(ll, rr);
      return (x == y ? rr : ll);
    };

    int ans = Solve(1, n, Solve);
    cout << "! " << ans << endl;
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/