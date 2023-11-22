/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
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
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        cin >> v[i][j];
      }
    }
    unsigned int ans = 0, sum;
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        sum = v[i][j];
        int x, y;
        int dx[] = {-1,-1, 1, 1};
        int dy[] = {-1, 1,-1, 1};
        for(int k = 0; k < 4; ++k){
          x = i, y = j;
          while(x + dx[k] >= 0 && y + dy[k] >= 0 && x + dx[k] < n && y + dy[k] < m){
            x += dx[k];
            y += dy[k];
            sum += v[x][y];
          }
        }
        ans = max(ans, sum);
      }
    }
    cout << ans << '\n';
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
