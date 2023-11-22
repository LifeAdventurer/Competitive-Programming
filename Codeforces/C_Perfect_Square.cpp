/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.10.2023 22:59:05
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
    int n;
    cin >> n;
    vector<vector<char>> mp(n, vector<char>(n));
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        cin >> mp[i][j];
      }
    }

    function<int(array<char, 4>)> Upd = [&](array<char, 4> a){ 
      array<int, 4> x;
      int mx = 0;
      for(int i = 0; i < 4; ++i){
        x[i] = a[i] - 'a';
        mx = max(mx, x[i]);
      }
      int res = 1 << 30;
      for(int i = mx; i < 26; ++i){
        int sum = 0;  
        for(int j = 0; j < 4; ++j){
          sum += (i + 26 - x[j]) % 26;
        }
        res = min(res, sum);
      }
      return res;
    };

    int ans = 0;
    int k = n / 2;
    for(int i = 0; i < n / 2; ++i){
      for(int j = 0; j < n / 2; ++j){
        ans += Upd({mp[i][j], mp[j][n - i - 1], mp[n - i - 1][n - j - 1], mp[n - j - 1][i]});
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