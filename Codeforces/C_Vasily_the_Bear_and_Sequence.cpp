/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.06.2023 00:02:52
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;

  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }

  int b = (1 << 29);
  while(b){
    int x = -1;
    vector<int> ans;
    for(int i = 0; i < n; ++i){
      if(v[i] & b){
        ans.push_back(v[i]);
        x &= v[i];
      }
    }

    if((x & -x) == b){
      cout << ans.size() << '\n';
      for(int i = 0; i < (int)ans.size(); ++i){
        cout << ans[i] << " \n"[i == (int)ans.size() - 1];
      }
      return 0;
    }
    b >>= 1;
  }
  cout << -1 << '\n';

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
