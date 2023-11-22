/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.09.2023 23:42:26
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int dp[10][10], cnt[10];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  for(int i = 0; i < 10; ++i){
    dp[i][0] = 1;
  }
  cnt[0] = 10;
  for(int i = 1; i < 10; ++i){
    for(int j = 0; j < 10; ++j){
      for(int k = 0; k < 10; ++k){
        if(abs(j - k) >= 2) dp[j][i] += dp[k][i - 1];
      }
      if(j) cnt[i] += dp[j][i]; 
    }
  }
  
  function<int(int)> Solve = [&](int x){ 
    if(x == 0) return 1;
    string s = to_string(x);
    int n = s.size(), res = 1;
    for(int i = 0; i < n - 1; ++i){
      res += cnt[i];
    }
    for(int i = 1; i < s[0] - '0'; ++i){
      res += dp[i][n - 1];
    }
    for(int i = 1; i < n; ++i){
      for(int j = 0; j < s[i] - '0'; ++j){
        if(abs(j - (s[i - 1] - '0')) >= 2) res += dp[j][n - i - 1];
      }
      if(abs(s[i] - s[i - 1]) < 2){
        res--;
        break;
      } 
    }
    return res;
  };

  int a, b;
  cin >> a >> b;
  cout << Solve(b) - Solve(a - 1) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/