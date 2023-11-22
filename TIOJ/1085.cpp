/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 31.08.2023 18:36:58
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int x, y, z;
  cin >> x >> y >> z;
  vector<vector<vector<bool>>> v(x, vector<vector<bool>>(y, vector<bool>(z)));
  for(int i = 0; i < z; ++i){
    for(int j = 0; j < y; ++j){
      for(int k = 0; k < x; ++k){
        int x;
        cin >> x;
        v[k][j][i] = (x == 0);
      }
    }
  }
  if(!v[0][0][0]){
    cout << "no route\n";
    return 0;
  }

  bool ok = false;
  int dx[] = { 0, 0, 0, 0, 1,-1};
  int dy[] = { 0, 0, 1,-1, 0, 0};
  int dz[] = { 1,-1, 0, 0, 0, 0};
  queue<array<int, 3>> q;
  array<int, 3> start = {0, 0, 0}, end = {x - 1, y - 1, z - 1};
  vector<vector<vector<array<int, 3>>>> path(x, vector<vector<array<int, 3>>>(y, vector<array<int, 3>>(z)));
  q.push({0, 0, 0});
  v[0][0][0] = false;
  while(!q.empty()){
    auto cur = q.front();
    //debug(cur);
    if(cur == end){
      ok = true;
      break;
    } 
    q.pop();
    for(int i = 0; i < 6; ++i){
      int X = cur[0] + dx[i];
      int Y = cur[1] + dy[i];
      int Z = cur[2] + dz[i];
      if(X < 0 || Y < 0 || Z < 0 || X >= x || Y >= y || Z >= z || !v[X][Y][Z]) continue;
      v[X][Y][Z] = false;
      path[X][Y][Z] = {cur[0], cur[1], cur[2]};
      q.push({X, Y, Z});
    }
  }
  if(!ok){
    cout << "no route\n";
    return 0;
  }

  stack<array<int, 3>> ans;
  while(end != start){
    ans.push(end);
    end = path[end[0]][end[1]][end[2]];
  }
  cout << "(1,1,1)";
  while(!ans.empty()){
    auto [a, b, c] = ans.top();
    ans.pop();
    cout << "->(" << a + 1 << "," << b + 1 << "," << c + 1 << ")";
  }
  cout << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/