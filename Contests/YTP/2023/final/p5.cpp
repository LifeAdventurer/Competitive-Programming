/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.07.2023 14:02:54
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  int x_mn = 2e9, y_mn = 2e9, x_mx = 0, y_mx = 0;
  for(int i = 0; i < n; ++i){
    int x, y;
    cin >> x >> y;
    x_mn = min(x_mn, x);
    x_mx = max(x_mx, x);
    y_mn = min(y_mn, y);
    y_mx = max(y_mx, y);
  }
  int diffx = x_mx - x_mn, diffy = y_mx - y_mn, sumx = x_mx + x_mn, sumy = y_mx + y_mn;
  if(diffx == diffy){
    cout << (diffx + 1) / 2 << '\n';
    cout << (sumx / 2) << " " << (sumy / 2) << '\n';
  }
  else if(diffx > diffy){
    cout << (diffx + 1) / 2 << '\n';
    cout << (sumx / 2) << " " << max(0, (y_mx - (diffx + 1) / 2)) << '\n';
  }
  else{
    cout << (diffy + 1) / 2 << '\n';
    cout << max(0, (x_mx - (diffy + 1) / 2)) << " " << (sumy / 2) << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
