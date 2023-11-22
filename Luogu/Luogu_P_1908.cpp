/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.09.2023 00:06:48
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
  vector<int> v(n + 1);
  for(int i = 1; i <= n; ++i){
    cin >> v[i];
  }
  
  vector<int> a(n + 1);
  function<long long(int, int)> Solve = [&](int l, int r){
    if(l == r) return 0LL;
    long long cnt = 0;
    int mid = (l + r) >> 1;
    cnt += Solve(l, mid) + Solve(mid + 1, r);
    int p = l, q = mid + 1;
    for(int i = l; i <= r; ++i){
      if(p > mid){
        a[i] = v[q++];
      }
      else if(q > r){
        a[i] = v[p++];
      }
      else if(v[p] > v[q]){
        a[i] = v[q++];
        cnt += (mid - p + 1);
      }
      else{
        a[i] = v[p++];
      }
    }
    
    for(int i = l; i <= r; ++i){
      v[i] = a[i];
    }
    return cnt;
  };
  cout << Solve(1, n) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/