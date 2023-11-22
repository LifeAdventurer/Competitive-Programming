/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 31.07.2023 18:54:25
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
  vector<pair<pair<int, int>, int>> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i].first.first >> v[i].first.second;  
    v[i].second = i;
  }
  sort(all(v));
  int mx_rooms = 0;
  vector<int> ans(n);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  for(int i = 0; i < n; ++i){
    if(i == 0){
      ans[v[i].second] = pq.size() + 1;
      pq.push({v[i].first.second, 1});
      continue;
    }
    pair<int, int> cur = pq.top();
    if(cur.first < v[i].first.first){
      pq.pop();
      pq.push({v[i].first.second, cur.second});
      ans[v[i].second] = cur.second;
    }
    else{
      ans[v[i].second] = pq.size() + 1;
      pq.push({v[i].first.second, pq.size() + 1});
    }
    mx_rooms = max(mx_rooms, (int)pq.size());
  }
  cout << mx_rooms << '\n';
  for(int i = 0; i < n; ++i){
    cout << ans[i] << " \n"[i == n - 1];
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/