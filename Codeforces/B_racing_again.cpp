/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.Mar.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(3));
  vector<pair<int, int>> a(n), b(n), s(n);

  for(int i = 0; i < n; ++i){
    cin >> a[i].first >> b[i].first;
    s[i].first = a[i].first + b[i].first;
    a[i].second = b[i].second = s[i].second = i;
  }
  sort(all(a), greater<pair<int, int>>());
  sort(all(b), greater<pair<int, int>>());
  sort(all(s), greater<pair<int, int>>());

  v[a[0].second][0] = v[b[0].second][1] = v[s[0].second][2] = 1;
  for(int i = 1; i < n; ++i){
    v[a[i].second][0] = (a[i].first == a[i - 1].first ? v[a[i - 1].second][0] : i + 1);
    v[b[i].second][1] = (b[i].first == b[i - 1].first ? v[b[i - 1].second][1] : i + 1);
    v[s[i].second][2] = (s[i].first == s[i - 1].first ? v[s[i - 1].second][2] : i + 1);
  }

  for(int i = 0; i < n; ++i){
    cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
