/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.May.2023
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

vector<int> check(vector<int> v, int l, int r){
  vector<int> a;
  for(int i = r + 1; i < v.size(); ++i){
    a.push_back(v[i]);
  }
  for(int i = r; i >= l; --i){
    a.push_back(v[i]);
  }
  for(int i = 0; i < l; ++i){
    a.push_back(v[i]);
  }
  return a;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;

    vector<int> v(n);
    int f = 0, s = 0, fp, sp;
    for(int i = 0; i < n; ++i){
      cin >> v[i];
      if(v[i] > f){
        f = v[i];
        fp = i;
      }
      if(v[i] < f && v[i] > s){
        s = v[i];
        sp = i;
      }
    }

    vector<int> ans = check(v, 0, n - 1);
    
    int ptr = fp;
    if(fp == 0 && n > 1){
      ptr = sp;
    }

    for(int i = ptr - 1; i >= 0; --i){
      ans = max(ans, check(v, i, ptr - 1));
    }
    ans = max(ans, check(v, ptr, ptr));

    for(int i = 0; i < n; ++i){
      cout << ans[i] << " \n"[i == n - 1];
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
