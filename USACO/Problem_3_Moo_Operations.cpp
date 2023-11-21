/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.Jan.2023
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
    int ans = 1e3;

    bool ok = false;
    for(int i = 0; i <= (int)s.size() - 3; ++i){
      string p = s.substr(i, 3);
      if(p == "MOO"){
        ans = s.size() - 3;
        ok = true;
        break;
      }
      else if(p == "OOO" || p == "MOM"){
        ans = min(ans, (int)s.size() - 2);
        ok = true;
      }
      else if(p == "OOM"){
        ans = min(ans, (int)s.size() - 1);
        ok = true;
      }
    }
    
    cout << (ok ? ans : -1) << '\n';
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
