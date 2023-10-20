#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vector<int> v;
  
  int x;
  while(cin >> x){
    v.push_back(x);
  }

  long long ans = 0, p = 0;
  function<void(int)> Dfs = [&](int x){
    int cnt = 2 + (x & 1);
    for(int i = 0; i < cnt; ++i){
      int nxt = v[++p];
      if(nxt == 0) continue;
      ans += abs(v[p] - x);
      Dfs(nxt);
    }
  };
  Dfs(v[0]);

  cout << ans << '\n';

  return 0;
}
