#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i].second;
  }
  for(int i = 0; i < n; ++i){
    cin >> v[i].first;
  }
  sort(v.begin(), v.end());

  multiset<int> ms;
  for(int i = 0; i < k; ++i){
    ms.insert(-1);
  }
  int ans = 0;
  for(int i = 0; i < n; ++i){
    auto it = ms.lower_bound(v[i].second);
    if(it == ms.begin()) continue;
    it--;
    ms.erase(it);
    ms.insert(v[i].first);
    ans++;
  }
  cout << ans << '\n';

  return 0;
}