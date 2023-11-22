/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.Apr.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int MEX(vector<int> v){
  sort(all(v));
  if(v[0] > 0) return 0;
  for(int i = 1; i < v.size(); ++i){
    if(v[i] > v[i - 1] + 1){
      return v[i - 1] + 1;
    }
  }
  return v.back() + 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
      cin >> v[i];
    }
    int p = MEX(v);
    int l = n, r = -1;
    for(int i = 0; i < n; ++i){
      if(v[i] == p + 1){
        l = min(l, i);
        r = max(r, i);
      }
    }
    if(r == -1){
      cout << (p == n ? "No\n" : "Yes\n");
    }
    else{
      for(int i = l; i <= r; ++i){
        v[i] = p;
      }
      cout << (MEX(v) == p + 1 ? "Yes\n" : "No\n"); 
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
