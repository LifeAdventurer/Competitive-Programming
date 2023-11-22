/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.08.2023 23:43:56
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
  
  int n, m, c1, c2;
  cin >> n >> m >> c1 >> c2;
  int LCS = 0, k = 1, p = -1;
  vector<vector<int>> num((int)1e6 + 5);
  for(int i = 0; i < n; ++i){
    int x;
    cin >> x;
    num[x].push_back(i);
  }
  for(int i = 0; i < m; ++i){
    int x;
    cin >> x;
    if(!num[x].empty()){
      LCS++;
      auto it = upper_bound(num[x].begin(), num[x].end(), p);
      if(it == num[x].end()){
        k++;
        p = *num[x].begin();
      }
      else p = *it;
    }
  }
  cout << c1 * LCS << " " << c2 * k << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/