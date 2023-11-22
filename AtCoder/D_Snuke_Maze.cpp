/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.07.2023 20:23:20
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int h, w;
bool ok = false;
string s = "snuke";
vector<vector<bool>> check(505, vector<bool>(505, false));
vector<vector<char>> mp(505, vector<char>(505));

int dx[] = { 1, 0,-1, 0};
int dy[] = { 0,-1, 0, 1};

void dfs(int x, int y, int cnt){
  if(mp[x][y] != s[cnt % 5]){
    return;
  }
  check[x][y] = false;

  for(int i = 0; i < 4; ++i){
    int X = x + dx[i];
    int Y = y + dy[i];
    if(check[X][Y]){
      dfs(X, Y, cnt + 1);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> h >> w;
  for(int i = 1; i <= h; ++i){
    for(int j = 1; j <= w; ++j){
      cin >> mp[i][j];
      check[i][j] = true;
    }
  }
  
  dfs(1, 1, 0);

  cout << (!check[h][w] ? "Yes\n" : "No\n");

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
