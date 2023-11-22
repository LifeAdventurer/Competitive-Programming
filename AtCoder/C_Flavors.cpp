/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.08.2023 21:02:59
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

multiset<int> ms[(int)3e5 + 5];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  set<int> ss;
  for(int i = 0; i < n; ++i){
    int f, s;
    cin >> f >> s;
    ss.insert(f);
    ms[f].insert(s);
  }
  int ans = 0, F = 0, S = 0;
  for(int x : ss){
    int X = *ms[x].rbegin();
    if(X > F){
      if(F > S) S = F;
      F = X;
    } 
    else if(X > S) S = X;
  }
  ans = F + S;
  for(int x : ss){
    if(ms[x].size() < 2) continue;
    int a = *ms[x].rbegin(), b = *++ms[x].rbegin();
    ans = max(ans, a + b / 2);
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/