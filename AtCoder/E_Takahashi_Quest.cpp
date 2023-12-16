/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.12.2023 20:54:11
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
  vector<int> t(n), x(n);
  for(int i = 0; i < n; ++i){
    cin >> t[i] >> x[i];
    --x[i];
  }
  vector<int> cnt(n), ans(n);
  int mx = 0, cur = 0;
  for(int i = n - 1; i >= 0; --i){
    if(t[i] == 2){
      cnt[x[i]]++;
      cur++;
    }
    else if(cnt[x[i]] > 0){
      cnt[x[i]]--;
      cur--;
      ans[i] = 1;
    }
    mx = max(mx, cur);
  }
  if(cur > 0){
    cout << "-1\n";
    return 0;
  }
  cout << mx << '\n';
  for(int i = 0; i < n; ++i){
    if(t[i] == 1){
      cout << ans[i] << " ";
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/