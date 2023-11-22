/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 25.08.2023 14:25:29
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

bool ok = true;
vector<vector<int>> board(10, vector<int>(10, 0));
int dx[] = { 2, 2, 1, 1,-2,-2,-1,-1};
int dy[] = { 1,-1,-2, 2, 1,-1, 2,-2};

bool check(int x, int y){
  return (x >= 1 && x <= 8 && y >= 1 && y <= 8 && board[x][y] == 0 ? true : false);
}

int deg(int x, int y){
  int cnt = 0;
  for(int i = 0; i < 8; ++i){
    int X = x + dx[i];
    int Y = y + dy[i];
    cnt += (check(X, Y));
  }
  return cnt;
}

void dfs(int x, int y, int cnt){

  if(!ok) return;
  board[x][y] = cnt;
  if(cnt == 64){
    for(int i = 1; i <= 8; ++i){
      for(int j = 1; j <= 8; ++j){
        cout << board[i][j] << " \n"[j == 8];
      }
    }
    ok = false;
    return;
  }
  vector<tuple<int, int, int>> v;
  for(int i = 0; i < 8; ++i){
    int X = x + dx[i];
    int Y = y + dy[i];
    if(!check(X, Y)) continue;
    v.push_back({X, Y, deg(X, Y)});
  }
  sort(v.begin(), v.end(), [](tuple<int, int, int> A, tuple<int, int, int> B){
    return get<2>(A) < get<2>(B);
  });
  for(auto [X, Y, d] : v){
    dfs(X, Y, cnt + 1);
  }
  board[x][y] = 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int x, y;
  cin >> y >> x;
  
  dfs(x, y, 1);

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/