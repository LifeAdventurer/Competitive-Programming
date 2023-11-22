/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 07.09.2023 23:56:19
 *
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int N = (int) 2e5 + 5;

int n;
int segtree[N * 2];

void update(int k, int x){
  k += n;
  segtree[k] = x;
  while(k > 0){
    k >>= 1;
    segtree[k] = min(segtree[k << 1], segtree[k << 1 | 1]);
  }
}

int query(int a, int b){
  a += n; b += n;
  int res = (int) 1e9;
  while(a <= b){
    if(a & 1){
      res = min(res, segtree[a]);
      a++;
    }
    if(~b & 1){
      res = min(res, segtree[b]);
      b--;
    }
    a >>= 1;
    b >>= 1;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int q;
  cin >> n >> q;
  for(int i = 0; i < n; ++i){
    int x;
    cin >> x;
    update(i, x);
  }
  while(q--){
    int cmd, a, b;
    cin >> cmd >> a >> b;
    if(cmd == 1){
      a--;
      update(a, b);
    }
    else{
      a--; b--;
      cout << query(a, b) << '\n';
    }
  }
  

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/