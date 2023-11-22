/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.07.2023 15:54:04
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
  vector<vector<bool>> check(n + 2, vector<bool>(m + 2, false));
  pair<int, int> start, end;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      char c;
      cin >> c;
      check[i][j] = (c != '#');
      if(c == 'A') start = {i, j};
      else if(c == 'B') end = {i, j};
    }
  }

  string s;
  int dx[] = { 0, 0, 1,-1};
  int dy[] = { 1,-1, 0, 0};
  string dir = "RLDU";
  
  vector<vector<char>> path(n + 2, vector<char>(m + 2));
  queue<pair<int, int>> q;
  q.push(start);
  check[start.first][start.second] = false;
  while(!q.empty()){
    pair<int, int> cur = q.front();
    q.pop();
    for(int i = 0; i < 4; ++i){
      int X = cur.first + dx[i];
      int Y = cur.second + dy[i];
      if(check[X][Y]){
        check[X][Y] = false;
        path[X][Y] = dir[i];
        q.push({X, Y});
      }
    }
  }
  if(!check[end.first][end.second]){
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
  else{
    cout << "NO\n";
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
