/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 24.08.2023 21:15:19
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
vector<pair<int, int>> v;

int get(int x){
  return (x == p[x] ? x : p[x] = get(p[x]));
}

void unite(int x, int y){
  int a = get(x);
  int b = get(y);
  if(a != b){
    p[a] = b;
    v[a].first += v[b].first;
    v[a].second += v[b].second;
    v[b] = {0, 0};
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m, W;
  cin >> n >> m >> W;
  p.resize(n);
  v.resize(n);
  iota(p.begin(), p.end(), 0);
  for(int i = 0; i < n; ++i){
    int c, d;
    cin >> c >> d;
    v[i] = {c, d};
  }
  while(m--){
    int x, y;
    cin >> x >> y;
    x--; y--;
    unite(x, y);
  }
  vector<pair<int, int>> pairs;
  for(int i = 0; i < n; ++i){
    int x = get(i);
    if(x != i){
      v[x].first += v[i].first;
      v[x].second += v[i].second;
    }
  }
  for(int i = 0; i < n; ++i){
    if(get(i) == i){
      pairs.push_back(v[i]);
    } 
  }
  vector<int> dp(W + 1, 0);
  for(auto [ww, v] : pairs){
    for(int i = W - ww; i >= 0; --i){
      dp[i + ww] = max(dp[i + ww], dp[i] + v);
    }
  }
  cout << dp[W] << '\n';

  //bruh dsu is hard

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone. Lord have your way." Smiling<3 & Sabrina<3
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/