/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int a[55][55];
bool ok[55][55];
int cnt[55][55];
int dx[] = {-1,-1,-1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0,-1,-1};

int main() {
  u_ying_u_with_whale;
  int n, m, q;
  cin >> n >> m >> q;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> a[i][j];
    }
  }
  int x, y, ans = 0, k;
  for(int l = 1; l <= q; ++l){
    for(int i = 1; i <= n; ++i){
      for(int j = 1; j <= m; ++j){
        cnt[i][j] = max(cnt[i][j] - 1, 0);
        if(a[i][j] == l || cnt[i][j] == 0){
          ok[i][j] = true;
        }
      }
    }
    cin >> k;
    for(int j = 0; j < k; ++j){
      cin >> x >> y;
      cnt[x][y] = 4;
      ok[x][y] = false;
      for(int i = 0; i < 8; ++i){
        if(ok[x + dx[i]][y + dy[i]]){
          cnt[x + dx[i]][y + dy[i]] = 2;
          ok[x + dx[i]][y + dy[i]] = false;
        }
      }
    }
  }
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      if(ok[i][j]){
        ++ans;
      }
    }
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
