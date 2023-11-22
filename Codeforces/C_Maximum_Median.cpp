/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.07.2023 21:37:10
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
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  sort(all(v));

  auto check = [&](long long x) -> bool{
    int cnt = 0;
    for(int i = n / 2; i < n; ++i){
      if(x > v[i]) cnt += x - v[i];
      if(cnt > k) return false;
    }
    return true;
  };

  long long lo = 0, hi = 2.1e9, ans = 0;
  while(lo < hi){
    long long mid = (lo + hi) >> 1;
    if(check(mid)){
      ans = max(ans, mid);
      lo = mid + 1;
    }
    else{
      hi = mid;
    }
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
