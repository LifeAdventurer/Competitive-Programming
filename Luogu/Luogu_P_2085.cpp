/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.09.2023 19:15:48
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
  vector<int> a(n), b(n), c(n);
  using T = tuple<long long, int, int>;
  priority_queue<T, vector<T>, greater<T>> pq;
  for(int i = 0; i < n; ++i){
    cin >> a[i] >> b[i] >> c[i];
    pq.push({a[i] + b[i] + c[i], 1, i});
  }
  for(int i = 0; i < m; ++i){
    auto [x, t, p] = pq.top();
    pq.pop();
    cout << x << " \n"[i == m - 1];
    t++;
    pq.push({a[p] * t * t + b[p] * t + c[p], t, p});
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/