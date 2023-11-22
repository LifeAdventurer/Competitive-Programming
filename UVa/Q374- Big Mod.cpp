/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 24.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

long long ans = 1;
///*
int fastpow(long long b, long long p, long long m){
  if(p == 0){
    return ans;
  }
  else{
    if(p & 1) ans = (ans * b) % m;
    b = (b * b) % m;
    return fastpow(b, (p >> 1), m);
  }
}//*/

int main() {
  u_ying_u_with_whale;
  long long b, p; 
  int m;
  while(cin >> b >> p >> m){
    ans = 1;
    /*
    b %= m;
    while(p > 0){
      if(p & 1) ans = (ans * b) % m;
      b = (b * b) % m;
      p >>= 1;
    }
    */
    cout << fastpow(b, p, m) << '\n';
    //cout << ans << '\n';
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
