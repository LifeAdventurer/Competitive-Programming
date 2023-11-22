/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.Jun.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

string s;
int ans = 0;
vector<vector<bool>> check(9, vector<bool>(9, false));

int dx[] = { 1, 0,-1, 0};
int dy[] = { 0,-1, 0, 1};
char dir[] = {'D', 'L', 'U', 'R'};

void dfs(int x, int y, int cnt, char t){
  if(check[x + 1][y] && check[x - 1][y] && !check[x][y + 1] && !check[x][y - 1]) return;
  if(!check[x + 1][y] && !check[x - 1][y] && check[x][y + 1] && check[x][y - 1]) return;
  if(cnt >= 1 && s[cnt - 1] != '?' && s[cnt - 1] != t) return;

  check[x][y] = false;
  if(x == 7 && y == 1){
    if(cnt != 48) return;
    ans++;
  }
  else{
    for(int i = 0; i < 4; ++i){
      int X = x + dx[i];
      int Y = y + dy[i];
      if(check[X][Y]){
        dfs(X, Y, cnt + 1, dir[i]);
        check[X][Y] = true;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> s;

  for(int i = 1; i <= 7; ++i){
    for(int j = 1; j <= 7; ++j){
      check[i][j] = true;
    }
  }

  dfs(1, 1, 0, ' ');

  cout << ans << '\n';

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
