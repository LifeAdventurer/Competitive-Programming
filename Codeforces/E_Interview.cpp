/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.08.2023 15:11:52
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; ++i){
      cin >> v[i];
    }
    partial_sum(v.begin(), v.end(), v.begin());

    auto Query = [&](int l, int mid) -> bool{
      cout << "? " << mid - l + 1;
      for(int i = l; i <= mid; ++i){
        cout << " " << i;
      }
      cout << endl;
      int x;
      cin >> x;
      return (x == (v[mid] - v[l - 1]) ? false : true);
    };

    int l = 1, r = n;
    while(l < r){
      int mid = (l + r) >> 1;
      if(Query(l, mid)){
        r = mid;
      }
      else{
        l = mid + 1;
      }
    }
    cout << "! " << r << endl;
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/