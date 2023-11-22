/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 22.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

const int MOD = 1000000007;

int power(long long a, long long b, int MOD){
  long long ans = 1;
  while(b > 0){
    if(b & 1) ans = (ans * a) % MOD;
    a = (a * a) % MOD;
    b >>= 1;
  }
  return ans;
}

int main() {
  u_ying_u_with_whale;
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << power(a, power(b, c, MOD - 1), MOD) << '\n';
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
