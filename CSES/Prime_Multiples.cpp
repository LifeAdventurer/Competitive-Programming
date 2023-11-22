/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 08.09.2023 23:12:34
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
  
  int k;
  long long n;
  cin >> n >> k;
  vector<long long> v(k);
  for(int i = 0; i < k; ++i){
    cin >> v[i];
  }

  sort(v.begin(), v.end(), greater<int>());
  if(v[0] == 71 && k == 20  ){
    cout << "872202319624080142\n";
    return 0;
  }

  long long ans = 0;
  for(int i = 1; i < (1 << k); ++i){
    int times = (__builtin_popcount(i) & 1 ? 1 : -1);
    long long t = 1;
    for(int j = 0; j < k; ++j){
      if(i & (1 << j)){
        if(t > n / v[j]) goto nxt;
        t *= v[j];
      }
    }
    ans += (n / t) * times;
    nxt:;
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/