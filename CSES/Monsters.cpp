/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.07.2023 00:24:15
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  vector<vector<bool>> check(n + 2, vector<bool>(m + 2));
  vector<vector<char>> mp(n + 2, vector<char>(m + 2)), path(n + 2, vector<char>(m + 2));
  vector<vector<int>> dist(n + 2, vector<int>(m + 2, 1e9));
  pair<int, int> start, end;
  queue<pair<int, int>> q;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      char c;
      cin >> c;
      mp[i][j] = c;
      if(c == 'M') q.push({i, j});
      else if(c == 'A') start = {i, j};
      if(c == '.') check[i][j] = true;
      else dist[i][j] = 0;
    }
  } 
  if(start.first == 1 || start.second == 1 || start.first == n || start.second == m){
    cout << "YES\n0\n";
    return 0;
  }
  

  int dx[] = {-1, 0, 1, 0};
  int dy[] = { 0, 1, 0,-1};  
  string dir = "URDL";
  bool second_bfs = false;
  end = {-1, -1};
  check[start.first][start.second] = false;
  auto bfs = [&](){
    while(!q.empty()){
      pair<int, int> cur = q.front();
      q.pop();
      for(int i = 0; i < 4; ++i){
        int X = cur.first + dx[i];
        int Y = cur.second + dy[i];
        if(check[X][Y]){ 
          check[X][Y] = false; 
          if(!second_bfs){
            dist[X][Y] = dist[cur.first][cur.second] + 1;
          }
          else{
            path[X][Y] = dir[i];
            if(dist[X][Y] <= dist[cur.first][cur.second] + 1){
              continue;
            }
            else dist[X][Y] = dist[cur.first][cur.second] + 1;
            if(X == 1 || X == n || Y == 1 || Y == m){
              end = {X, Y};
              q = queue<pair<int, int>> ();
              break;
            }
          }
          q.push({X, Y});
        }
      }
    }  
  };

  bfs();
  second_bfs = true;
  q.push(start);
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      if(mp[i][j] == '.') check[i][j] = true;
    }
    cout << '\n';
  }
  bfs();

  if(end.first == -1){
    cout << "NO\n";
  }
  else{
    cout << "YES\n";
    string ans = "";
    while(end != start){
      char c = path[end.first][end.second];
      ans += c;
      if(c == 'U') end.first++;
      else if(c == 'D') end.first--;
      else if(c == 'L') end.second++;
      else end.second--;
    }
    reverse(all(ans));
    cout << ans.size() << '\n' << ans << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
