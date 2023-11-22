/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.07.2023 20:02:51
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;
  vector<string> c(n), d(m);
  vector<int> p(m + 1);
  map<string, int> mp;
  int ans = 0;
  for(int i = 0; i < n; ++i){
    cin >> c[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> d[i];
  }
  for(int i = 0; i < m + 1; ++i){
    cin >> p[i];
    if(i > 0){
      mp[d[i - 1]] = p[i];
    }
  }
  for(int i = 0; i < n; ++i){
    if(mp.find(c[i]) == mp.end()){
      ans += p[0];
    }
    else ans += mp[c[i]];
  }

  cout << ans << '\n';

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
