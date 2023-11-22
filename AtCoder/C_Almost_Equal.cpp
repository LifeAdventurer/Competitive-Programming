/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.May.2023
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
  
  vector<string> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  sort(all(v));

  bool ok = false;
  do{
    bool fail = false;
    for(int i = 0; i < n - 1; ++i){
      int cnt = 0;
      for(int j = 0; j < m; ++j){
        if(v[i][j] != v[i + 1][j]) cnt++;
      }
      if(cnt != 1){
        fail = true;
        break;
      }
    }
    if(!fail){
      ok = true;
      break;
    }
  }while(next_permutation(all(v)));

  cout << (ok ? "Yes\n" : "No\n");

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
