/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 22.08.2022
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
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  sort(all(v));
  int t;
  cin >> t;
  while(t--){
    int k;
    cin >> k;
    if(k < v[0]){
      cout << "no " << v[0] << '\n'; 
      continue;
    }
    else if(k > v[n - 1]){
      cout << v[n - 1] << " no\n";
      continue;
    }
    int l = 0, r = n - 1, m;
    bool find = false;
    while(l <= r){
      m = (l + r) >> 1;
      if(v[m] == k){
        cout << k << '\n';
        find = true;
        break;
      }
      else if(v[m] > k){
        r = m - 1;
      }
      else{
        l = m + 1;
      }
    }
    if(!find){
      if(v[m] < k) ++m;
      cout << v[m - 1] << " " << v[m] << '\n';
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
