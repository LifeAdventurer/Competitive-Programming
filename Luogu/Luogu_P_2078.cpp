/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 24.08.2023 15:22:45
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

map<int, int> p;

int get(int x){
  return (x == p[x] ? x : p[x] = get(p[x]));
}

void unite(int x, int y){
  int a = get(x);
  int b = get(y);
  p[a] = b;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, P, Q;
  cin >> n >> m >> P >> Q;
  for(int i = 1; i <= n; ++i){
    p[i] = i;
  }
  for(int i = 1; i <= m; ++i){
    p[-i] = -i;
  }
  unite(1, -1);
  Q += P;
  while(Q--){
    int x, y;
    cin >> x >> y;
    unite(x, y);
  }
  int a = 0, b = 0;
  for(int i = 1; i <= n; ++i){
    a += (get(i) == get(-1));
  }
  for(int i = 1; i <= m; ++i){
    b += (get(-i) == get(1));
  }
  cout << min(a, b) << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/