/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.11.2023 17:58:02
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
  
  long long n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  int l = 0, r = (int) 1e8 + 5;
  while(l + 1 < r){
    int mid = (l + r) >> 1;
    long long cnt = 0;
    for(int i = 0; i < n; ++i){
      cnt += v[i] / mid;
    }
    if(cnt < k){
      r = mid;
    }
    else{
      l = mid;
    }
  }
  cout << l << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/