/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.10.2023 22:49:32
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
  
  int tt;
  cin >> tt;
  while(tt--){
    long long a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;
    if(sum <= 6){
      cout << "YES\n";
      continue;
    }
    if(sum % 3 != 0 && sum % 4 != 0 && sum % 5 != 0 && sum % 6 != 0){
      cout << "NO\n";
      continue;
    }
    bool ok = false;
    for(int i = 3; i <= 6; ++i){
      if(sum % i != 0) continue;
      int x = sum / i;
      if(a % x == 0 && b % x == 0 && c % x == 0){
        ok = true;
        break;
      }
    }
    cout << (ok ? "YES\n" : "NO\n");
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/