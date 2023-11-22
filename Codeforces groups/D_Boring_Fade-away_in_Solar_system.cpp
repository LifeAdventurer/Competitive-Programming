/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.08.2023 13:48:55
 *
**/
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

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

  pair<int, int> start, end;
  cin >> start.first >> start.second >> end.first >> end.second;
  vector<vector<char>> mp(n + 2, vector<char>(m + 2, '#'));
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> mp[i][j];
    }
  }

  int dx[] = { 1, 0, 1, 1,-1,-1, 0,-1};
  int dy[] = { 1, 1, 0,-1,-1, 1,-1, 0};
  queue<pair<int, int>> q;
  vector<vector<int>> dist(n + 2, vector<int>(m + 2, -1));
  dist[start.first][start.second] = 0;
  q.push(start);
  while(!q.empty()){
    pair<int, int> cur = q.front();
    q.pop();
    for(int i = 0; i < 8; ++i){
      int X = cur.first + dx[i];
      int Y = cur.second + dy[i];
      if(mp[X][Y] == '.'){
        mp[X][Y] = '#';
        dist[X][Y] = dist[cur.first][cur.second] + 1;
        q.push({X, Y});
      }
    }
  }
  cout << dist[end.first][end.second] << '\n';
  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/