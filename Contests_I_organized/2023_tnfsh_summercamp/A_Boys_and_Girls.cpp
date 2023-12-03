/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.07.2023 21:37:31
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
  vector<vector<bool>> check(n, vector<bool>(n));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      int x;
      cin >> x;
      check[i][j] = (x == 1);
    }
  }
  vector<vector<int>> v(n, vector<int>(n));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cin >> v[i][j];
    }
  }
  for(int i = 0; i < n; ++i){
    vector<int> boys, girls;
    for(int j = 0; j < n; ++j){
      if(check[j][i]) boys.push_back(v[j][i]);
      else girls.push_back(v[j][i]);  
    }
    sort(all(boys));
    sort(all(girls));
    int p = 0, q = 0;
    for(int j = 0; j < n; ++j){
      if(check[j][i]){
        v[j][i] = boys[p];
        p++;
      }
      else{
        v[j][i] = girls[q];
        q++;
      }
    }
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cout << v[i][j] << " \n"[j == n - 1];
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
