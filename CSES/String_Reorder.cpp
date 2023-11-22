/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.09.2023 21:06:13
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
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
  
  string s;
  cin >> s;
  int n = s.size();
  vector<int> v(26, 0);
  for(int i = 0; i < n; ++i){
    v[s[i] - 'A']++;
  }

  if(*max_element(v.begin(), v.end()) > (n + 1) / 2){
    cout << "-1\n";
    return 0;
  }

  char p1 = 'A', p2 = 'B';
  string ans = "";
  for(int i = 0; i < n; ++i){
    int k = max_element(v.begin(), v.end()) - v.begin();
    if(((n - i) & 1) && v[k] == (n - i + 1) / 2){
      ans += (char) k + 'A';
      v[k]--;
      continue;
    }
    while((p1 - 'A') < 25 && (v[p1 - 'A'] == 0 || p1 == p2)) p1++;
    while((p2 - 'A') < 25 && (v[p2 - 'A'] == 0 || p1 == p2)) p2++;
    if(p1 > p2) swap(p1, p2);
    if(ans.empty() || ans.back() != p1){
      ans += p1;
      v[p1 - 'A']--;
    }
    else{
      ans += p2;
      v[p2 - 'A']--;
    }
  }
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/