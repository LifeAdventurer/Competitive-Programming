/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.08.2023 20:56:16
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
  
  vector<int> dp = {0, 0, 0};
  auto MEX = [&](set<int>& s){
    for(int i = 0;;++i){
      if(!s.count(i)){
        return i;
      }
    }
  };

  for(int i = 3; i <= 1222; ++i){
    set<int> s;
    for(int j = 1; j * 2 < i; ++j){
      s.insert(dp[j] ^ dp[i - j]);
    }
    dp.push_back(MEX(s));
  }

  //debug(dp);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << (n > 1222 || dp[n] > 0 ? "first\n" : "second\n");
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/