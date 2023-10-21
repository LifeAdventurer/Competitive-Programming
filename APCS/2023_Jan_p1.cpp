#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  int mx = -1, ans = 0, cnt = 0;
  for(int i = 0; i < tt; ++i){
    int t, s;
    cin >> t >> s;
    if(s > mx){
      mx = s;
      ans = t;
    }
    cnt += (s == -1);
  }

  cout << max(0, mx - tt - cnt * 2) << " " << ans << '\n';

  return 0;
}
