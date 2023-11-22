/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.09.2023 14:18:06
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
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
      cin >> v[i];
    }
    vector<int> pre(n + 1, 0);
    for(int i = 1; i <= n; ++i){
      pre[i] = v[i - 1] ^ pre[i - 1];
    }
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n; ++i){
      if(s[i] == '1') ans ^= v[i];
    }
    int q;
    cin >> q;
    while(q--){
      int cmd;
      cin >> cmd;
      if(cmd == 1){
        int l, r;
        cin >> l >> r;
        l--;
        ans ^= (pre[l] ^ pre[r]);
      }
      else{
        int g;
        cin >> g;
        cout << (g & 1 ? ans : ans ^ pre[n]) << " ";
      }
    }
    cout << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/