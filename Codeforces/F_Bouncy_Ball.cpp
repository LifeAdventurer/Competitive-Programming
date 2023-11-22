/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.08.2023 15:37:55
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
  
  map<string, int> mp;
  mp["DR"] = 0;
  mp["DL"] = 1;
  mp["UR"] = 2;
  mp["UL"] = 3;
  int dx[] = {1, 1,-1,-1};
  int dy[] = {1,-1, 1,-1};
  int t;
  cin >> t;
  while(t--){
    int n, m, x, y;
    pair<int, int> end;
    string s;
    cin >> n >> m >> x >> y >> end.first >> end.second >> s;
    vector<vector<vector<int>>> v(n + 2, vector<vector<int>>(m + 2, vector<int>(4, -1)));

    int dir = mp[s], ans = 0;
    v[x][y][dir] = 1;
    bool ok = false;
    while(true){
      if(x == end.first && y == end.second){
        cout << ans << '\n';
        ok = true;
        break;
      } 
      int X = x + dx[dir], Y = y + dy[dir];
      if(X < 1 || X > n || Y < 1 || Y > m){
        ans++;
        if(X < 1 || X > n){
          dir ^= 2;
        }
        if(Y < 1 || Y > m){
          dir ^= 1;
        }
        X = x + dx[dir]; 
        Y = y + dy[dir];
        if(v[X][Y][dir] != -1) break;
        v[X][Y][dir] = 1;
      }
      else{
        if(v[X][Y][dir] != -1) break;
        v[X][Y][dir] = 1;
      }
      //debug(x, y, ans);
      x += dx[dir];
      y += dy[dir];
    }
    if(!ok) cout << -1 << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/