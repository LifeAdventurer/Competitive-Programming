/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.Jan.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

unordered_map<string, string> m;
unordered_map<string, bool> vis;

bool dfs(string s, string t){
  vis[s] = true;
  if(m.find(s) != m.end()){
    if(m[s] == t) return false;
    if(!dfs(m[s], t)) return false;
  }
  
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  string a, b;
  for(int i = 0; i < n; ++i){
    cin >> a >> b;
    m[a] = b;
    vis[a] = vis[b] = false;
  }

  bool ok = true;
  for(auto x : m){
    if(!vis[x.first] && !dfs(x.first, x.first)){
      ok = false;
      break;
    }
  }

  cout << (ok ? "Yes\n" : "No\n");

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
