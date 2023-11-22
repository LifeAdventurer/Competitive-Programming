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
    int a = 0, b = 0, cnt = 0, x = 0, y = 0;
    while(n){
      int p = n % 10;
      if(x > y){
        a += pow(10, cnt) * (p / 2);
        b += pow(10, cnt) * (p - p / 2);
        x += (p / 2);
        y += (p - p / 2);
      }
      else{
        b += pow(10, cnt) * (p / 2);
        a += pow(10, cnt) * (p - p / 2);
        y += (p / 2);
        x += (p - p / 2);
      }
      cnt++;
      n /= 10;
    }
    cout << a << " " << b << '\n';
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
