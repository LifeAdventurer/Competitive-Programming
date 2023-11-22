/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.07.2023 11:58:20
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
  while(t--){
    int n;
    cin >> n;
    int cnt = 1;
    vector<int> ans;
    while(n){
      if(ans.empty()) ans.push_back(0);
      else if(n & 1){
        ans.push_back(cnt);
        cnt = 1; 
      }
      else cnt++;
      n >>= 1;
    }
    cout << ans.size() << '\n';
    for(int i = 0; i < (int)ans.size(); ++i){
      cout << ans[i] << " \n"[i == (int)ans.size() - 1];
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
