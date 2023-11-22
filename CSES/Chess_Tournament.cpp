/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 31.08.2023 23:47:37
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
  
  int n;
  cin >> n;
  set<pair<int, int>> s;
  int sum = 0;
  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    if(!x) continue;
    sum += x;
    s.insert({x, i});
  }

  bool ok = true;
  vector<pair<int, int>> ans;
  while(!s.empty()){
    auto [x, p] = *s.rbegin();
    s.erase(*s.rbegin());
    if(x > (int)s.size()){
      ok = false;
      break;
    }
    auto it = s.rbegin();
    vector<pair<int, int>> v;
    while(x--){
      auto [_x, _p] = *it;
      s.erase(*it);
      ans.push_back({p, _p});
      if(_x - 1){
        v.push_back({_x - 1, _p});
      }
      //it++;
    }
    for(auto [a, b] : v){
      s.insert({a, b});
    }
  }
  int k = ans.size();
  if(!ok || k * 2 != sum){
    cout << "IMPOSSIBLE\n";
    return 0;
  }
  
  cout << k << '\n';
  for(int i = 0; i < k; ++i){
    cout << ans[i].first << " " << ans[i].second << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/