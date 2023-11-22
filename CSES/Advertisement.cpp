/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.09.2023 23:20:22
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

inline const int read()
{
  int ret{0}, f{1};
  char ch = getchar_unlocked();
  while (ch < '0' || ch > '9'){
    if (ch == '-')
      f = -1;
    ch = getchar_unlocked();
  }
  while (ch >= '0' && ch <= '9')
    ret = (ret << 3) + (ret << 1) + (ch ^ 48), ch = getchar_unlocked();
  return ret * f;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n = read();
  vector<int> v(n + 1);
  for(int i = 1; i <= n; ++i){
    v[i] = read();
  }

  vector<int> l(n + 1), r(n + 1);
  for(int i = 1; i <= n; ++i){
    l[i] = i - 1;
    while(v[l[i]] >= v[i]){
      l[i] = l[l[i]];
    }
  }

  for(int i = n; i >= 1; --i){
    r[i] = i + 1;
    while(v[r[i]] >= v[i]){
      r[i] = r[r[i]];
    }
  }

  long long ans = 0;
  for(int i = 1; i <= n; ++i){
    ans = max(ans, 1LL * (r[i] - l[i] - 1) * v[i]);
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/