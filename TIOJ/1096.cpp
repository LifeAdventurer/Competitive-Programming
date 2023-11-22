/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.09.2023 13:13:53
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("popcnt")
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
  
  int n;
  while(cin >> n && n){
    vector<vector<int>> dis(n, vector<int>(n, 1e9));
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        int x;
        cin >> x;
        if(x) dis[i][j] = x;
      }
    }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        for(int k = 0; k < n; ++k){
          dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
        }
      }
    }

    int ans = (int) 1e9;
    for(int i = 0; i < n; ++i){
      ans = min(ans, dis[i][i]);
    }
    cout << (ans == (int) 1e9 ? -1 : ans) << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/