/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.Feb.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

long long fastpow(long long x, long long y, int mod){
  x %= mod;
  long long res = 1;
  while(y){
    if(y & 1) res = res * x % mod;
    y >>= 1;
    x = x * x % mod;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for(int i = 0; i < n; ++i){
      cin >> v[i];
      cnt += (v[i] == 2);
    }
    if(cnt & 1){
      cout << -1 << '\n';
      continue;
    }
    else if(cnt == 0){
      cout << 1 << '\n';
      continue;
    }
    cnt /= 2;
    for(int i = 0; i < n; ++i){
      if(cnt == 0){
        cout << i << '\n';
        break;
      }
      else if(v[i] == 2) cnt--;
    }
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
