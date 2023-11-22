/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.Apr.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  

  int n, m;
  cin >> n >> m;
  if(n == 1) cout << "0\n";
  if(n > 18) return 0;
  vector<int> a(m), b(m), p(m);
  for(int i = 0; i < m; ++i){
    cin >> a[i] >> b[i] >> p[i];
  }

  long long x, y, ans = 1e18;
  for(int i = 0; i < (1 << n); ++i){
    x = 0, y = 0;
    set<int> r, s;
    for(int j = 0; j < n; ++j){
      if(i & (1 << j)){
        r.insert(j + 1);
      }
      else{
        s.insert(j + 1);
      }
    }
    for(int j = 0; j < m; ++j){
      if(r.count(a[j]) && r.count(b[j])) x += p[j];
      if(s.count(a[j]) && s.count(b[j])) y += p[j];
    }
    long long t = (x > y ? x : y);
    ans = (t > ans ? ans : t);
  }
  
  cout << (ans == 1e18 ? 0 : ans) << '\n';

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
