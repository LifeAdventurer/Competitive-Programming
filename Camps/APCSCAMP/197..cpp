/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.Dec.2022
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
  
  string s;
  getline(cin, s);
    
  int mx = 0, l, r, n = s.size();
    
  for(int i = 0; i < n; ++i){
    int j = 0;
    while(i - j >= 0 && i + j < n && s[i - j] == s[i + j]) ++j;
    if(mx < j * 2 - 1){
      mx = j * 2 - 1;
      l = i - j + 2;
      r = i + j;
    }
        
    j = 0;
    while(i - j >= 0 && i + j + 1 < n && s[i - j] == s[i + j + 1]) ++j;
    if(mx < j * 2){
      mx = j * 2;
      l = i - j + 2;
      r = i + j + 1;
    }
  }
    
  cout << mx << '\n' << l << " " << r << '\n';

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
