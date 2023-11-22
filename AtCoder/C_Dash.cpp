/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 27.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, h, k;
  cin >> n >> m >> h >> k;
  string s;
  cin >> s;

  map<pair<int, int>, int> mp;
  for(int i = 0; i < m; ++i){
    int x, y;
    cin >> x >> y;
    mp[{x, y}] = 1;
  }

  bool ok = true;
  int x = 0, y = 0;
  for(int i = 0; i < n; ++i){
    if(s[i] == 'R') x++;
    else if(s[i] == 'L') x--;
    else if(s[i] == 'U') y++;
    else y--;
    h--;
    if(h < 0){
      ok = false;
      break;
    }
    if(mp[{x, y}] == 1 && h < k){
      mp[{x, y}] = 0;
      h = k;
    }
  }

  cout << (ok ? "Yes\n" : "No\n");

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
