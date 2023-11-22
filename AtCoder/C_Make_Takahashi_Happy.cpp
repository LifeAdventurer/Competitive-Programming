/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.Mar.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int n, m, ans = 0;
vector<vector<int>> mp(15, vector<int>(15));
vector<int> v;

void dfs(int x, int y){
  v.push_back(mp[x][y]);
  if(x == n - 1 && y == m - 1){
    set<int> s;
    for(auto x : v){
      s.insert(x);
    }
    if(s.size() == n + m - 1) ans++;
  }
  if(x + 1 < n){
    dfs(x + 1, y);
    v.pop_back();
  }
  if(y + 1 < m){
    dfs(x, y + 1);
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n >> m;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> mp[i][j];
    }
  }
  dfs(0, 0);

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
