/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int k, q, r;
  cin >> k >> q >> r;

  vector<vector<char>> v(25, vector<char>(25));
  string s;
  cin >> s;
  for(int i = 1; i <= k; ++i){
    v[0][i] = s[i - 1];
  }

  for(int i = 1; i <= q; ++i){
    for(int j = 1; j <= k; ++j){
      int x;
      cin >> x;
      v[i][x] = v[i - 1][j];
    }
  }
  
  for(int i = 1; i <= r; ++i){
    for(int j = 1; j <= q; ++j){
      cout << v[j][i];
    }
    cout << '\n';
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
