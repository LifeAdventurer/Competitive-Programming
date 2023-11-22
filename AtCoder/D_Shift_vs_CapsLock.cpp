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
  
  int x, y, z;
  cin >> x >> y >> z;
  string s;
  cin >> s;

  vector<long long> dp(2);
  dp[0] = 0;
  dp[1] = z;
  for(char c : s){
    vector<long long> ndp(2);
    ndp[0] = dp[0] + (c == 'a' ? x : y);
    ndp[1] = dp[1] + (c == 'A' ? x : y);
    ndp[0] = min(ndp[0], ndp[1] + z);
    ndp[1] = min(ndp[1], ndp[0] + z);
    dp = ndp;
  }

  cout << min(dp[0], dp[1]) << '\n';

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
