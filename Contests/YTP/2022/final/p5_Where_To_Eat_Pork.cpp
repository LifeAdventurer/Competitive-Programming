/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.07.2023 11:54:39
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string s;
  cin >> s;

  queue<pair<int, int>> q;
  pair<int, int> p = {1005, 1005}, start, end;
  vector<vector<bool>> check(2023, vector<bool>(2023, false));
  for(int i = 1; i <= 2021; ++i){
    for(int j = 1; j <= 2021; ++j){
      check[i][j] = true;
    }
  }
  start = p;
  vector<vector<int>> dist(2023, vector<int>(2023, 0));
  for(char c : s){
    if(c == 'A'){
      p.first++;
      p.second++;
    }
    else if(c == 'B'){
      p.second++;
    }
    else if(c == 'C'){
      p.first--;
    }
    else if(c == 'D'){
      p.first--;
      p.second--;
    }
    else if(c == 'E'){
      p.second--;
    }
    else if(c == 'F'){
      p.first++;
    }
  }
  end = p;
  if(start == end){
    cout << "0\n";
    return 0;
  }

  int dx[] = { 1, 0,-1,-1, 0, 1};
  int dy[] = { 1, 1, 0,-1,-1, 0};
  check[1005][1005] = true;
  q.push(start);
  while(!q.empty()){
    pair<int, int> cur = q.front();
    q.pop();
    for(int i = 0; i < 6; ++i){
      int X = cur.first + dx[i];
      int Y = cur.second + dy[i];
      if(check[X][Y]){
        check[X][Y] = false;
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
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
