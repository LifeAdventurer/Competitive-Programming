/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,O3,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define I_want_to_be_dian  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  I_want_to_be_dian;
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    char c;
    vector<vector<int>> v(n, vector<int>(m));\
    int cnt = 0, p = 5;
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        cin >> c;
        if(v[i][j] = c - '0') cnt++;
        if(i > 0 && j > 0){
          p = min(p, max(0, v[i][j] + v[i - 1][j] + v[i][j - 1] + v[i - 1][j - 1] - 2));
        }
      }
    }
    cout << cnt - p << '\n';
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
