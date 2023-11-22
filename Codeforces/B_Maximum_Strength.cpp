/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.06.2023 16:17:11
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int ans(string a, string b){
  int sum = 0;
  for(int i = 0; i < (int)a.size(); ++i){
    sum += abs(a[i] - b[i]);
  }
  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    string l, r;
    cin >> l >> r;
    int x = r.size() - l.size();
    while(x--){
      l = '0' + l;
    }
    bool ldown = false, rup = false, free = false;
    for(int i = 0; i < (int)l.size(); ++i){
      if(l[i] == r[i] && !free){
        continue;
      }
      else{
        if(free){
          r[i] = '0';
          l[i] = '9';
        }
        free = true;
      }
    }

    cout << ans(l, r) << '\n';
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
