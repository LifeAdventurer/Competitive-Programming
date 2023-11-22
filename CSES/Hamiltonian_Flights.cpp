/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.09.2023 20:12:53
 *
**/
#pragma GCC optimize("Ofast,fast-math,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int mod = 1000000007;

inline const int read(){
  int ret{0}, f{1};
  char ch = getchar_unlocked();
  while (ch < '0' || ch > '9'){
    if (ch == '-')
      f = -1;
    ch = getchar_unlocked();
  }
  while (ch >= '0' && ch <= '9')
    ret = (ret << 3) + (ret << 1) + (ch ^ 48), ch = getchar_unlocked();
  return ret * f;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n = read(), m = read();
  //cin >> n >> m;
  vector<vector<int>> G(n);
  vector<vector<long long>> dp(n, vector<long long>((1 << n)));
  dp[0][1] = 1;
  while(m--){
    int a = read() - 1, b = read() - 1;
    //cin >> a >> b;
    //a--; b--;
    G[b].push_back(a);
  }

  for(int i = 1; i < (1 << n); i += 2){
    if(i & (1 << (n - 1)) && i != ((1 << n) - 1)) continue;
    for(int j = 0; j < n; ++j){
      if(i & (1 << j)){
        for(int k : G[j]){
          dp[j][i] += dp[k][i ^ (1 << j)];
        }
        dp[j][i] %= mod;
      }
    }
  }

  cout << dp[n - 1][(1 << n) - 1] << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/