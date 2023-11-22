/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()
#define double long double

int main() {
  u_ying_u_with_whale;
  double mn, gx, gy, dx, dy;
  vector<pair<double, double>> p;
  cin >> gx >> gy >> dx >> dy;
  cout << fixed << setprecision(3);
  int mn_p = 0, cnt = 0;
  bool ok = false;
  double x, y;
  while(cin >> x >> y){
    p.push_back(make_pair(x, y));
    double d_to_h, g_to_h;
    d_to_h = sqrt((dx - x) * (dx - x) + (dy - y) * (dy - y));
    g_to_h = sqrt((gx - x) * (gx - x) + (gy - y) * (gy - y));
    if(d_to_h >= g_to_h * 2){
      mn_p = cnt;
      ok = true;
    }
    ++cnt;
  }
  if(ok){
    cout << "The gopher can escape through the hole at (" << p[mn_p].first << "," << p[mn_p].second << ").\n";
  }
  else{
    cout << "The gopher cannot escape.\n";
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
