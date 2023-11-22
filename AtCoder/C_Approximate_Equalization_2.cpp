/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.08.2023 20:04:25
 *
**/
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

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
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  /*
  if(n == 1){
    cout << 0 << '\n';
    return 0;
  }*/

  int l = 0, r = 1e9;
  long long ans = 1e18;
  while(l < r){
    int mid = (l + r) >> 1;
    //debug(mid);
    long long ll = 0, rr = 0;
    for(int i = 0; i < n; ++i){
      if(v[i] < mid) ll += (mid - v[i]);
      else if(v[i] > mid + 1) rr += (v[i] - mid - 1); 
    }
    ans = min(ans, max(ll, rr));
    /*
    if(abs(ll - rr) <= 1){
      ans = max(ll, rr);
      break;
    }
    */
    if(ll < rr){
      l = mid + 1;
    }
    else{
      r = mid;
    }
  }
  /*
  long long sum = 0;
  for(int i = 0; i < n; ++i){
    if(v[i] < l) sum += (l - v[i]);
    else if(v[i] > l + 1) sum += (v[i] - l - 1);
  }
  sum /= 2;
  */
  //debug(ans, sum, l);
  cout << ans << '\n';
  
  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/