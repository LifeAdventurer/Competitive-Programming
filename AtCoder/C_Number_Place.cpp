/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 04.11.2023 20:06:52
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  bool ok = true;
  vector<vector<int>> mp(9, vector<int>(9));
  for(int i = 0; i < 9; ++i){
    set<int> s;
    for(int j = 0; j < 9; ++j){
      cin >> mp[i][j];
      s.insert(mp[i][j]);
    }
    if(s.size() != 9) ok = false;
  }
  for(int i = 0; i < 9; ++i){
    set<int> s;
    for(int j = 0; j < 9; ++j){
      s.insert(mp[j][i]);
    }
    if(s.size() != 9) ok = false;
  }
  vector<pair<int, int>> p = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3}, {3, 6}, {6, 0}, {6, 3}, {6, 6}};
  for(int i = 0; i < 9; ++i){
    set<int> s;
    for(int j = 0; j < 3; ++j){
      for(int k = 0; k < 3; ++k){
        s.insert(mp[p[i].first + j][p[i].second + k]);
      }
    }
    if(s.size() != 9) ok = false;
  }

  cout << (ok ? "Yes\n" : "No\n");

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/