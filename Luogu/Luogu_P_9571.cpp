/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.08.2023 14:14:17
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

multiset<int> ms[(int)2e5 + 5];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  int cnt = 0;
  set<int> s;
  for(int i = 0; i < n; ++i){
    int cmd, k, b;
    cin >> cmd >> k >> b;
    k += (int)1e5;
    if(cmd == 1){
      cnt++;
      s.insert(k);
      ms[k].insert(b);
    }
    else if(cmd == 2){
      cout << cnt - ms[k].size() << '\n';
    }
    else{
      ms[k].erase(b);
      cnt = ms[k].size();
      set<int> ss = s;
      for(int x : ss){
        if(x != k){
          ms[x].clear();
          s.erase(x);
        }
      }
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/