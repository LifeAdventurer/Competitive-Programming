/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  
  vector<int> s(n), t(n), c(n), sum(105, 0);
  for(int i = 0; i < n; ++i){
    cin >> s[i] >> t[i] >> c[i];
    for(int j = s[i]; j <= t[i]; ++j){
      sum[j] = max(sum[j], c[i]);
    }
  }

  vector<int> a(m), b(m), p(m), q(m);
  for(int i = 0; i < m; ++i){
    cin >> a[i] >> b[i] >> p[i] >> q[i];
  }

  int ans = 1e8;
  for(int i = 0; i < (1 << m); ++i){
    vector<int> v(105, 0);
    int cnt = 0;
    for(int j = 0; j < m; ++j){
      if(i & (1 << j)){
        for(int k = a[j]; k <= b[j]; ++k){
          v[k] += p[j];
        }
        cnt += q[j];
      }
    }

    bool ok = true;
    for(int i = 1; i <= 100; ++i){
      if(v[i] < sum[i]) ok = false;
    }
    if(ok) ans = min(ans, cnt);
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
