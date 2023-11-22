/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define I_want_to_be_dian  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  I_want_to_be_dian;
  int a, b, c;
  cin >> a >> b >> c;
  if(c == 0){
    cout << "0\n";
    return 0;
  }
  int sum = 0, p = 1;
  while(c > 0){
    if(c % 10){
      sum += p * (c % 10);
    }
    p *= a;
    c /= 10;
  }
  p = pow(b, 9);
  bool ok = false;
  while(p){
    if(sum / p == 0 && ok){
      cout << "0";
    }
    else if(sum / p){
      cout << sum / p;
      sum %= p;
      ok = true;
    }
    p /= b;
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
