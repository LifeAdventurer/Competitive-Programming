/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.09.2023 20:26:12
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

inline const int read(){
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
  vector<long long> v(n + 1);
  for(int i = 1; i <= n; ++i){
    v[i] = read() * 1LL;
  }
  partial_sum(v.begin(), v.end(), v.begin());
  int q = read();
  while(q--){
    int a = read(), b = read();
    if(a > b) swap(a, b);
    cout << v[b] - v[a - 1] << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/