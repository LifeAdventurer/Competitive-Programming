/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.Feb.2023
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
  
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  vector<int> cnt(10, 0);
  for(char c : s){
    if(c == '4'){
      cnt[2] += 2;
      cnt[3] += 1;
    }
    else if(c == '6'){
      cnt[3] += 1;
      cnt[5] += 1;
    }
    else if(c == '8'){
      cnt[2] += 3;
      cnt[7] += 1;
    }
    else if(c == '9'){
      cnt[2] += 1;
      cnt[3] += 2;
      cnt[7] += 1;
    }
    else cnt[c - '0']++;
  }

  for(int i = 9; i >= 2; --i){
    for(int j = 0; j < cnt[i]; ++j){
      cout << i;
    }
  }
  cout << '\n';

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
