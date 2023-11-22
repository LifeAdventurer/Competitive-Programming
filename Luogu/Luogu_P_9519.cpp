/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.08.2023 23:53:23
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
  
  int n, m;
  cin >> n >> m;
  vector<long long> v(n), b(m);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> b[i];
  }

  auto Check = [&](int k) -> bool{
    vector<long long> pre(n + 1, 0);
    for(int i = 0; i < m; ++i){
      int l = b[i] - k + 1, mid = b[i] + 1, r = b[i] + k + 1;
      // 1 ... -2 ... 1 -> two times prefix sum -> 123 ... k ... 321
      if(l >= 1){
        pre[l]++;
      }
      else{
        pre[1] += 2 - l;
        if(n >= 2) pre[2] += l - 1;
      }
      if(mid <= n) pre[mid] -= 2;
      if(r <= n) pre[r]++;
    }
    partial_sum(pre.begin(), pre.end(), pre.begin());
    partial_sum(pre.begin(), pre.end(), pre.begin());
    bool ok = true;
    for(int i = 1; i <= n; ++i){
      ok &= (pre[i] >= v[i - 1]);
    }
    return ok;
  };

  int l = 0, r = (int)1.1e9;
  while(l < r){
    int mid = (l + r) >> 1;
    if(Check(mid)){
      r = mid;
    } 
    else{
      l = mid + 1;
    } 
  }
  cout << r << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/