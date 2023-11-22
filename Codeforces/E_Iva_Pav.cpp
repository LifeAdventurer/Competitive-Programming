/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 26.09.2023 23:04:00
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
  
  int tt;
  cin >> tt;
  while(tt--){
    int n;
    cin >> n;
    int lg = __lg(n) + 1;
    vector<vector<int>> st(n + 1, vector<int>(lg + 1));
    for(int i = 0; i < n; ++i){
      cin >> st[i][0];
    }
    for(int i = 1; i <= lg; ++i){
      for(int j = 0; j <= n - (1 << i); ++j){
        st[j][i] = st[j][i - 1] & st[j + (1 << (i - 1))][i - 1];
      }
    }
    int q;
    cin >> q;
    while(q--){
      int l, k;
      cin >> l >> k;
      l--;
      if(st[l][0] < k){
        cout << "-1 ";
        continue;
      }
      int ll = l, rr = n - 1;
      while(ll < rr){
        int mid = (ll + rr + 1) >> 1;
        int lg = __lg(mid - l + 1);
        int check = st[l][lg] & st[mid - (1 << lg) + 1][lg];
        if(check >= k){
          ll = mid;
        }
        else rr = mid - 1;
      }
      cout << ll + 1 << " ";
    }
    cout << '\n';
  }
  cout << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
 *        "She is there, always."
**/