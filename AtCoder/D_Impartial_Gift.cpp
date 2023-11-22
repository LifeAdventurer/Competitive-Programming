/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  long long n, m, d;
  cin >> n >> m >> d;

  vector<long long> a(n), b(m);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int j = 0; j < m; ++j){
    cin >> b[j];
  }
  sort(all(a));
  sort(all(b));

  long long ans = -1;
  for(int i = 0; i < n; ++i){
    auto p = upper_bound(all(b), a[i] + d);
    long long x = *(p - 1);
    if(p != b.begin()){
      if(x >= a[i] - d){
        ans = max(ans, a[i] + x);
      } 
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
