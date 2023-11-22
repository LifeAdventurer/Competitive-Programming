/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.Oct.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int n;
int ans = 0;
vector<vector<int>> v(20, vector<int>(20));

void dfs(int x, int y, int res){
  if(x == n - 1 && y == n - 1 && res == 0){
    ans++;
    return;
  }
  if(x + 1 < n){
    dfs(x + 1, y, res ^ v[x + 1][y]);
  }
  if(y + 1 < n){
    dfs(x, y + 1, res ^ v[x][y + 1]);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n;
  
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cin >> v[i][j];
    }
  }

  dfs(0, 0, v[0][0]);
  
  cout << ans << '\n';

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
