/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.Sep.2022
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
  int a, b, c, d;
  vector<vector<char>> mp(10, vector<char>(10));
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 10; ++j){
      cin >> mp[i][j];
    }
  }
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 10; ++j){
      if(mp[i][j] == '#'){
        if((i == 0 || mp[i - 1][j] != '#') && (j == 0 || mp[i][j - 1] != '#')){
          a = i;
          c = j;
        }
        if((i == 9 || mp[i + 1][j] != '#') && (j == 0 || mp[i][j + 1] != '#')){
          b = i;
          d = j;
        }
      }
    }
  }
  cout << a + 1 << " " << b + 1 << '\n' << c + 1 << " " << d + 1 << '\n';

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
