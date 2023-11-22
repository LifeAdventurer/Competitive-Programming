/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 22.Dec.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

long long pow10(long long x){
  long long res = 1;
  for(int i = 0; i < x; ++i){
    res *= 10;
  }
  return res;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int q;
  cin >> q;

  while(q--){
    long long k;
    cin >> k;

    k--;

    long long i = 1;
    while(pow10(i - 1) * 9 * i < k){
      k -= pow10(i - 1) * 9 * i;
      i++;
    }

    string s = to_string(pow10(i - 1) + k / i);
    cout << s[k % i] << '\n';
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
