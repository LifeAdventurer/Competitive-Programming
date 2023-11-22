/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while(cin >> n){
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n - i - 1; ++j){
        cout << " ";
      }
      for(int j = 0; j <= i; ++j){
        cout << char('A' + j);
      }
      for(int j = i - 1; j >= 0; --j){
        cout << char('A' + j);
      }
      cout << '\n';
    }
    for(int i = 0; i < n - 1; ++i){
      for(int j = 0; j < i + 1; ++j){
        cout << " ";
      }
      for(int j = 0; j < n - i - 1; ++j){
        cout << char('A' + j);
      }
      for(int j = n - i - 3; j >= 0; --j){
        cout << char('A' + j);
      }
      cout << '\n';
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
