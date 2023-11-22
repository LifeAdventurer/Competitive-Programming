/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.Apr.2023
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
    string s;
    cin >> s;
    int n = s.size();
    string t = s;
    sort(all(t));
    if(t[0] == t[n - 1] && t[0] == '1'){
      cout << 1LL * s.size() * s.size() << '\n';
      continue;
    }

    long long mx = 0, cnt = 0, first;
    bool ok = true;
    for(char c : s){
      if(c == '1'){
        cnt++;
      }
      else{
        if(ok){
          first = cnt;
          ok = false;
        }
        mx = max(mx, cnt);
        cnt = 0;
      }
    }
    mx = max(mx, cnt);
    
    if(s[0] == s[n - 1] && s[0] == '1'){
      mx = max(mx, cnt + first);
    }
    
    if(mx & 1){
      mx = (mx + 1) / 2;
      cout << mx * mx << '\n';
    }
    else{
      cout << (mx / 2) * (mx / 2 + 1) << '\n';
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
