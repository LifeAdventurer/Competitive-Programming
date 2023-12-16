/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.12.2023 20:04:10
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

vector<long long> ans;

void dfs(string s){
  if(s.size() == 13){
    return;
  }
  if(s.find('3') != string::npos){
    ans.push_back(stoll(s));
  }
  if(s.back() <= '1'){
    dfs(s + '1');
  }
  if(s.back() <= '2'){
    dfs(s + '2');
  }
  if(s.back() <= '3'){
    dfs(s + '3');
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  dfs("1");
  dfs("2");
  dfs("3");
  sort(ans.begin(), ans.end());
  int n;
  cin >> n;
  cout << ans[n - 1] << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/