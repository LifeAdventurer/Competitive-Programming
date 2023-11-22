/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.10.2023 20:38:15
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
  vector<pair<long long, long long>> v(n);
  for(int i = 0; i < n; ++i){
    long long t, d;
    cin >> t >> d;
    v[i] = {t, t + d};
  } 
  sort(v.begin(), v.end());
  
  multiset<long long> ms;
  long long ans = 0, cur = 0, p = 0;
  while(true){
    if(ms.empty()){
      if(p == n){
        break;
      }
      cur = max(cur, v[p].first);
    }
    while(p < n && v[p].first <= cur){
      ms.insert(v[p++].second);
    }

    while(!ms.empty() && *ms.begin() < cur){
      ms.erase(ms.begin());
    }
    if(!ms.empty()){
      ans++;
      ms.erase(ms.begin());
    }
    cur++;
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/