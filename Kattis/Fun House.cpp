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
  int n, m, cases = 1;
  while(cin >> m >> n){
    if(n == 0 && m == 0) break;
    int x, y, dir;
    vector<vector<char>> mp(n, vector<char>(m));
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        cin >> mp[i][j];
        if(mp[i][j] == '*'){
          x = i;
          y = j;
        }
      }
    }
    if(x == 0) dir = 2;
    else if(x == n - 1) dir = 0;
    else if(y == 0) dir = 1;
    else if(y == m -1) dir = 3;
    bool ok = true;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = { 0, 1, 0,-1};
    while(ok){
      x += dx[dir];
      y += dy[dir];
      if(mp[x][y] == '\\'){
        if(dir == 0) dir = 3;
        else if(dir == 1) dir = 2;
        else if(dir == 2) dir = 1;
        else if(dir == 3) dir = 0;
      }
      else if(mp[x][y] == '/'){
        if(dir == 0) dir = 1;
        else if(dir == 1) dir = 0;
        else if(dir == 2) dir = 3;
        else if(dir == 3) dir = 2;
      }
      else if(mp[x][y] == 'x'){
        mp[x][y] = '&';
        break;
      }
    }
    cout << "HOUSE " << cases << '\n';
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        cout << mp[i][j];
      }
      cout << '\n';
    }
    ++cases;
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
