/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.10.2023 22:35:14
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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int ans = 0;
    while(true){
      bool ok = true;  
      if(n < m){
        s += s;
        n *= 2;
        ans++;
        continue;
      }
      for(int i = 0; i < n - m + 1; ++i){
        ok = true;
        for(int j = 0; j < m; ++j){
          if(s[i + j] != t[j]){
            ok = false;
            break;
          }
        }
        if(ok) break;
      }
      if(ok) break;
      s += s;
      n *= 2;
      ans++;
      if(n > m * 8 && ans > 1){
        ans = -1;
        break;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/