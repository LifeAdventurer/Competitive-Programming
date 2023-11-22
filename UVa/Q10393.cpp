/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, f;
  vector<string> v = {"", "qaz", "wsx", "edc", "rfvtgb", "", "", "yhnujm", "ik", "ol", "p"};
  while(cin >> f >> n){
    string s = "";
    for(int i = 0; i < f; ++i){
      int x;
      cin >> x;
      s += v[x];
    }

    unsigned int mx = 0;
    multiset<string> ans;
    while(n--){
      string word;
      cin >> word;

      bool ok = true;
      for(char c : word){
        for(char x : s){
          if(c == x){
            ok = false;
            break;
          }
        }
        if(!ok) break;
      }

      if(ok){
        mx = max(mx, word.size());
        ans.insert(word);
      }
    }

    int cnt = 0;
    for(auto x : ans){
      if(x.size() == mx) cnt++;
    }

    cout << cnt << '\n';
    for(string it : ans) if(it.size() == mx) cout << it << '\n';
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
