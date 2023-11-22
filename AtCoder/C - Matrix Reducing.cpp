/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int a[20][20], b[20][20];
bool check[20][20];

int main() {
  u_ying_u_with_whale;
  int h1, w1, h2, w2;
  cin >> h1 >> w1;
  for(int i = 1; i <= h1; ++i){
    for(int j = 1; j <= w1; ++j){
      cin >> a[i][j];
      check[i][j] = true;
    }
  }
  cin >> h2 >> w2;
  for(int i = 1; i <= h2; ++i){
    for(int j = 1; j <= w2; ++j){
      cin >> b[i][j];
    }
  }
  bool ok = true;
  vector<vector<pair<int, int>>> mp(20, vector<pair<int, int>>(20));
  for(int i = 1; i <= h2; ++i){
    for(int j = 1; j <= w2; ++j){
      bool yes = false;
      for(int k = 1; k <= h1; ++k){
        for(int l = 1; l <= w1; ++l){
          if(b[i][j] == a[k][l] && check[k][l]){
            mp[i][j].first = k;
            mp[i][j].second = l;
            yes = true;
            break;
          }
          check[k][l] = false;
        }
        if(yes) break;
      }
      if(!yes){
        ok = false;
      }
    }
  }
  for(int i = 1; i <= h2; ++i){
    for(int j = 2; j <= w2; ++j){
      if(mp[i][j].first != mp[i][j - 1].first || mp[i][j].first < mp[i][j - 1].first){
        ok = false;
      }
    }
  }
  for(int i = 2; i <= h2; ++i){
    for(int j = 1; j <= w2; ++j){
      if(mp[i][j].second != mp[i - 1][j].second || mp[i][j].second < mp[i - 1][j].second){
        ok = false;
      }
    }
  }
  cout << (ok ? "Yes\n" : "No\n");

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
