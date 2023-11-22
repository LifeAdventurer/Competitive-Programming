/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.08.2023 11:41:46
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

bool cmp(pair<double, double> A, pair<double, double> B){
  return A.second / A.first > B.second / B.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, t;
  cin >> n >> t;
  vector<pair<double, double>> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), cmp);
  int sum = 0;
  double ans = 0;
  for(int i = 0; i < n; ++i){
    if(sum + v[i].first <= t){
      sum += v[i].first;
      ans += v[i].second;
    }
    else{
      ans += ((t - sum) / v[i].first) * v[i].second;
      break;
    }
  }
  cout << fixed << setprecision(2) << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/