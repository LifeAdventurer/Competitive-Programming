/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 08.08.2023 22:08:56
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
  
  int n, m;
  cin >> n >> m;
  vector<vector<char>> mp(n + 2, vector<char>(m + 2, '#'));
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> mp[i][j];
    }
  }
  int ans = 0;
  int dx[] = {0, 0, 1,-1};
  int dy[] = {1,-1, 0, 0};
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      if(mp[i][j] == '.'){
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n + 2, vector<int>(m + 2, 1 << 30));
        q.push({i, j});
        dist[i][j] = 0;
        int mx = 0;
        while(!q.empty()){
          pair<int, int> cur = q.front();
          q.pop();
          for(int k = 0; k < 4; ++k){
            int X = cur.first + dx[k];
            int Y = cur.second + dy[k];
            if(mp[X][Y] == '.' && dist[X][Y] == (1 << 30)){
              dist[X][Y] = dist[cur.first][cur.second] + 1;
              mx = max(mx, dist[X][Y]);
              q.push({X, Y});
            }
          }
        }
        ans = max(ans, mx);
      }
    }
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/