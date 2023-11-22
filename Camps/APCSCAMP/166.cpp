/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.Mar.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool cmp(pair<int, int> A, pair<int, int> B){
  if(A.first == B.first) return A.second > B.second;
  return A.first < B.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i].first >> v[i].second;
  }
  sort(all(v), cmp);

  int ans = 1, end_time = v[0].second, mx = v[0].second;
  for(int i = 1; i < n; ++i){
    if(v[i].first > end_time + 1){
      cout << "-1\n";
      return 0;
    }
    while(v[i].first <= end_time + 1 && i < n){
      mx = max(mx, v[i].second);
      ++i;
    }
    if(mx < end_time){
      cout << "-1\n";
      return 0;
    }
    if(mx > end_time)ans++;
    end_time = mx;
    i--;
  }

  cout << ans << '\n';

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
