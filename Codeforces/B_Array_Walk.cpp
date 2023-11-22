/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 25.08.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()

int main() {
  u_ying_u_with_whale;
  int t;
  cin >> t;
  while(t--){
    int n, k, z; // n = score count, k = move count, z = max move left count
    cin >> n >> k >> z;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
      cin >> v[i];
    }
    int ans = 0;
    for(int i = 0; i <= z; ++i){ // brute force the max of all z possible case, z = min(5, k)
      int r = k - i * 2; // the position after subtraction of the backwards
      int sum = 0, mx = 0;
      if(r < 0) continue;
      for(int j = 0; j <= r; ++j){
        if(j < n - 1) mx = max(mx, v[j] + v[j + 1]);
        sum += v[j];
      }
      ans = max(ans, sum + mx * i);
    }
    cout << ans << '\n';
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
