/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 24.08.2023 00:53:18
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

vector<int> p;

int get(int x){
  return (x == p[x] ? x : p[x] = get(p[x]));
}

void unite(int x, int y){
  int a = get(x);
  int b = get(y);
  if(a != b){
    p[a] = b;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, q;
  cin >> n >> m >> q;
  p.resize(n);
  iota(p.begin(), p.end(), 0);
  for(int i = 0; i < m + q; ++i){
    int x, y;
    cin >> x >> y;
    x--; y--;
    if(i < m){
      unite(x, y);
    }
    else{
      cout << (get(x) == get(y) ? "Yes\n" : "No\n");
    }
  }

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/