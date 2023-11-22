/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int t;
  cin >> t;
  while(t--){
    int n, q;
    cin >> n >> q;
    pair<int, int> p[n + 1];
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
      cin >> a[i];
      p[i].first = a[i];
      p[i].second = i;
    }
    vector<int> v = a;
    v[0] = 0;
    sort(all(v));
    sort(p + 1, p + n + 1);
    int mx[n + 1];
    mx[1] = a[1];
    for(int k = 2; k <= n; ++k){
      mx[k] = max(a[k], mx[k - 1]);
    }
    while(q--){
      int i, k;
      cin >> i >> k;
      if(a[i] == n){
        if(i == 1 || i == 2) cout << k << '\n';
        else{
          cout << max(0, k - i + 2) << '\n';
        }
      }
      else{
        if(i > p[n].second || a[i] < mx[i]){
          cout << "0\n";
        }
        else{
          int ans = 0, cnt = 0;
          for(int j = i - 1; j < p[n].second && cnt < k; ++j){
            if(i == j || j == 0) continue;
            if(a[i] > a[j]){
              ++cnt;
              if(j > i || j == i - 1) ++ans;
            }
            else{
              break;
            }
          }
          cout << ans << '\n';
        }
      }
    }
  }

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
