/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.06.2023 21:04:17
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;
  vector<long long> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  auto check = [&](long long mid){
    int groups = 0;
    long long sum = 0;
    for(int i = 0; i < n; ++i){
      if(v[i] > mid) return false;
      if(sum + v[i] > mid){
        groups++;
        sum = 0;
      }
      sum += v[i];
    }
    if(sum > 0) groups++;
    return (groups <= k);
  };
  long long lo = 0, hi = accumulate(all(v), 0LL), ans = 0;
  while(lo <= hi){
    long long mid = (lo + hi) >> 1;
    if(check(mid)){
      hi = mid - 1;
      ans = mid;
    }
    else lo = mid + 1;
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
