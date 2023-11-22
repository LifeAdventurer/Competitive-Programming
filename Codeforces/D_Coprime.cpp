/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.Oct.2022
 *
 *    mood: ^_^   weather: cloudy
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
  vector<int> v[1005];
  
  for(int i = 1; i <= 1000; ++i){
    for(int j = 1; j <= 1000; ++j){
      if(__gcd(i, j) == 1) v[i].push_back(j);
    }
  }
  
  while(t--){
    
    int n;
    cin >> n;
    vector<int> a[1005];

    for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      a[x].push_back(i + 1);
    }

    int ans = -1;
    for(int i = 1; i <= 1000; ++i){
      for(int j : v[i]){
        if(!a[i].empty() && !a[j].empty()) ans = max(ans, a[i].back() + a[j].back());
      }
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
