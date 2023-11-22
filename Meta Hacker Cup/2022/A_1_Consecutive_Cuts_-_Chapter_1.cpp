/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  int cases = 1;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    vector<pair<int, int>> p;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      p.emplace_back(a[i], i);
    }
    for(int i = 0; i < n; ++i){
      cin >> b[i];
    }
    bool ok = true;
    if(k == 0){
      for(int i = 0; i < n; ++i){
        if(a[i] != b[i]){
          ok = false;
        }
      }
    }
    else{
      sort(all(p));
      int m = upper_bound(all(p), make_pair(b[0], 0)) - p.begin();
      m = p[m].second;
      if(m == 0 && k == 1) ok = false;
      for(int i = 0; i < n; ++i){
        if(a[(i + m) % n] != b[i]){
          ok = false;
        }
      }
    }
    cout << "Case #" << cases << ": " << (ok ? "YES\n" : "NO\n");
    cases++;
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
