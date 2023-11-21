/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  setIO("buckets");

  int bx, by, rx, ry, lx, ly;
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 10; ++j){
      char c;
      cin >> c;
      if(c == 'B'){
        bx = i;
        by = j;
      }
      else if(c == 'R'){
        rx = i;
        ry = j;
      }
      else if(c == 'L'){
        lx = i;
        ly = j;
      }
    }
  }

  int ans = abs(bx - lx) + abs(by - ly);
  if((bx == lx && lx == rx && abs(by - ly) == abs(by - ry) + abs(ry - ly)) || (by == ly && ly == ry && abs(bx - lx) == abs(bx - rx) + abs(rx - lx))){
    ans++;
  }
  else ans--;

  cout << ans << '\n';

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
