/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 29.Apr.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int h, w;
  cin >> h >> w;

  vector<vector<char>> mp(h + 2, vector<char>(w + 2, '.'));
  for(int i = 1; i <= h; ++i){
    for(int j = 1; j <= w; ++j){
      cin >> mp[i][j];
    }
  }

  vector<int> ans(h, 0);
  for(int i = 1; i <= h; ++i){
    for(int j = 1; j <= w; ++j){
      if(mp[i][j] == '#'){
        int cnt = 0;
        int dx[] = { 1, 1,-1,-1};
        int dy[] = {-1, 1, 1,-1};
        while(true){
          bool ok = true;
          for(int k = 0; k < 4; ++k){
            if(mp[i + dx[k] * (cnt + 1)][j + dy[k] * (cnt + 1)] != '#') ok = false;
          }
          if(!ok) break;
          cnt++;
        }
        if(cnt != 0) ans[cnt - 1]++;
      }
    }
  }

  for(int i = 0; i < min(h, w); ++i){
    cout << ans[i] << " \n"[i == h - 1];
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
