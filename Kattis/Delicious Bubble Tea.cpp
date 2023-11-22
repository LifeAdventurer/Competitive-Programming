/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.09.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int n, m;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  cin >> m;
  vector<int> a(m);
  for(int i = 0; i < m; ++i){
    cin >> a[i];
  }
  vector<vector<bool>> check(n, vector<bool>(m, false));
  int x;
  for(int i = 0; i < n; ++i){
    cin >> x;
    while(x--){
      int p;
      cin >> p;
      check[i][p - 1] = true;
    }
  }
  int mn = 1e9;
  int money;
  cin >> money;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(check[i][j]){
        mn = min(mn, v[i] + a[j]);
      }
    }
  }
  cout << (money >= mn ? money / mn - 1 : 0) << '\n';

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
