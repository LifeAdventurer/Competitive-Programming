/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 29.Apr.2023
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
  
  long long n;
  cin >> n;

  vector<bool> is_prime(1e6, true);
  for(int i = 2; i * i <= 1e6; ++i){
    if(is_prime[i]){
      for(int j = i * 2; j <= 1e6; j += i){
        is_prime[j] = false;
      }
    }
  }

  vector<int> primes;
  for(int i = 2; i <= 1e6; ++i){
    if(is_prime[i]){
      primes.push_back(i);
    }
  }
  
  int ans = 0;
  for(int i = 0; i < 53; ++i){
    for(int j = i + 1; j < 1229; ++j){
      for(int k = j + 1; k < 78498; ++k){
        long long res = 1LL * primes[i] * primes[i] * primes[j] * primes[k] * primes[k];
        if(res <= n) ans++;
        else break;
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
