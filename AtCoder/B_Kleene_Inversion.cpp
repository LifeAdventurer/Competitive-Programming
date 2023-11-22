/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.Jun.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

const int mod = 1000000007;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;
  
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }

  long long ans = 0;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      if(v[i] <= v[j]) continue;
      if(i < j) ans += k;
      ans += (1LL * k * (k - 1) / 2);
      ans %= mod;
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
