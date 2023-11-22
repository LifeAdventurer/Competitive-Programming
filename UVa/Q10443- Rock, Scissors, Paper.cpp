/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 10.Sep.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

bool cmp(char a, char b){
  if((a == 'P' && b == 'R') || (a == 'R' && b == 'S') || (a == 'S' && b == 'P')) return true;
  return false;
}

int main() {
  u_ying_u_with_whale;
  int t;
  bool ok = false;
  cin >> t;
  while(t--){
    int r, c, n;
    cin >> r >> c >> n;
    vector<vector<char>> mp(r, vector<char>(c));
    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        cin >> mp[i][j];
      }
    }
    int dx[] = {-1, 0, 1, 0};
    int dy[] = { 0, 1, 0,-1};
    while(n--){
      vector<vector<char>> t(mp);
      for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
          for(int k = 0; k < 4; ++k){
            int x = i + dx[k];
            int y = j + dy[k];
            if(x >= 0 && y >= 0 && x < r && y < c){
              if(cmp(t[i][j], t[x][y])){
                mp[x][y] = t[i][j];
              }
            }
          }
        }
      }
    }
    if(ok) cout << '\n';
    ok = true;
    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        cout << mp[i][j];
      }
      cout << '\n';
    }
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
