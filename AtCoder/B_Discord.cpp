/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.May.2023
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
  
  vector<vector<int>> v(m, vector<int>(n));
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      cin >> v[i][j];
    }
  }

  vector<vector<int>> check(n + 1, vector<int>(n + 1, 1));
  for(int i = 1; i <= n; ++i){
    check[i][i] = 0;
  }
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n - 1; ++j){
      check[v[i][j]][v[i][j + 1]] = 0;
      check[v[i][j + 1]][v[i][j]] = 0;
    }
  }

  int ans = 0;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      ans += check[i][j];
    }
  }

  cout << ans / 2 << '\n';

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
