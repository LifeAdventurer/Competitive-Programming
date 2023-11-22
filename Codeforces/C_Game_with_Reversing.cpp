/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.06.2023 16:33:39
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int tt;
  cin >> tt;
  while(tt--){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int diff = 0, ans = 0;
    for(int i = 0; i < n; ++i){
      if(s[i] != t[i]) diff++;
    }
    if(diff == 0){
      cout << 0 << '\n';
      continue;
    }
    if(diff & 1) ans = diff * 2 - 1;
    else ans = diff * 2;

    diff = 0;  
    reverse(all(t));
    for(int i = 0; i < n; ++i){
      if(s[i] != t[i]) diff++;
    }
    if(diff == 0){
      cout << 2 << '\n';
      continue;
    }
    if(diff & 1) ans = min(ans, diff * 2);
    else ans = min(ans, diff * 2 - 1);

    cout << ans << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Smiling<3 is with you."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
