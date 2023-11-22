/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

bool cmp(pair<int, pair<int, int>> A, pair<int, pair<int, int>> B){
  return A.second.first < B.second.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    
    vector<int> b(n);
    vector<pair<int, pair<int, int>>> v(n);
    for(int i = 0; i < n; ++i){
      v[i].first = i;
      cin >> v[i].second.first;
    }
    sort(all(v), cmp);
    for(int i = 0; i < n; ++i){
      cin >> b[i];
    }
    sort(all(b));
    for(int i = 0; i < n; ++i){
      v[i].second.second = b[i];
    }
    sort(all(v));
    
    for(int i = 0; i < n; ++i){
      cout << v[i].second.second << " \n"[i == n - 1];
    }
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
