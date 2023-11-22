/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.08.2023 20:21:42
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
  
  int t;
  cin >> t;
  while(t--){
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    set<int> S;
    for(int i = 0; i < n; ++i){
      cin >> v[i];
      S.insert(i);
    }

    auto upd = [&](int x) -> void{
      string s = to_string(v[x]);
      int sum = 0;
      for(char c : s){
        sum += c - '0';
      }
      v[x] = sum;
      if(v[x] < 10){
        S.erase(x);
      }
    };

    while(q--){
      int cmd;
      cin >> cmd;
      if(cmd == 1){
        int l, r;
        cin >> l >> r;
        vector<int> p;
        for(auto it = S.lower_bound(l - 1); it != S.end() && *it < r; ++it){
          p.push_back(*it);
        }
        for(int x : p){
          upd(x);
        }
      }
      else{
        int x;
        cin >> x;
        x--;
        cout << v[x] << '\n';
      }
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/