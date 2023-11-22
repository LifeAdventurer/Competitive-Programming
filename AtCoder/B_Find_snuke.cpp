/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.May.2023
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
  
  vector<vector<char>> v(n + 1, vector<char>(m + 1));
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> v[i][j];
    }
  }
  
  string s = "snuke";
  int dx[] = {-1, 0, 1, 1, 1, 0,-1,-1};
  int dy[] = {-1,-1,-1, 0, 1, 1, 1, 0};
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      if(v[i][j] == s[0]){
        for(int k = 0; k < 8; ++k){
          bool ok = true;
          for(int l = 1; l <= 4; ++l){
            int x = i + dx[k] * l;
            int y = j + dy[k] * l;
            if(x < 1 || x > n || y < 1 || y > m){
              ok = false;
              break;
            }
            if(v[x][y] != s[l]) ok = false;
          }
          if(ok){
            for(int p = 0; p < 5; ++p){
              cout << i + dx[k] * p << " " << j + dy[k] * p << '\n';
            }
            return 0;
          }
        }
      }
    }
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
