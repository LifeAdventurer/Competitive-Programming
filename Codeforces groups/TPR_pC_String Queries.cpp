/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.Dec.2022
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
  
  map<string, int> m;

  int q;
  cin >> q;
  
  while(q--){
    int opt;
    string s;
    cin >> opt >> s;

    reverse(all(s));

    if(opt == 1){
      m[s]++;
    }
    else if(opt == 2){
      m[s]--;
      if(!m[s]) m.erase(s);
    }
    else{
      int ans = 0;
      for(const auto &x : m){
        int cnt = 0;
        string ss = x.first;

        for(int i = 0; i < min(s.size(), ss.size()); ++i){
          if(s[i] == ss[i]) cnt++; 
          else break;
        }

        ans = max(ans, cnt);
      }
      cout << ans << '\n';
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
