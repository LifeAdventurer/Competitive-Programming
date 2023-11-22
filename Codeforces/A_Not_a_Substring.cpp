/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 17.08.2023 22:35:49
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
  
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int n = s.size();
    string a, b;
    for(int i = 0; i < n; ++i){
      a += '(';
      b += "()";
    }
    for(int i = 0; i < n; ++i){
      a += ')';
    }
    bool ok = true;
    for(int i = 0; i <= n; ++i){
      ok &= (a.substr(i, n) != s);
      //debug(a.substr(i, n));
    }
    if(ok){
      cout << "Yes\n" << a << '\n';
      continue;
    } 
    ok = true;
    for(int i = 0; i <= n; ++i){
      ok &= (b.substr(i, n) != s);
    }
    if(ok){
      cout << "Yes\n" << b << '\n';
      continue;
    }
    cout << "No\n";
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/