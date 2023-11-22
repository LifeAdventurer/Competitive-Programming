/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.08.2023 18:34:14
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

int cnt = 0;
vector<vector<char>> mp(9, vector<char>(9));

bool check(int r, int c, char num){
  for(int i = 0; i < 9; ++i){
    if(mp[r][i] == num || mp[i][c] == num) return false;
    if(mp[(r / 3) * 3 + i / 3][(c / 3) * 3 + i % 3] == num) return false;
  }
  return true;
}

void dfs(int x, int y){
  if(x == 9){
    cnt++;
    for(int i = 0; i < 9; ++i){
      for(int j = 0; j < 9; ++j){
        cout << mp[i][j] << " \n"[j == 8];
      }
    }
    cout << '\n';
    return;
  }
  if(mp[x][y] != '0'){
    if(y == 8) dfs(x + 1, 0);
    else dfs(x, y + 1);
    return;
  }
  for(char c = '1'; c <= '9'; ++c){
    if(check(x, y, c)){
      mp[x][y] = c;
      if(y == 8) dfs(x + 1, 0);
      else dfs(x, y + 1);
      mp[x][y] = '0';
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  for(int i = 0; i < 9; ++i){
    for(int j = 0; j < 9; ++j){
      cin >> mp[i][j];
      
    }
  }

  dfs(0, 0);
  cout << "there are a total of " << cnt << " solution(s).\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/