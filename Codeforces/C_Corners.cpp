/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 2, vector<int>(m + 2, 1));
    for(int i = 1; i <= n; ++i){
      string s;
      cin >> s;
      for(int j = 1; j <= m; ++j){
        v[i][j] = (s[j - 1] - '0' == 1 ? 1 : 0);
      }
    }
    int dx[] = {-1,-1,-1, 0, 1, 1, 1, 0};
    int dy[] = {-1, 0, 1, 1, 1, 0,-1,-1};
    int cnt = 0;
    bool ok = false;
    for(int i = 1; i <= n; ++i){
      for(int j = 1; j <= m; ++j){
        if(v[i][j] == 0){
          for(int k = 0; k < 8; ++k){
            if(v[i + dx[k]][j + dy[k]] == 0 && i + dx[k] >= 1 && i + dx[k] <= n && j + dy[k] >= 1 && j + dy[k] <= m){
              ok = true;
            }
          }
          ++cnt;
        }
      }
    }
    if(cnt == n * m){
      cout << 0 << '\n';
    } 
    else if(cnt == 0){
      cout << n * m - 2 << '\n';
    }
    else if(ok){
      cout << n * m - cnt << '\n';
    } 
    else{
      cout << n * m - cnt - 1 << '\n';  
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
