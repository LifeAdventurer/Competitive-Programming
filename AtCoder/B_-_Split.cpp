/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.09.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  string s;
  cin >> s;
  if(s[0] == '1'){
    cout << "No\n";
    return 0;
  }
  bool ok = false;
  vector<bool> v(7);
  v[0] = (s[6] == '1' ? true : false);
  v[1] = (s[3] == '1' ? true : false);
  v[2] = (s[1] == '1' || s[7] == '1' ? true : false);
  v[3] = (s[4] == '1' ? true : false);
  v[4] = (s[2] == '1' || s[8] == '1' ? true : false);
  v[5] = (s[5] == '1' ? true : false);
  v[6] = (s[9] == '1' ? true : false);
  for(int i = 0; i < 7; ++i){
    if(v[i]){
      ++i;
      for(; i < 7; ++i){
        if(!v[i]){
          ++i;
          for(; i < 7; ++i){
            if(v[i]) ok = true;
          }
        }
      }
    }
  } 
  cout << (ok ? "Yes\n" : "No\n");

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
