/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.09.2023 14:16:55
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
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i].second >> v[i].first;
  }
  sort(v.begin(), v.end());
  long long ans = 0, cur = 0;
  priority_queue<int> pq;
  for(int i = 0; i < n; ++i){
    if(cur + v[i].second <= v[i].first){
      cur += v[i].second;
      ans++;
      pq.push(v[i].second);
    }
    else if(v[i].second < pq.top()){
      cur = cur - pq.top() + v[i].second;
      pq.pop();
      pq.push(v[i].second);
    }
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/