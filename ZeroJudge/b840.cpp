/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      cin >> v[i][j];
      v[i][j] += v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
    }
  }
  int ans = 1e-9;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      for(int k = 0; k < i; ++k){
        for(int l = 0; l < j; ++l){
          ans = max(ans, v[i][j] + v[k][l] - v[i][l] - v[k][j]);
        }
      }
    }
  }
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
