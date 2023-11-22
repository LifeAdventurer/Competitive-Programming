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
  int t;
  cin >> t;
  while(t--){
    int s;
    cin >> s;
    vector<int> v(s);
    for(int i = 0; i < s; ++i){
      cin >> v[i];
    }
    sort(all(v));
    vector<bool> ans(30005);
    for(int i = 0; i <= 30000; ++i){
      int l = 0, r = s - 1;
      while(v[l] + v[r] != i && l < r){
        if(v[l] + v[r] > i) r--;
        else if(v[l] + v[r] < i) l++;
      }
      ans[i] = (v[l] + v[r] == i && l < r ? true : false);
    }
    int q;
    cin >> q;
    while(q--){
      int w; 
      cin >> w;
      if(w > 30000) cout << "So Bad!\n";
      else cout << (ans[w] ? "Good!\n" : "So Bad!\n");
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
