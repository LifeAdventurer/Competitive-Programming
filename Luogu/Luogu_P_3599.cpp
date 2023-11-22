/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.09.2023 15:00:30
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int fastpow(int x, int y, int mod){
  int res = 1;
  while(y){
    if(y & 1) res = (1LL * res * x) % mod;
    y >>= 1;
    x = (1LL * x * x) % mod;
  }
  return res;
}

const int N = (int) 1e5;

bitset<N + 5> np;
int p[N + 5], cnt = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  np[1] = true;
  for(int i = 1; i <= N; ++i){
    if(!np[i]) p[++cnt] = i;
    for(int j = 1; j <= cnt && i * p[j] <= N; ++j){
      np[i * p[j]] = true;
    }
  }
  

  int x, t;
  cin >> x >> t;
  while(t--){
    int n;
    cin >> n;
    if(x == 1){
      if(n & 1 && n ^ 1){
        cout << "0\n";
      }
      else{
        cout << "2 ";
        for(int i = 1; i <= n; ++i){
          cout << (i & 1 ? n - i + 1 : i - 1) << " \n"[i == n];
        }
      }
    }
    else{
      if(n == 1){
        cout << "2 1\n";
        continue;
      }
      if(n == 4){
        cout << "2 1 3 2 4\n";
        continue;
      }
      if(!np[n]){
        cout << "2 1";
        int k = 1;
        for(int i = 2; i <= n; ++i){
          int x = fastpow(k, n - 2, n);
          cout << " " << x + 1;
          k = 1LL * k * (x + 1) % n;
        }
        cout << '\n';
        continue;
      }
      cout << "0\n";
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/