/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 02.Jun.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  vector<bool> v(1e6 + 5, true);
  for(int i = 2; i * i <= 1e6; ++i){
    for(int j = i * 2; j <= 1e6; j += i){
      v[j] = false;
    }
  }

  vector<int> primes;
  for(int i = 2; i < 1e6; ++i){
    if(v[i]) primes.push_back(i);
  }

  long long n;
  cin >> n;

  int ans = 0;
  for(auto x : primes){
    if(n % x) continue;

    int cnt = 0;
    while(n % x == 0){
      cnt++;
      n /= x;
    }

    int p = 1;
    while(cnt >= p){
      cnt -= p;
      p++;
    }

    ans += p - 1;
  }

  if(n > 1) ans++;
  
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
