/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.08.2023 22:58:15
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
    long long m, k, a, b;
    cin >> m >> k >> a >> b;
    if(k * b >= m){
      m %= k;
      cout << max(0LL, m - a) << '\n';
      //debug(0);
    }
    else{
      m -= k * b;
      if(a >= m){
        cout << 0 << '\n';
        //debug(1);
        continue;
      }
      if(m < k){
        cout << max(0LL, m - a) << '\n';
        //debug(2);
        continue;
      }
      if(m == k){
        cout << min(1LL, max(0LL, m - a)) << '\n';
        //debug(3);
        continue;
      }
      long long ans = 0;
      if(a >= m % k){
        a -= m % k;
        m -= m % k;
      }
      else{
        ans += m % k - a;
        m -= m % k;
        a = 0;
      }
      if(a >= k){
        m -= (a / k) * k;
        a %= k;
      }
      cout << ans + (m / k) << '\n';
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/