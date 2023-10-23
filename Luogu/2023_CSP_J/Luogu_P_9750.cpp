/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.10.2023 12:23:16
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
  
  int t, m;
  cin >> t >> m;
  while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    if(d < 0){
      cout << "NO\n";
      continue;
    }

    function<void(int, int)> fraction = [&](int fz, int fm){
      int g = gcd(fz, fm);
      fz /= g; fm /= g;
      if(fm == 1) cout << fz;
      else cout << fz << "/" << fm;
    };

    int x = (int) sqrt(d);
    if(x * x == d){
      int fz = 0, fm = 0;
      if(a < 0){
        fz = b + x; 
        fm = -2 * a;
      }
      else{
        fz = -b + x; 
        fm = 2 * a;
      }
      fraction(fz, fm);
      cout << '\n';
      continue;
    }
    for(int i = x; i > 0; --i){
      if(d % (i * i) == 0){
        x = i;
        break;
      }
    }
    int fz = 0, fm = 0;
    if(a < 0){
      fz = b;
      fm = -2 * a;
    }
    else{
      fz = -b;
      fm = 2 * a;
    }
    if(fz){
      fraction(fz, fm);
      cout << "+";
    }
    int r = d / (x * x);
    fz = x;
    if(a < 0) fm = -2 * a;
    else fm = 2 * a;
    int g = gcd(fz, fm);
    fz /= g; fm /= g;
    if(fm == 1){
      if(fz == 1) cout << "sqrt(" << r << ")";
      else cout << fz << "*sqrt(" << r << ")"; 
    }
    else{
      if(fz == 1) cout << "sqrt(" << r << ")/" << fm;
      else cout << fz << "*sqrt(" << r << ")/" << fm;
    }
    cout << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
