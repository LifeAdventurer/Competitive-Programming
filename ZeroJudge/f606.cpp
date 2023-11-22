/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int q[55][55], c[55];

int main() {
  u_ying_u_with_whale;
  int n, m, k;
  cin >> n >> m >> k;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> q[i][j];
    }
  }
  int ans = 1e9;
  while(k--){
    int cost = 0;
    int sum[m][m];
    for(int i = 0; i < m; ++i){
      for(int j = 0; j < m; ++j){
        sum[i][j] = 0;
      }
    }
    for(int i = 0; i < n; ++i){
      cin >> c[i];
    }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        sum[c[i]][j] += q[i][j];
      }
    }
    for(int i = 0; i < m; ++i){
      for(int j = 0; j < m; ++j){
        if(i == j) cost += sum[i][j];
        else{
          cost += sum[i][j] * 3;
          if(sum[i][j] > 1000) cost -= (sum[i][j] - 1000);
        }
      }
    }
    ans = min(ans, cost);
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
