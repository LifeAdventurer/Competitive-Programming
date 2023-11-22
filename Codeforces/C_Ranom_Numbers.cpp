/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.08.2023 16:29:16
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int val[] = {1, 10, 100, 1000, 10000};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int n = s.size();
    reverse(s.begin(), s.end());
    long long ans = -1e18;
    vector<int> pos;
    for(int i = 0; i < 5; ++i){
      for(int j = 0; j < n; ++j){
        if(s[j] == (char) i + 'A'){
          pos.push_back(j);
          break;
        }
      }
      for(int j = n - 1; j >= 0; --j){
        if(s[j] == (char) i + 'A'){
          pos.push_back(j);
          break;
        }
      }
    }
    for(int x : pos){
      for(int i = 0; i < 5; ++i){
        string t = s;
        t[x] = (char) i + 'A';
        long long sum = 0;
        char mx = 'A';
        for(int j = 0; j < n; ++j){
          sum += val[t[j] - 'A'] * (mx > t[j] ? -1 : 1);
          mx = max(mx, t[j]);
        }
        ans = max(ans, sum);
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/