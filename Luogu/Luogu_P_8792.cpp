/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.11.2023 18:44:54
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
  
  int n;
  cin >> n;
  int cnt = 0, ans = n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
    cnt += v[i] == 1;
  }
  if(cnt){
    cout << n - cnt << '\n';
    return 0;
  }
  if(n == 1){
    cout << "-1\n";
    return 0;
  }
  int x = gcd(v[0], v[1]);
  for(int i = 2; i < n; ++i){
    x = gcd(x, v[i]);
  }
  if(x > 1){
    cout << "-1\n";
    return 0;
  }
  while(cnt < n){
    cnt++;
    for(int i = 0; i < n; ++i){
      v[i] = gcd(v[i], v[i + 1]);
      if(v[i] == 1){
        cout << n - 1 + cnt << '\n';
        return 0;
      }
    }
  }
  cout << "-1\n";

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/